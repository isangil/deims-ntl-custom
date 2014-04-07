<?php

/**
 * @file
 * Definition of NtlContentOrganizationMigration.
 */

class NtlContentOrganizationMigration extends DeimsContentOrganizationMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // NTL uses a link field for field_person_organization that has a title
    // property, rather than a text field. So we need to rebuild the source
    // query.
    $query = $this->connection->select('content_type_person', 'ctp');
    $query->fields('ctp', array('nid', 'field_person_organization_value'));
    $query->condition('ctp.field_person_organization_value', '', '<>');
    $query->groupBy('field_person_organization_value');
    $this->source = new MigrateSourceSQL($query,array(), NULL, array('map_joinable' => FALSE));

    // Remap the organization title to the link field's title value.
    $this->removeFieldMapping('title');
    $this->addFieldMapping('title', 'field_person_organization_value')
      ->description('tweaked in prepareRow()');
  }
  
  public function prepareRow($row){

    // Fix entropical organization names.
    switch ($row->field_person_organization_value) {
      case 'Univeristy of Wisconsin':
        $row->field_person_organization_value = 'University of Wisconsin';
        break;
      case 'University of Wisconsins Madison':
        $row->field_person_organization_value = 'University of Wisconsin Madison';
        break;
      case 'University of Wisonsin':
        $row->field_person_organization_value = 'University of Wisconsin';
        break;
      case 'Univesrity of Wisconsin':
        $row->field_person_organization_value = 'University of Wisconsin';
        break;
      case 'US Geological Survey':
        $row->field_person_organization_value = 'U.S. Geological Survey';
        break;
    }
    parent::prepareRow($row);
  }

}
