<?php
/**
 * @file
 * ntl_research_highlights.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntl_research_highlights_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ntl_research_highlights_node_info() {
  $items = array(
    'research_highlight' => array(
      'name' => t('Research Highlight'),
      'base' => 'node_content',
      'description' => t('NTL research highlights'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
