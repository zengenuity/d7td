<?php


function d7td_username(&$variables) {
  if (isset($variables['link_path'])) {
    // We have a link path, so we should generate a link using l().
    // Additional classes may be added as array elements like
    // $variables['link_options']['attributes']['class'][] = 'myclass';
    $output = l($variables['name'], $variables['link_path'], $variables['link_options']) . $variables['extra'];
  }
  else {
    // Modules may have added important attributes so they must be included
    // in the output. Additional classes may be added as array elements like
    // $variables['attributes_array']['class'][] = 'myclass';
    $output = '<span' . drupal_attributes($variables['attributes_array']) . '>' . $variables['name'] . $variables['extra'] . '</span>';
  }
  return $output;
}

function d7td_preprocess_username(&$variables) {
  if (empty($variables['account']->mail)) {
    $variables['account'] = user_load($variables['account']->uid);
  }
  if (!empty($variables['account']->mail)) {
    $variables['extra'] = ' (' . l($variables['account']->mail, 'mailto:' . $variables['account']->mail)  . ')'; 
  }
}

function d7td_process_username(&$variables) {
  $variables['extra'] = ' (' . t('Just kidding') . ')';
}

function d7td_preprocess_node(&$variables) {
  if ($variables['display_submitted']) {
    $node = $variables['node'];
    $variables['date']      = format_date($node->created, 'long');
    $variables['submitted'] = t('Posted by !username on !datetime', array('!username' => $variables['name'], '!datetime' => $variables['date']));
  }
}

function d7td_preprocess_html(&$variables) {
  if ($GLOBALS['user']->uid == 1) {
//    $variables['classes_array'][] = 'superadmin-ftw';
    drupal_add_css(drupal_get_path('theme', 'd7td') . '/css/superadmin.css');
  }
}