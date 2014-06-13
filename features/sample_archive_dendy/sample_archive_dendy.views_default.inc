<?php
/**
 * @file
 * sample_archive_dendy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sample_archive_dendy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sample_archive_dendy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sample Archive Dendy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sample Archive Dendy Samples';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sads_lake' => 'field_sads_lake',
    'field_sads_site' => 'field_sads_site',
    'field_sads_year' => 'field_sads_year',
    'field_sads_set_date' => 'field_sads_set_date',
    'field_sads_retrieve_date' => 'field_sads_retrieve_date',
    'field_sads_box' => 'field_sads_box',
    'field_sads_accession' => 'field_sads_accession',
    'field_sads_comments' => 'field_sads_comments',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_lake' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_site' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_set_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_retrieve_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_box' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_accession' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sads_comments' => array(
      'sortable' => 1,
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
    'display_length' => '10',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Sample ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lake */
  $handler->display->display_options['fields']['field_sads_lake']['id'] = 'field_sads_lake';
  $handler->display->display_options['fields']['field_sads_lake']['table'] = 'field_data_field_sads_lake';
  $handler->display->display_options['fields']['field_sads_lake']['field'] = 'field_sads_lake';
  /* Field: Content: Site */
  $handler->display->display_options['fields']['field_sads_site']['id'] = 'field_sads_site';
  $handler->display->display_options['fields']['field_sads_site']['table'] = 'field_data_field_sads_site';
  $handler->display->display_options['fields']['field_sads_site']['field'] = 'field_sads_site';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_sads_year']['id'] = 'field_sads_year';
  $handler->display->display_options['fields']['field_sads_year']['table'] = 'field_data_field_sads_year';
  $handler->display->display_options['fields']['field_sads_year']['field'] = 'field_sads_year';
  $handler->display->display_options['fields']['field_sads_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Set Date */
  $handler->display->display_options['fields']['field_sads_set_date']['id'] = 'field_sads_set_date';
  $handler->display->display_options['fields']['field_sads_set_date']['table'] = 'field_data_field_sads_set_date';
  $handler->display->display_options['fields']['field_sads_set_date']['field'] = 'field_sads_set_date';
  $handler->display->display_options['fields']['field_sads_set_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Retrieve Date */
  $handler->display->display_options['fields']['field_sads_retrieve_date']['id'] = 'field_sads_retrieve_date';
  $handler->display->display_options['fields']['field_sads_retrieve_date']['table'] = 'field_data_field_sads_retrieve_date';
  $handler->display->display_options['fields']['field_sads_retrieve_date']['field'] = 'field_sads_retrieve_date';
  $handler->display->display_options['fields']['field_sads_retrieve_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Box */
  $handler->display->display_options['fields']['field_sads_box']['id'] = 'field_sads_box';
  $handler->display->display_options['fields']['field_sads_box']['table'] = 'field_data_field_sads_box';
  $handler->display->display_options['fields']['field_sads_box']['field'] = 'field_sads_box';
  /* Field: Content: Accession # */
  $handler->display->display_options['fields']['field_sads_accession']['id'] = 'field_sads_accession';
  $handler->display->display_options['fields']['field_sads_accession']['table'] = 'field_data_field_sads_accession';
  $handler->display->display_options['fields']['field_sads_accession']['field'] = 'field_sads_accession';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_sads_comments']['id'] = 'field_sads_comments';
  $handler->display->display_options['fields']['field_sads_comments']['table'] = 'field_data_field_sads_comments';
  $handler->display->display_options['fields']['field_sads_comments']['field'] = 'field_sads_comments';
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
    'sample_archive_dendy_samples' => 'sample_archive_dendy_samples',
  );
  /* Filter criterion: Content: Lake (field_sads_lake) */
  $handler->display->display_options['filters']['field_sads_lake_value']['id'] = 'field_sads_lake_value';
  $handler->display->display_options['filters']['field_sads_lake_value']['table'] = 'field_data_field_sads_lake';
  $handler->display->display_options['filters']['field_sads_lake_value']['field'] = 'field_sads_lake_value';
  $handler->display->display_options['filters']['field_sads_lake_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sads_lake_value']['expose']['operator_id'] = 'field_sads_lake_value_op';
  $handler->display->display_options['filters']['field_sads_lake_value']['expose']['label'] = 'Filter by Lake';
  $handler->display->display_options['filters']['field_sads_lake_value']['expose']['operator'] = 'field_sads_lake_value_op';
  $handler->display->display_options['filters']['field_sads_lake_value']['expose']['identifier'] = 'field_sads_lake_value';
  $handler->display->display_options['filters']['field_sads_lake_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Year (field_sads_year) */
  $handler->display->display_options['filters']['field_sads_year_value']['id'] = 'field_sads_year_value';
  $handler->display->display_options['filters']['field_sads_year_value']['table'] = 'field_data_field_sads_year';
  $handler->display->display_options['filters']['field_sads_year_value']['field'] = 'field_sads_year_value';
  $handler->display->display_options['filters']['field_sads_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sads_year_value']['expose']['operator_id'] = 'field_sads_year_value_op';
  $handler->display->display_options['filters']['field_sads_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_sads_year_value']['expose']['operator'] = 'field_sads_year_value_op';
  $handler->display->display_options['filters']['field_sads_year_value']['expose']['identifier'] = 'field_sads_year_value';
  $handler->display->display_options['filters']['field_sads_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/sample_archive/dendy';
  $export['sample_archive_dendy'] = $view;

  return $export;
}
