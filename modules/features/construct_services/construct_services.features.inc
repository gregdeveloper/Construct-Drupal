<?php
/**
 * @file
 * construct_services.features.inc
 */

/**
 * Implements hook_views_api().
 */
function construct_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function construct_services_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'services_category' => array(
      'name' => t('Services Category'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
