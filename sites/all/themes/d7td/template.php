<?php

/**
 * Returns HTML for a recent node to be displayed in the recent content block.
 *
 * @param $variables
 *   An associative array containing:
 *   - node: A node object.
 *
 * @ingroup themeable
 */
function d7td_node_recent_content($variables) {
  $node = $variables['node'];

  $output = '<div class="node-title">';
  $output .= l($node->title, 'node/' . $node->nid);
  $output .= theme('mark', array('type' => node_mark($node->nid, $node->changed)));
  $output .= '</div><div class="node-author">';
  $account = user_load($node->uid);
  $output .= theme('username', array('account' => $account));
  $output .= '</div>';
  $output .= '<div class="node-created">';
  $output .= format_date($node->created);
  $output .= '</div>';

  return $output;
}

function d7td_mark($variables) {
  $type = $variables['type'];
  global $user;
  if ($user->uid) {
    if ($type == MARK_NEW) {
      return ' <span class="marker">**</span>';
    }
    elseif ($type == MARK_UPDATED) {
      return ' <span class="marker">*</span>';
    }
  }
}

function d7td_preprocess_username(&$variables) {
  if (!empty($variables['account']->mail)) {
    $variables['extra'] .= ' (' . $variables['account']->mail . ')';
  }
  $variables['link_attributes']['rel'] = 'nofollow';
}

function d7td_process_username(&$variables) {
  $variables['extra'] = str_replace('@', '@NOSPAM.', $variables['extra']);
}

function d7td_preprocess_node(&$variables) {
  $node = $variables['node'];
  if (variable_get('node_submitted_' . $node->type, TRUE)) {
    $variables['submitted'] = t('Posted by !username on !datetime', array('!username' => theme('username', array('account' => user_load($node->uid))), '!datetime' => $variables['date']));
  }
  
  if (!empty($variables['preprocess_fields']) && in_array('comment_info', $variables['preprocess_fields'])) {
    $comment_user = user_load($variables['last_comment_uid']);
    $comment_username = theme('username', array('account' => $comment_user));
    $variables['comment_info'] = t('Comment Count: @count, Last Comment By: !commenter', array('@count' => $variables['comment_count'], '!commenter' => $comment_username));
  }
  
}

function d7td_preprocess_html(&$variables) {
  if ($GLOBALS['user']->uid == 1) {
    drupal_add_css(drupal_get_path('theme', 'd7td') . '/css/superadmin.css');
  }
}

function d7td_form_alter(&$form, &$form_state, $form_id) {

  if (!empty($form['#node_edit_form'])) {
    
    unset($form['additional_settings']);
    $form['options']['#collapsed'] = FALSE;
    $form['menu']['#collapsed'] = FALSE;
    $form['path']['#collapsed'] = FALSE;
    
    $form['comment_settings']['#access'] = FALSE;
  }
}

function d7td_theme($existing, $type, $theme, $path) {
  return array(
    'node_form' => array(
      'render element' => 'form',
      'template' => 'node-form',
      'path' => drupal_get_path('theme', 'd7td') . '/templates',
    ),
  );
}

function d7td_preprocess_node_form(&$variables) {
  $variables['buttons'] = drupal_render($variables['form']['actions']);
  
  if (!empty($variables['form']['field_tags'])) {
    $variables['tags'] = drupal_render($variables['form']['field_tags']);
  }
  
  $variables['right_side'] = drupal_render($variables['form']['options']);
  $variables['right_side'] .= drupal_render($variables['form']['path']);
  $variables['right_side'] .= drupal_render($variables['form']['menu']);
  
  $variables['right_side'] .= drupal_render($variables['form']['comment_settings']);
  $variables['right_side'] .= drupal_render($variables['form']['revision_information']);
  $variables['right_side'] .= drupal_render($variables['form']['author']);
  
  $variables['left_side'] = drupal_render_children($variables['form']);
  
  drupal_add_css(drupal_get_path('theme', 'd7td') . '/css/node-form.css');
}