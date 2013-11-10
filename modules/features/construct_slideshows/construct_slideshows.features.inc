<?php
/**
 * @file
 * construct_slideshows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function construct_slideshows_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function construct_slideshows_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function construct_slideshows_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide for a slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
