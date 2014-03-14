<?php
/**
 * @file
 * ntl_protocol.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntl_protocol_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ntl_protocol_node_info() {
  $items = array(
    'protocol' => array(
      'name' => t('Protocol'),
      'base' => 'node_content',
      'description' => t('research methods employed at NTL '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
