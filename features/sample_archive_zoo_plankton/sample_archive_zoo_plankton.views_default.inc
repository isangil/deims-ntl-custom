<?php
/**
 * @file
 * sample_archive_zoo_plankton.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sample_archive_zoo_plankton_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sample_archive_zooplankton';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sample Archive Zooplankton';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sample Archive Zooplankton';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lake */
  $handler->display->display_options['fields']['field_sazp_lake']['id'] = 'field_sazp_lake';
  $handler->display->display_options['fields']['field_sazp_lake']['table'] = 'field_data_field_sazp_lake';
  $handler->display->display_options['fields']['field_sazp_lake']['field'] = 'field_sazp_lake';
  /* Field: Content: Sample Date */
  $handler->display->display_options['fields']['field_sazp_date']['id'] = 'field_sazp_date';
  $handler->display->display_options['fields']['field_sazp_date']['table'] = 'field_data_field_sazp_date';
  $handler->display->display_options['fields']['field_sazp_date']['field'] = 'field_sazp_date';
  $handler->display->display_options['fields']['field_sazp_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Gear */
  $handler->display->display_options['fields']['field_sazp_gear']['id'] = 'field_sazp_gear';
  $handler->display->display_options['fields']['field_sazp_gear']['table'] = 'field_data_field_sazp_gear';
  $handler->display->display_options['fields']['field_sazp_gear']['field'] = 'field_sazp_gear';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_sazp_year']['id'] = 'field_sazp_year';
  $handler->display->display_options['fields']['field_sazp_year']['table'] = 'field_data_field_sazp_year';
  $handler->display->display_options['fields']['field_sazp_year']['field'] = 'field_sazp_year';
  $handler->display->display_options['fields']['field_sazp_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Accession # */
  $handler->display->display_options['fields']['field_sazp_accession']['id'] = 'field_sazp_accession';
  $handler->display->display_options['fields']['field_sazp_accession']['table'] = 'field_data_field_sazp_accession';
  $handler->display->display_options['fields']['field_sazp_accession']['field'] = 'field_sazp_accession';
  /* Field: Content: Box */
  $handler->display->display_options['fields']['field_sazp_box']['id'] = 'field_sazp_box';
  $handler->display->display_options['fields']['field_sazp_box']['table'] = 'field_data_field_sazp_box';
  $handler->display->display_options['fields']['field_sazp_box']['field'] = 'field_sazp_box';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_sazp_comments']['id'] = 'field_sazp_comments';
  $handler->display->display_options['fields']['field_sazp_comments']['table'] = 'field_data_field_sazp_comments';
  $handler->display->display_options['fields']['field_sazp_comments']['field'] = 'field_sazp_comments';
  /* Sort criterion: Content: Lake (field_sads_lake) */
  $handler->display->display_options['sorts']['field_sads_lake_value']['id'] = 'field_sads_lake_value';
  $handler->display->display_options['sorts']['field_sads_lake_value']['table'] = 'field_data_field_sads_lake';
  $handler->display->display_options['sorts']['field_sads_lake_value']['field'] = 'field_sads_lake_value';
  $handler->display->display_options['sorts']['field_sads_lake_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sads_lake_value']['expose']['label'] = 'Filter by Lake ';
  /* Sort criterion: Content: Year (field_sads_year) */
  $handler->display->display_options['sorts']['field_sads_year_value']['id'] = 'field_sads_year_value';
  $handler->display->display_options['sorts']['field_sads_year_value']['table'] = 'field_data_field_sads_year';
  $handler->display->display_options['sorts']['field_sads_year_value']['field'] = 'field_sads_year_value';
  $handler->display->display_options['sorts']['field_sads_year_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sads_year_value']['expose']['label'] = 'Year';
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
    'ntl_sample_archive_zoop' => 'ntl_sample_archive_zoop',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/sample_archive/zooplankton';
  $export['sample_archive_zooplankton'] = $view;

  return $export;
}
