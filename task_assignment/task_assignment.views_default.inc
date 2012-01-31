<?php
/**
 * @file
 * task_assignment.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function task_assignment_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'task_assignments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Task Assignments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Task Assignments';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create task content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_assignment' => 'field_assignment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assignment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_task_proj']['id'] = 'field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['table'] = 'field_data_field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['field'] = 'field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_task_proj']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Topics';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Status Update */
  $handler->display->display_options['fields']['field_task_status']['id'] = 'field_task_status';
  $handler->display->display_options['fields']['field_task_status']['table'] = 'field_data_field_task_status';
  $handler->display->display_options['fields']['field_task_status']['field'] = 'field_task_status';
  $handler->display->display_options['fields']['field_task_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_status']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_task_status']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_task_status']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_task_status']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_task_status']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_task_status']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_task_status']['field_api_classes'] = 0;
  /* Field: Content: Active Status */
  $handler->display->display_options['fields']['field_task_active']['id'] = 'field_task_active';
  $handler->display->display_options['fields']['field_task_active']['table'] = 'field_data_field_task_active';
  $handler->display->display_options['fields']['field_task_active']['field'] = 'field_task_active';
  $handler->display->display_options['fields']['field_task_active']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_active']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_active']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_active']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_active']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_active']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_active']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_active']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_active']['field_api_classes'] = 0;
  /* Field: Content: WarReview->Approve */
  $handler->display->display_options['fields']['warreview_approve']['id'] = 'warreview_approve';
  $handler->display->display_options['fields']['warreview_approve']['table'] = 'node';
  $handler->display->display_options['fields']['warreview_approve']['field'] = 'warreview_approve';
  /* Sort criterion: Content: Priority (field_task_priority) */
  $handler->display->display_options['sorts']['field_task_priority_value']['id'] = 'field_task_priority_value';
  $handler->display->display_options['sorts']['field_task_priority_value']['table'] = 'field_data_field_task_priority';
  $handler->display->display_options['sorts']['field_task_priority_value']['field'] = 'field_task_priority_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'task' => 'task',
  );
  /* Filter criterion: Content: Active Status (field_task_active) */
  $handler->display->display_options['filters']['field_task_active_value']['id'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['table'] = 'field_data_field_task_active';
  $handler->display->display_options['filters']['field_task_active_value']['field'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_task_active_value']['group'] = '0';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator_id'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['label'] = 'Active Status (field_task_active)';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['identifier'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'task' => 'task',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Active Status (field_task_active) */
  $handler->display->display_options['filters']['field_task_active_value']['id'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['table'] = 'field_data_field_task_active';
  $handler->display->display_options['filters']['field_task_active_value']['field'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_task_active_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator_id'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['label'] = 'Active Status (field_task_active)';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['identifier'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Project (field_task_proj) */
  $handler->display->display_options['filters']['field_task_proj_tid']['id'] = 'field_task_proj_tid';
  $handler->display->display_options['filters']['field_task_proj_tid']['table'] = 'field_data_field_task_proj';
  $handler->display->display_options['filters']['field_task_proj_tid']['field'] = 'field_task_proj_tid';
  $handler->display->display_options['filters']['field_task_proj_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_task_proj_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_task_proj_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_task_proj_tid']['expose']['operator_id'] = 'field_task_proj_tid_op';
  $handler->display->display_options['filters']['field_task_proj_tid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_task_proj_tid']['expose']['operator'] = 'field_task_proj_tid_op';
  $handler->display->display_options['filters']['field_task_proj_tid']['expose']['identifier'] = 'field_task_proj_tid';
  $handler->display->display_options['filters']['field_task_proj_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_task_proj_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_task_proj_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_task_proj_tid']['vocabulary'] = 'project';
  $handler->display->display_options['filters']['field_task_proj_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_task_proj_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'task-assignments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Task Assignments';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Task: Active */
  $handler = $view->new_display('page', 'Task: Active', 'page_1');
  $handler->display->display_options['display_description'] = 'List of Active Tasks';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_task_proj']['id'] = 'field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['table'] = 'field_data_field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['field'] = 'field_task_proj';
  $handler->display->display_options['fields']['field_task_proj']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_task_proj']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_task_proj']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_task_proj']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Topics';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Status Update */
  $handler->display->display_options['fields']['field_task_status']['id'] = 'field_task_status';
  $handler->display->display_options['fields']['field_task_status']['table'] = 'field_data_field_task_status';
  $handler->display->display_options['fields']['field_task_status']['field'] = 'field_task_status';
  $handler->display->display_options['fields']['field_task_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_status']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_task_status']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_task_status']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_task_status']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_task_status']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_task_status']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_task_status']['field_api_classes'] = 0;
  /* Field: Content: Active Status */
  $handler->display->display_options['fields']['field_task_active']['id'] = 'field_task_active';
  $handler->display->display_options['fields']['field_task_active']['table'] = 'field_data_field_task_active';
  $handler->display->display_options['fields']['field_task_active']['field'] = 'field_task_active';
  $handler->display->display_options['fields']['field_task_active']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_task_active']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_task_active']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_task_active']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_task_active']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_task_active']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_task_active']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_task_active']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_task_active']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_task_active']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'task' => 'task',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Active Status (field_task_active) */
  $handler->display->display_options['filters']['field_task_active_value']['id'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['table'] = 'field_data_field_task_active';
  $handler->display->display_options['filters']['field_task_active_value']['field'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_task_active_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator_id'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['label'] = 'Active Status (field_task_active)';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['operator'] = 'field_task_active_value_op';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['identifier'] = 'field_task_active_value';
  $handler->display->display_options['filters']['field_task_active_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_task_active_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'task-assignments-active';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Task: Active';
  $handler->display->display_options['menu']['description'] = 'List of Active Tasks';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['task_assignments'] = $view;

  return $export;
}
