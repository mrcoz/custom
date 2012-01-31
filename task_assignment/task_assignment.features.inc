<?php
/**
 * @file
 * task_assignment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function task_assignment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function task_assignment_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function task_assignment_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Assign a task to be complete, has work flow and approval process'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
