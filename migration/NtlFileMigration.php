<?php

/**
 * @file
 * Definition of NtlFileMigration.
 */

class NtlFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {
    parent::prepare($file, $row);

    // here we set customizations... not worked yet, this is a sev copy
    // Add data for scientific images.
    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'scientific_image');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title', 'body', 'format'));
    $query->join('content_type_scientific_image', 'ctsi', 'n.vid = ctsi.vid');
    $query->condition('ctsi.field_sci_image_fid', $row->fid);
    $query->fields('ctsi', array('field_sci_image_author_nid'));
    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
      }
      if (!empty($result->body)) {
        $file->field_photo_caption[LANGUAGE_NONE][0] = array('value' => $result->body, 'format' => $this->mapFormat($result->format));
      }
      if ($result->photographer_person = $this->handleSourceMigration('DeimsContentPerson', $result->field_sci_image_author_nid)) {
        $file->field_related_people[LANGUAGE_NONE][0] = array('target_id' => $result->photographer_person);
      }
    }
  }
}
