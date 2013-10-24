<?php
/**
 * @file
 * construct_teams.features.inc
 */

/**
 * Implements hook_views_api().
 */
function construct_teams_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function construct_teams_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
