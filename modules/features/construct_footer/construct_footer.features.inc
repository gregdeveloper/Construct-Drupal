<?php
/**
 * @file
 * construct_footer.features.inc
 */

/**
 * Implements hook_node_info().
 */
function construct_footer_node_info() {
  $items = array(
    'construct_footer' => array(
      'name' => t('Footer'),
      'base' => 'node_content',
      'description' => t('Provides a footer block with links and copyright'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
