<?php
/**
 * @file
 * deims_data_set.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function deims_data_set_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|data_set|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '9',
    'children' => array(
      0 => 'field_additional_information',
      1 => 'field_maintenance',
      2 => 'field_purpose',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|data_set|default';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '1',
    'children' => array(
      0 => 'field_core_areas',
      1 => 'field_keywords',
      2 => 'field_tags',
      3 => 'field_ntl_keywords',
      4 => 'field_section',
      5 => 'field_term_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-categories field-group-fieldset',
      ),
    ),
  );
  $export['group_categories|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_sources|node|data_set|form';
  $field_group->group_name = 'group_data_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Data Sources',
    'weight' => '10',
    'children' => array(
      0 => 'field_data_sources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Data Sources',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-data-sources field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_data_sources|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|data_set|default';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '2',
    'children' => array(
      0 => 'field_date_range',
      1 => 'field_publication_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-dates field-group-fieldset',
      ),
    ),
  );
  $export['group_dates|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|data_set|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_data_sources',
      2 => 'group_geo_temporal',
      3 => 'group_methods',
      4 => 'group_personnel',
      5 => 'group_related',
      6 => 'group_taxonomy',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => 'form-item',
      ),
    ),
  );
  $export['group_details|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_downloads|node|data_set|default';
  $field_group->group_name = 'group_downloads';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Downloads',
    'weight' => '10',
    'children' => array(
      0 => 'field_data_sources',
      1 => 'field_eml_link',
      2 => 'links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-downloads field-group-fieldset ',
      ),
    ),
  );
  $export['group_downloads|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geo_temporal|node|data_set|form';
  $field_group->group_name = 'group_geo_temporal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Temporal',
    'weight' => '15',
    'children' => array(
      0 => 'field_date_range',
      1 => 'field_publication_date',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Temporal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-geo-temporal field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_geo_temporal|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodology|node|data_set|default';
  $field_group->group_name = 'group_methodology';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Methodology',
    'weight' => '11',
    'children' => array(
      0 => 'field_additional_information',
      1 => 'field_instrumentation',
      2 => 'field_maintenance',
      3 => 'field_methods',
      4 => 'field_purpose',
      5 => 'field_quality_assurance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methodology field-group-fieldset',
      ),
    ),
  );
  $export['group_methodology|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methods|node|data_set|form';
  $field_group->group_name = 'group_methods';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Methods',
    'weight' => '12',
    'children' => array(
      0 => 'field_instrumentation',
      1 => 'field_methods',
      2 => 'field_quality_assurance',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methods field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_methods|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|data_set|default';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_creator',
      1 => 'field_project_roles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-people field-group-fieldset',
      ),
    ),
  );
  $export['group_people|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personnel|node|data_set|form';
  $field_group->group_name = 'group_personnel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Personnel',
    'weight' => '11',
    'children' => array(
      0 => 'field_person_contact',
      1 => 'field_person_creator',
      2 => 'field_person_metadata_provider',
      3 => 'field_person_publisher',
      4 => 'field_project_roles',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-personnel field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personnel|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_read_only|node|data_set|form';
  $field_group->group_name = 'group_read_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Read only',
    'weight' => '8',
    'children' => array(
      0 => 'field_doi',
      1 => 'field_eml_hash',
      2 => 'field_eml_link',
      3 => 'field_eml_revision_id',
      4 => 'field_eml_valid',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Read only',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '<div class="messages warning">Do not edit any of these fields.</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_read_only|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|data_set|default';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_links',
      1 => 'field_related_publications',
      2 => 'field_related_sites',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related field-group-fieldset',
      ),
    ),
  );
  $export['group_related|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|data_set|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Related Information',
    'weight' => '16',
    'children' => array(
      0 => 'field_related_links',
      1 => 'field_related_publications',
      2 => 'field_related_sites',
      3 => 'field_protocol_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Related Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-related field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_related|node|data_set|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|data_set|default';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary',
    'weight' => '0',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_data_set_id',
      2 => 'field_doi',
      3 => 'field_short_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summary',
      'instance_settings' => array(
        'classes' => ' group-summary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_summary|node|data_set|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|data_set|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '13',
    'children' => array(
      0 => 'field_core_areas',
      1 => 'field_keywords',
      2 => 'field_ntl_keywords',
      3 => 'field_section',
      4 => 'field_tags',
      5 => 'field_term_categories',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-taxonomy field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|data_set|form'] = $field_group;

  return $export;
}
