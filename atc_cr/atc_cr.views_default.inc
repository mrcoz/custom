<?php
/**
 * @file
 * atc_cr.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function atc_cr_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'author_content';
  $view->description = 'A block listing the current logged in user\'s created content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Your Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Content';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['author_content'] = $view;

  $view = new view;
  $view->name = 'change_notice_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Change Notice Log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Change Notice Log';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_atc_lcs' => 'field_atc_lcs',
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
    'field_atc_lcs' => array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Change Notice Number';
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
  /* Field: Content: Life Cycle State */
  $handler->display->display_options['fields']['field_atc_lcs']['id'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['field'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['label'] = 'Status';
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['field_api_classes'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
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
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Approved' => 'Approved',
    'Rejected' => 'Rejected',
  );
  $handler->display->display_options['filters']['field_atc_lcs_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['operator_id'] = 'field_atc_lcs_value_op';
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['label'] = 'Life Cycle State (field_atc_lcs)';
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['operator'] = 'field_atc_lcs_value_op';
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['identifier'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_atc_lcs_value']['expose']['reduce'] = 1;

  /* Display: Change Notice Log */
  $handler = $view->new_display('page', 'Change Notice Log', 'page');
  $handler->display->display_options['path'] = 'change-notice-log';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Change Notice';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['change_notice_log'] = $view;

  $view = new view;
  $view->name = 'facilitator_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Facilitator Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Facilitator Block';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_atc_lcs' => 'field_atc_lcs',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_atc_lcs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Life Cycle State */
  $handler->display->display_options['fields']['field_atc_lcs']['id'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['field'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['label'] = '';
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atc_lcs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Facilitator' => 'Review - Facilitator',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['facilitator_block'] = $view;

  $view = new view;
  $view->name = 'group_review_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Group Review Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Engineering Review Block';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_atc_lcs' => 'field_atc_lcs',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_atc_lcs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Life Cycle State */
  $handler->display->display_options['fields']['field_atc_lcs']['id'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['field'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['label'] = '';
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atc_lcs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Warranty Signoff (field_gr_war) */
  $handler->display->display_options['filters']['field_gr_war_value']['id'] = 'field_gr_war_value';
  $handler->display->display_options['filters']['field_gr_war_value']['table'] = 'field_data_field_gr_war';
  $handler->display->display_options['filters']['field_gr_war_value']['field'] = 'field_gr_war_value';
  $handler->display->display_options['filters']['field_gr_war_value']['operator'] = 'empty';

  /* Display: Engineering Block */
  $handler = $view->new_display('block', 'Engineering Block', 'block');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Engineering Signoff (field_gr_eng) */
  $handler->display->display_options['filters']['field_gr_eng_value']['id'] = 'field_gr_eng_value';
  $handler->display->display_options['filters']['field_gr_eng_value']['table'] = 'field_data_field_gr_eng';
  $handler->display->display_options['filters']['field_gr_eng_value']['field'] = 'field_gr_eng_value';
  $handler->display->display_options['filters']['field_gr_eng_value']['operator'] = 'empty';

  /* Display: Purchasing Block */
  $handler = $view->new_display('block', 'Purchasing Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Purchasing Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Purchasing Signoff (field_gr_pur) */
  $handler->display->display_options['filters']['field_gr_pur_value']['id'] = 'field_gr_pur_value';
  $handler->display->display_options['filters']['field_gr_pur_value']['table'] = 'field_data_field_gr_pur';
  $handler->display->display_options['filters']['field_gr_pur_value']['field'] = 'field_gr_pur_value';
  $handler->display->display_options['filters']['field_gr_pur_value']['operator'] = 'empty';

  /* Display: Manufacturing Block */
  $handler = $view->new_display('block', 'Manufacturing Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manufacturing Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Manufacturing Signoff (field_gr_man) */
  $handler->display->display_options['filters']['field_gr_man_value']['id'] = 'field_gr_man_value';
  $handler->display->display_options['filters']['field_gr_man_value']['table'] = 'field_data_field_gr_man';
  $handler->display->display_options['filters']['field_gr_man_value']['field'] = 'field_gr_man_value';
  $handler->display->display_options['filters']['field_gr_man_value']['operator'] = 'empty';

  /* Display: Sales Block */
  $handler = $view->new_display('block', 'Sales Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sales Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Sales Signoff (field_gr_sal) */
  $handler->display->display_options['filters']['field_gr_sal_value']['id'] = 'field_gr_sal_value';
  $handler->display->display_options['filters']['field_gr_sal_value']['table'] = 'field_data_field_gr_sal';
  $handler->display->display_options['filters']['field_gr_sal_value']['field'] = 'field_gr_sal_value';
  $handler->display->display_options['filters']['field_gr_sal_value']['operator'] = 'empty';

  /* Display: Warranty Block */
  $handler = $view->new_display('block', 'Warranty Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Warranty Review Block';

  /* Display: Quality Block */
  $handler = $view->new_display('block', 'Quality Block', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quality Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Quality Signoff (field_gr_qual) */
  $handler->display->display_options['filters']['field_gr_qual_value']['id'] = 'field_gr_qual_value';
  $handler->display->display_options['filters']['field_gr_qual_value']['table'] = 'field_data_field_gr_qual';
  $handler->display->display_options['filters']['field_gr_qual_value']['field'] = 'field_gr_qual_value';
  $handler->display->display_options['filters']['field_gr_qual_value']['operator'] = 'empty';

  /* Display: IT Block */
  $handler = $view->new_display('block', 'IT Block', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'IT Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: IT Signoff (field_gr_it) */
  $handler->display->display_options['filters']['field_gr_it_value']['id'] = 'field_gr_it_value';
  $handler->display->display_options['filters']['field_gr_it_value']['table'] = 'field_data_field_gr_it';
  $handler->display->display_options['filters']['field_gr_it_value']['field'] = 'field_gr_it_value';
  $handler->display->display_options['filters']['field_gr_it_value']['operator'] = 'empty';

  /* Display: Accounting Block */
  $handler = $view->new_display('block', 'Accounting Block', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accounting Review Block';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  /* Filter criterion: Content: Accounting Signoff (field_gr_acc) */
  $handler->display->display_options['filters']['field_gr_acc_value']['id'] = 'field_gr_acc_value';
  $handler->display->display_options['filters']['field_gr_acc_value']['table'] = 'field_data_field_gr_acc';
  $handler->display->display_options['filters']['field_gr_acc_value']['field'] = 'field_gr_acc_value';
  $handler->display->display_options['filters']['field_gr_acc_value']['operator'] = 'empty';

  /* Display: Waiting for Approval */
  $handler = $view->new_display('block', 'Waiting for Approval', 'block_3');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Review - Group' => 'Review - Group',
  );
  $export['group_review_block'] = $view;

  $view = new view;
  $view->name = 'your_change_request';
  $view->description = 'A block listing the current logged in user\'s created content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Your Change Request';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Open Change Requests';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own unpublished content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_atc_lcs' => 'field_atc_lcs',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_atc_lcs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['summary'] = 'Table summary';
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Life Cycle State */
  $handler->display->display_options['fields']['field_atc_lcs']['id'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['field'] = 'field_atc_lcs';
  $handler->display->display_options['fields']['field_atc_lcs']['label'] = '';
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atc_lcs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_atc_lcs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_atc_lcs']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'atc_cr' => 'atc_cr',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  /* Filter criterion: Content: Life Cycle State (field_atc_lcs) */
  $handler->display->display_options['filters']['field_atc_lcs_value']['id'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['table'] = 'field_data_field_atc_lcs';
  $handler->display->display_options['filters']['field_atc_lcs_value']['field'] = 'field_atc_lcs_value';
  $handler->display->display_options['filters']['field_atc_lcs_value']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_atc_lcs_value']['value'] = array(
    'Approved' => 'Approved',
    'Rejected' => 'Rejected',
  );

  /* Display: Your Open Change Requests */
  $handler = $view->new_display('block', 'Your Open Change Requests', 'block');
  $export['your_change_request'] = $view;

  return $export;
}
