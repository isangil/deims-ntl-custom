<?php
/**
 * @file
 * samples_archive_fishscales.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function samples_archive_fishscales_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sample_archive_fishscales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sample Archive Fishscales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sample Archive Fishscales';
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
    'field_safs_lake' => 'field_safs_lake',
    'field_safs_year' => 'field_safs_year',
    'field_safs_species_name' => 'field_safs_species_name',
    'field_safs_envelopes' => 'field_safs_envelopes',
    'field_safs_accession' => 'field_safs_accession',
    'field_safs_box' => 'field_safs_box',
    'field_safs_comments' => 'field_safs_comments',
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
    'field_safs_lake' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_species_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_envelopes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_accession' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_box' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_safs_comments' => array(
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lake */
  $handler->display->display_options['fields']['field_safs_lake']['id'] = 'field_safs_lake';
  $handler->display->display_options['fields']['field_safs_lake']['table'] = 'field_data_field_safs_lake';
  $handler->display->display_options['fields']['field_safs_lake']['field'] = 'field_safs_lake';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_safs_year']['id'] = 'field_safs_year';
  $handler->display->display_options['fields']['field_safs_year']['table'] = 'field_data_field_safs_year';
  $handler->display->display_options['fields']['field_safs_year']['field'] = 'field_safs_year';
  $handler->display->display_options['fields']['field_safs_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Species Name */
  $handler->display->display_options['fields']['field_safs_species_name']['id'] = 'field_safs_species_name';
  $handler->display->display_options['fields']['field_safs_species_name']['table'] = 'field_data_field_safs_species_name';
  $handler->display->display_options['fields']['field_safs_species_name']['field'] = 'field_safs_species_name';
  /* Field: Content: # Envelopes */
  $handler->display->display_options['fields']['field_safs_envelopes']['id'] = 'field_safs_envelopes';
  $handler->display->display_options['fields']['field_safs_envelopes']['table'] = 'field_data_field_safs_envelopes';
  $handler->display->display_options['fields']['field_safs_envelopes']['field'] = 'field_safs_envelopes';
  $handler->display->display_options['fields']['field_safs_envelopes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Accession # */
  $handler->display->display_options['fields']['field_safs_accession']['id'] = 'field_safs_accession';
  $handler->display->display_options['fields']['field_safs_accession']['table'] = 'field_data_field_safs_accession';
  $handler->display->display_options['fields']['field_safs_accession']['field'] = 'field_safs_accession';
  /* Field: Content: Box */
  $handler->display->display_options['fields']['field_safs_box']['id'] = 'field_safs_box';
  $handler->display->display_options['fields']['field_safs_box']['table'] = 'field_data_field_safs_box';
  $handler->display->display_options['fields']['field_safs_box']['field'] = 'field_safs_box';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_safs_comments']['id'] = 'field_safs_comments';
  $handler->display->display_options['fields']['field_safs_comments']['table'] = 'field_data_field_safs_comments';
  $handler->display->display_options['fields']['field_safs_comments']['field'] = 'field_safs_comments';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sample_archive_fishscales' => 'sample_archive_fishscales',
  );
  /* Filter criterion: Content: Lake (field_safs_lake) */
  $handler->display->display_options['filters']['field_safs_lake_value']['id'] = 'field_safs_lake_value';
  $handler->display->display_options['filters']['field_safs_lake_value']['table'] = 'field_data_field_safs_lake';
  $handler->display->display_options['filters']['field_safs_lake_value']['field'] = 'field_safs_lake_value';
  $handler->display->display_options['filters']['field_safs_lake_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_safs_lake_value']['expose']['operator_id'] = 'field_safs_lake_value_op';
  $handler->display->display_options['filters']['field_safs_lake_value']['expose']['label'] = 'Filter by Lake';
  $handler->display->display_options['filters']['field_safs_lake_value']['expose']['operator'] = 'field_safs_lake_value_op';
  $handler->display->display_options['filters']['field_safs_lake_value']['expose']['identifier'] = 'field_safs_lake_value';
  $handler->display->display_options['filters']['field_safs_lake_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Species Name (field_safs_species_name) */
  $handler->display->display_options['filters']['field_safs_species_name_value']['id'] = 'field_safs_species_name_value';
  $handler->display->display_options['filters']['field_safs_species_name_value']['table'] = 'field_data_field_safs_species_name';
  $handler->display->display_options['filters']['field_safs_species_name_value']['field'] = 'field_safs_species_name_value';
  $handler->display->display_options['filters']['field_safs_species_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_safs_species_name_value']['expose']['operator_id'] = 'field_safs_species_name_value_op';
  $handler->display->display_options['filters']['field_safs_species_name_value']['expose']['label'] = 'Species ';
  $handler->display->display_options['filters']['field_safs_species_name_value']['expose']['operator'] = 'field_safs_species_name_value_op';
  $handler->display->display_options['filters']['field_safs_species_name_value']['expose']['identifier'] = 'field_safs_species_name_value';
  $handler->display->display_options['filters']['field_safs_species_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Year (field_safs_year) */
  $handler->display->display_options['filters']['field_safs_year_value']['id'] = 'field_safs_year_value';
  $handler->display->display_options['filters']['field_safs_year_value']['table'] = 'field_data_field_safs_year';
  $handler->display->display_options['filters']['field_safs_year_value']['field'] = 'field_safs_year_value';
  $handler->display->display_options['filters']['field_safs_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_safs_year_value']['expose']['operator_id'] = 'field_safs_year_value_op';
  $handler->display->display_options['filters']['field_safs_year_value']['expose']['label'] = 'Year ';
  $handler->display->display_options['filters']['field_safs_year_value']['expose']['operator'] = 'field_safs_year_value_op';
  $handler->display->display_options['filters']['field_safs_year_value']['expose']['identifier'] = 'field_safs_year_value';
  $handler->display->display_options['filters']['field_safs_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/sample_archive/fishscales';
  $export['sample_archive_fishscales'] = $view;

  return $export;
}
