<?php

/**
 * @file
 * Definition of NtlContentPersonMigration.
 */

class NtlContentPersonMigration extends DeimsContentPersonMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // The field_person_uid is actually
    $this->removeFieldMapping('field_user_account');
    $this->addFieldMapping('field_user_account', 'field_person_user')
      ->sourceMigration('Users');

    // field_person_pubs does not exist
    $this->removeFieldMapping(NULL, 'field_person_pubs');

    $this->addUnmigratedSources(array(
      'field_person_organization:title',
      'field_person_organization:attributes',
      'field_person_reu',
    ));
  }

  public function prepareRow($row) {
    // Fix empty email values used on SEV.
    switch ($row->field_person_email) {
      case 'unknown@wisc.edu':
      case 'none@wisc.edu':
        $row->field_person_email = NULL;
    }

    // Fix country values used on SEV.
    switch ($row->field_person_country) {
      case 'Dublin':
        $row->field_person_city = 'Dublin';
        $row->field_person_country = 'Ireland';
        break;
      case 'Cumbria':
        $row->field_person_state = 'Cumbria';
        $row->field_person_country = 'United Kingdom';
        break;
    }

    parent::prepareRow($row);
  }

  public function getOrganization($node, $row) {
    $field_values = array();

    // Search for an already migrated organization entity with the same title
    // and link value.
    if (!empty($row->{'field_person_organization'})) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'organization');
      $query->propertyCondition('title', $row->{'field_person_organization'});
      $results = $query->execute();
      if (!empty($results['node'])) {
        $field_values[] = array('target_id' => reset($results['node'])->nid);
      }
    }

    return $field_values;
  }
}
