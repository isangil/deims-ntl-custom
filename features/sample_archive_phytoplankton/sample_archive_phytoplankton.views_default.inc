<?php
/**
 * @file
 * sample_archive_phytoplankton.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sample_archive_phytoplankton_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sample_archive_phytoplankton';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sample Archive Phytoplankton';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sample Archive Phytoplankton';
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
  $handler->display->display_options['fields']['field_sapsa_lake']['id'] = 'field_sapsa_lake';
  $handler->display->display_options['fields']['field_sapsa_lake']['table'] = 'field_data_field_sapsa_lake';
  $handler->display->display_options['fields']['field_sapsa_lake']['field'] = 'field_sapsa_lake';
  /* Field: Content: Sample Date */
  $handler->display->display_options['fields']['field_sapsa_date']['id'] = 'field_sapsa_date';
  $handler->display->display_options['fields']['field_sapsa_date']['table'] = 'field_data_field_sapsa_date';
  $handler->display->display_options['fields']['field_sapsa_date']['field'] = 'field_sapsa_date';
  $handler->display->display_options['fields']['field_sapsa_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_sapsa_year']['id'] = 'field_sapsa_year';
  $handler->display->display_options['fields']['field_sapsa_year']['table'] = 'field_data_field_sapsa_year';
  $handler->display->display_options['fields']['field_sapsa_year']['field'] = 'field_sapsa_year';
  $handler->display->display_options['fields']['field_sapsa_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Accession # */
  $handler->display->display_options['fields']['field_sapsa_accession']['id'] = 'field_sapsa_accession';
  $handler->display->display_options['fields']['field_sapsa_accession']['table'] = 'field_data_field_sapsa_accession';
  $handler->display->display_options['fields']['field_sapsa_accession']['field'] = 'field_sapsa_accession';
  /* Field: Content: Box */
  $handler->display->display_options['fields']['field_sapsa_box']['id'] = 'field_sapsa_box';
  $handler->display->display_options['fields']['field_sapsa_box']['table'] = 'field_data_field_sapsa_box';
  $handler->display->display_options['fields']['field_sapsa_box']['field'] = 'field_sapsa_box';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_sapsa_comments']['id'] = 'field_sapsa_comments';
  $handler->display->display_options['fields']['field_sapsa_comments']['table'] = 'field_data_field_sapsa_comments';
  $handler->display->display_options['fields']['field_sapsa_comments']['field'] = 'field_sapsa_comments';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sample_archive_phytoplankton' => 'sample_archive_phytoplankton',
  );
  /* Filter criterion: Content: Lake (field_sapsa_lake) */
  $handler->display->display_options['filters']['field_sapsa_lake_value']['id'] = 'field_sapsa_lake_value';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['table'] = 'field_data_field_sapsa_lake';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['field'] = 'field_sapsa_lake_value';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sapsa_lake_value']['expose']['operator_id'] = 'field_sapsa_lake_value_op';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['expose']['label'] = 'Filter by Lake';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['expose']['operator'] = 'field_sapsa_lake_value_op';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['expose']['identifier'] = 'field_sapsa_lake_value';
  $handler->display->display_options['filters']['field_sapsa_lake_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Year (field_sapsa_year) */
  $handler->display->display_options['filters']['field_sapsa_year_value']['id'] = 'field_sapsa_year_value';
  $handler->display->display_options['filters']['field_sapsa_year_value']['table'] = 'field_data_field_sapsa_year';
  $handler->display->display_options['filters']['field_sapsa_year_value']['field'] = 'field_sapsa_year_value';
  $handler->display->display_options['filters']['field_sapsa_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sapsa_year_value']['expose']['operator_id'] = 'field_sapsa_year_value_op';
  $handler->display->display_options['filters']['field_sapsa_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_sapsa_year_value']['expose']['operator'] = 'field_sapsa_year_value_op';
  $handler->display->display_options['filters']['field_sapsa_year_value']['expose']['identifier'] = 'field_sapsa_year_value';
  $handler->display->display_options['filters']['field_sapsa_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/sample_archive/phyto_samples';
  $export['sample_archive_phytoplankton'] = $view;

  return $export;
}
