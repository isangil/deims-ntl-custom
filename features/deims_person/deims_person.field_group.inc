<?php
/**
 * @file
 * deims_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function deims_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|person|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '16',
    'children' => array(
      0 => 'field_address',
      1 => 'field_email',
      2 => 'field_fax',
      3 => 'field_phone',
      4 => 'field_url',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-contact field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|person|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_organization',
      2 => 'group_records',
      3 => 'group_role',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-details field-group-htabs',
      ),
    ),
  );
  $export['group_details|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|node|person|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '19',
    'children' => array(
      0 => 'field_organization',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-organization field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organization|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_records|node|person|form';
  $field_group->group_name = 'group_records';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Records',
    'weight' => '20',
    'children' => array(
      0 => 'field_associated_biblio_author',
      1 => 'field_person_id',
      2 => 'field_user_account',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-records field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_records|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_role|node|person|form';
  $field_group->group_name = 'group_role';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Role',
    'weight' => '17',
    'children' => array(
      0 => 'field_person_role',
      1 => 'field_person_title',
      2 => 'field_person_college',
      3 => 'field_person_department',
      4 => 'field_person_specialty',
      5 => 'field_person_mo_role',
      6 => 'field_person_wsc_role',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Role',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => ' group-records field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_role|node|person|form'] = $field_group;

  return $export;
}
