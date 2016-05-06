<?php
/**
 * @file
 * worldvision_project.features.inc
 */

/**
 * Implements hook_node_info().
 */
function worldvision_project_node_info() {
  $items = array(
    'worldvision_project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre del país'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
