<?php

function d7td_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['d7td_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('D7TD Options'),
  );
  $form['d7td_settings']['d7td_articles_red'] = array(
    '#type' => 'checkbox',
    '#title' => t('Make article node teaser links red'),
    '#default_value' => theme_get_setting('d7td_articles_red'),
  );
}