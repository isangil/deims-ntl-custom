<?php
/**
 * @file
 * ntl_document_archive.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ntl_document_archive_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'document_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Document Archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Document Archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '1728000';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '1728000';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_da_locator' => 'field_da_locator',
    'field_da_box_title' => 'field_da_box_title',
    'field_da_file_title' => 'field_da_file_title',
    'field_da_box_comments' => 'field_da_box_comments',
    'field_da_file_comments' => 'field_da_file_comments',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_da_locator' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_da_box_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_da_file_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_da_box_comments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_da_file_comments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'no_pagination',
    'length_change' => 0,
    'display_length' => '100',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Steenbock Locator */
  $handler->display->display_options['fields']['field_da_locator']['id'] = 'field_da_locator';
  $handler->display->display_options['fields']['field_da_locator']['table'] = 'field_data_field_da_locator';
  $handler->display->display_options['fields']['field_da_locator']['field'] = 'field_da_locator';
  $handler->display->display_options['fields']['field_da_locator']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_da_locator']['alter']['text'] = '<a href="node/[nid]">[field_da_locator]</a>';
  /* Field: Content: Box Title */
  $handler->display->display_options['fields']['field_da_box_title']['id'] = 'field_da_box_title';
  $handler->display->display_options['fields']['field_da_box_title']['table'] = 'field_data_field_da_box_title';
  $handler->display->display_options['fields']['field_da_box_title']['field'] = 'field_da_box_title';
  $handler->display->display_options['fields']['field_da_box_title']['type'] = 'text_plain';
  /* Field: Content: FIle Title */
  $handler->display->display_options['fields']['field_da_file_title']['id'] = 'field_da_file_title';
  $handler->display->display_options['fields']['field_da_file_title']['table'] = 'field_data_field_da_file_title';
  $handler->display->display_options['fields']['field_da_file_title']['field'] = 'field_da_file_title';
  $handler->display->display_options['fields']['field_da_file_title']['type'] = 'text_plain';
  /* Field: Content: Box Comments */
  $handler->display->display_options['fields']['field_da_box_comments']['id'] = 'field_da_box_comments';
  $handler->display->display_options['fields']['field_da_box_comments']['table'] = 'field_data_field_da_box_comments';
  $handler->display->display_options['fields']['field_da_box_comments']['field'] = 'field_da_box_comments';
  /* Field: Content: FIle Comments */
  $handler->display->display_options['fields']['field_da_file_comments']['id'] = 'field_da_file_comments';
  $handler->display->display_options['fields']['field_da_file_comments']['table'] = 'field_data_field_da_file_comments';
  $handler->display->display_options['fields']['field_da_file_comments']['field'] = 'field_da_file_comments';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Record ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'ntl_document_archive' => 'ntl_document_archive',
  );
  /* Filter criterion: Content: Box Title (field_da_box_title) */
  $handler->display->display_options['filters']['field_da_box_title_value']['id'] = 'field_da_box_title_value';
  $handler->display->display_options['filters']['field_da_box_title_value']['table'] = 'field_data_field_da_box_title';
  $handler->display->display_options['filters']['field_da_box_title_value']['field'] = 'field_da_box_title_value';
  $handler->display->display_options['filters']['field_da_box_title_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_da_box_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_da_box_title_value']['expose']['operator_id'] = 'field_da_box_title_value_op';
  $handler->display->display_options['filters']['field_da_box_title_value']['expose']['label'] = 'Box Title';
  $handler->display->display_options['filters']['field_da_box_title_value']['expose']['operator'] = 'field_da_box_title_value_op';
  $handler->display->display_options['filters']['field_da_box_title_value']['expose']['identifier'] = 'field_da_box_title_value';
  $handler->display->display_options['filters']['field_da_box_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: FIle Title (field_da_file_title) */
  $handler->display->display_options['filters']['field_da_file_title_value']['id'] = 'field_da_file_title_value';
  $handler->display->display_options['filters']['field_da_file_title_value']['table'] = 'field_data_field_da_file_title';
  $handler->display->display_options['filters']['field_da_file_title_value']['field'] = 'field_da_file_title_value';
  $handler->display->display_options['filters']['field_da_file_title_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_da_file_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_da_file_title_value']['expose']['operator_id'] = 'field_da_file_title_value_op';
  $handler->display->display_options['filters']['field_da_file_title_value']['expose']['label'] = 'FIle within Box';
  $handler->display->display_options['filters']['field_da_file_title_value']['expose']['operator'] = 'field_da_file_title_value_op';
  $handler->display->display_options['filters']['field_da_file_title_value']['expose']['identifier'] = 'field_da_file_title_value';
  $handler->display->display_options['filters']['field_da_file_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/document-archive/search';
  $export['document_archive'] = $view;

  return $export;
}
