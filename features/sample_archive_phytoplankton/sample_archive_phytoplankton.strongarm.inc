<?php
/**
 * @file
 * sample_archive_phytoplankton.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sample_archive_phytoplankton_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_sample_archive_phytoplankton';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_sample_archive_phytoplankton';
  $strongarm->value = 0;
  $export['autosave_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_sample_archive_phytoplankton';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sample_archive_phytoplankton';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'bdp' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'eml' => array(
        'custom_settings' => FALSE,
      ),
      'eml_hl' => array(
        'custom_settings' => FALSE,
      ),
      'iso' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sample_archive_phytoplankton';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sample_archive_phytoplankton';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sample_archive_phytoplankton';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sample_archive_phytoplankton';
  $strongarm->value = '1';
  $export['node_preview_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['node_submitted_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_sample_archive_phytoplankton';
  $strongarm->value = 0;
  $export['print_html_display_comment_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['print_html_display_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_sample_archive_phytoplankton';
  $strongarm->value = 1;
  $export['print_html_display_urllist_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_sample_archive_phytoplankton';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_sample_archive_phytoplankton'] = $strongarm;

  return $export;
}
