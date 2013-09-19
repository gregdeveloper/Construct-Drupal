<?php
/**
 * @file
 * backstretch_background.features.inc
 */

/**
 * Implements hook_views_api().
 */
function backstretch_background_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function backstretch_background_node_info() {
  $items = array(
    'backstretch' => array(
      'name' => t('Backstretch'),
      'base' => 'node_content',
      'description' => t('Creates an image slideshow using the backstretch module'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
