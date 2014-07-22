<?php
/**
 * @file
 * test_3.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function test_3_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|activity';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'activity';
  $ds_fieldsetting->settings = array(
    'ds_switch_field' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'vms' => array(
          'full' => 'Full',
          'teaser' => 'Teaser',
          'activity' => 'Activity',
        ),
        'ft' => array(),
      ),
    ),
    'activity_description' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comment_info' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_type_identifier' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:81:"<img src="http://localhost:8080/theming/sites/all/themes/d7td/images/bird.gif" />";s:6:"format";s:9:"full_html";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_tiny',
    ),
  );
  $export['node|article|activity'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_switch_field' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comment_info' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_box' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'above',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'in-a-box',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Categories',
          'lb-el' => 'label',
          'lb-cl' => 'tags-label',
          'lb-at' => 'something="something"',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'in-a-box',
        ),
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ds_switch_field' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'vms' => array(
          'full' => 'Full',
          'teaser' => 'Teaser',
          'activity' => 'Activity',
        ),
        'ft' => array(),
      ),
    ),
    'comment_info' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_box' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|article|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'ds_switch_field' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'vms' => array(
          'full' => 'Full',
          'teaser' => 'Teaser',
          'activity' => 'Activity',
        ),
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function test_3_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'activity_description';
  $ds_field->label = 'Activity Description';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|activity';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php

return \'<p>\' . t(\'@author created a new @type.\', array(\'@author\' => $entity->name, \'@type\' => $entity->type)) . \'</p>\';

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['activity_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'comment_info';
  $ds_field->label = 'Comment Info';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array();
  $export['comment_info'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function test_3_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|activity';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'activity';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
        1 => 'author',
        2 => 'post_date',
        3 => 'node_type_identifier',
        4 => 'comment_info',
      ),
      'right' => array(
        5 => 'activity_description',
        6 => 'title',
        7 => 'field_image',
        8 => 'body',
        9 => 'ds_switch_field',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'author' => 'left',
      'post_date' => 'left',
      'node_type_identifier' => 'left',
      'comment_info' => 'left',
      'activity_description' => 'right',
      'title' => 'right',
      'field_image' => 'right',
      'body' => 'right',
      'ds_switch_field' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|article|activity'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'author',
        2 => 'post_date',
        3 => 'field_tags',
        4 => 'search_box',
        5 => 'comment_info',
      ),
      'right' => array(
        6 => 'ds_switch_field',
        7 => 'body',
      ),
      'footer' => array(
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'author' => 'left',
      'post_date' => 'left',
      'field_tags' => 'left',
      'search_box' => 'left',
      'comment_info' => 'left',
      'ds_switch_field' => 'right',
      'body' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'right' => array(
        'bird-on-it' => 'bird-on-it',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'aside',
      'right' => 'article',
      'footer' => 'footer',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => 'An Article by %node:author',
    'hide_sidebars' => 1,
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_test_field',
      ),
      'right' => array(
        3 => 'field_image',
        4 => 'field_tags',
        5 => 'field_test_field_2',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_test_field' => 'left',
      'field_image' => 'right',
      'field_tags' => 'right',
      'field_test_field_2' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|article|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'author',
        3 => 'post_date',
        4 => 'field_tags',
        5 => 'search_box',
        6 => 'comment_info',
      ),
      'right' => array(
        2 => 'body',
        7 => 'ds_switch_field',
      ),
      'footer' => array(
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'author' => 'left',
      'body' => 'right',
      'post_date' => 'left',
      'field_tags' => 'left',
      'search_box' => 'left',
      'comment_info' => 'left',
      'ds_switch_field' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'right' => array(
        'bird-on-it' => 'bird-on-it',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'aside',
      'right' => 'article',
      'footer' => 'footer',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => 'An Article by %node:author',
    'hide_sidebars' => 1,
  );
  $export['node|article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'author',
        2 => 'field_tags',
      ),
      'right' => array(
        3 => 'title',
        4 => 'ds_switch_field',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'author' => 'left',
      'field_tags' => 'left',
      'title' => 'right',
      'ds_switch_field' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function test_3_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'activity';
  $ds_view_mode->label = 'Activity';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['activity'] = $ds_view_mode;

  return $export;
}
