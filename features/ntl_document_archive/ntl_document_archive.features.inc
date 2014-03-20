<?php
/**
 * @file
 * ntl_document_archive.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntl_document_archive_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ntl_document_archive_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ntl_document_archive_node_info() {
  $items = array(
    'ntl_document_archive' => array(
      'name' => t('Document Archive'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Record ID'),
      'help' => '',
    ),
  );
  return $items;
}
