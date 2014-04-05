<?php
/**
 * @file
 * spatial_data_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spatial_data_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spatial_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spatial Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spatial Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Spatial data at NTL-LTER can be accessed in several different ways. This page provides a catalog of individual data sets that can be downloaded for use in a geographic information system (GIS).</p>
<p>Vector data sets are provided as compressed shapefiles, which can be used in a variety of GIS environments. The <a href="http://www.dnr.state.wi.us/maps/gis/wtm8391.html">Wisconsin Transverse Mercator 83/91 coordinate system</a> is used for all vector data.</p>
<p>Satellite imagery, aerial photography,and other raster-format data sets can be accessed from <a href="http://www.wisconsinview.org/">WisconsinView</a>. For more information, contact: <a href="mailto:spatial@lter.limnology.wisc.edu">spatial@lter.limnology.wisc.edu</a>.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>UW-Madison Department of Geography&#39;s <a href="http://www.geography.wisc.edu/maplib/gis.html#WIData">Robinson Map Library</a> is an absolutely fantastic source for spatial data. Their internal collection includes data from nearly every county in the state of Wisconsin, while their list of links to external resources (state and federal agencies, and international data sources) is superb.</p>
<p><a href="http://wisconsinview.org/imagery/">WisconsinView</a> is the best first stop for aerial and satellite imagery covering the state of Wisconsin.</p>
<p><a href="http://dnr.wi.gov/maps/gis/dataoverview.html">Wisconsin Department of Natural Resources</a> has many spatial datasets, including administrative boundaries, elevation, land cover, hydrography, and much more. This is usually the first stop for finding Wisconsin GIS datasets.</p>
<p><a href="ftp://ftp.datcp.state.wi.us/GIS/">Wisconsin Department of Agriculture, Trade, and Consumer Protection</a> has a handful of datasets available to the public, including livestock siting, well locations, and drainage districts, among others.</p>
<p><a href="http://legis.wisconsin.gov/ltsb/redistricting/data.htm">Wisconsin Legislative Technology Bureau</a> has datasets concerned with legistative districts (from local wards up to congressional districts).</p>
<p><a href="http://gio.wi.gov/Projects/WisconsinSpatialDataRepository/WisconsinSpatialDataRepositoryServices/tabid/328/Default.aspx">Wisconsin Geographic Information Office</a> has an excellent collection of various boundary layers (counties, municipalities, school districts, etc) for the entire state of Wisconsin.</p>
<p><a href="http://www.dot.wisconsin.gov/business/econdev/maps-data.htm">Wisconsin Department of Transportation</a> is the best source of road data (centerlines, traffic volume, aerial imagery, survey points, and more) in the state. Of special interest is their statewide local roads layer, <a href="http://www.dot.wisconsin.gov/localgov/wislr/index.htm">WISLR</a>.</p>
<p><a href="http://wisconsingeologicalsurvey.org/gis.htm">Wisconsin Geologic and Natural History Survey</a> is the best source for geologic (bedrock) and groundwater data in the state of Wisconsin.</p>
<p><a href="http://www.michigan.gov/cgi">Michigan Center for Geographic Information</a> is the best source for Michigan spatial data. The upper peninsula of Michigan is adjacent to the Northern Highland Lake District studied by NTL LTER researchers.</p>
';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Site Categories (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/spatial_data_catalog';
  $export['spatial_data'] = $view;

  return $export;
}
