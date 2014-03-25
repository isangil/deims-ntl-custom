<?php
/**
 * @file
 * slides_archive_phytoplankton.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slides_archive_phytoplankton_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slides_archive_phytoplankton_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slides_archive_phytoplankton_node_info() {
  $items = array(
    'sample_archive_phyto_slides' => array(
      'name' => t('Sample Archive Phytoplankton Slides'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sample ID'),
      'help' => '',
    ),
  );
  return $items;
}
