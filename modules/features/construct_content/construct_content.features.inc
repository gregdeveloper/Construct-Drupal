<?php
/**
 * @file
 * construct_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function construct_content_node_info() {
  $items = array(
    'construct_page' => array(
      'name' => t('Construct Page'),
      'base' => 'node_content',
      'description' => t('A page of content field collections for easy column arrangement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
