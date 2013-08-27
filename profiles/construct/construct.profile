<?php

/* This file is used to add, alter or remove steps the install process */

/**
 * Implements hook_install_tasks().
 */
function construct_install_tasks($install_state) {
  $tasks = array(
    'set_theme_defaults' => array()
  );
  return $tasks;
}

/**
 * Function to enable default themes
 */
function set_theme_defaults() {
  $enable = array(
    'theme_default' => 'construct',
    'admin_theme' => 'seven'
  );
  theme_enable($enable);
  return true;
}

?>