<?php
/**
 * @file
 * portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function portfolio_node_info() {
  $items = array(
    'portfolio_project' => array(
      'name' => t('Portfolio Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
