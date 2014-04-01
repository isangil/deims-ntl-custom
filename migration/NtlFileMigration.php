<?php

/**
 * @file
 * Definition of NtlFileMigration.
 */

class NtlFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {
    parent::prepare($file, $row);

    // Add data for  images.
    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'image');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title', 'body', 'format'));
    $query->join('image', 'cti', 'n.nid = cti.nid');
    $query->condition('cti.fid', $row->fid);
    $query->join('term_node', 'tn', 'tn.vid = nr.vid');
    $query->fields('tn', array('tid'));
    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
      }
      if (!empty($result->body)) {
        if ( preg_match('/Date: (\d+)/',$result->body, $found)){
          preg_replace('/Date: \d+/',' ',$result->body);
          $mydate = date('Y-m-d H:i:s',strtotime("$found[1]-01-01 00:00:00")) ;  // may need lots of tweaking
          $file->field_date[LANGUAGE_NONE][0]['value'] = $mydate; 
        } else if ( preg_match('/Date:(\w+)\s(\d+)/',$result->body,$found)){
            switch($found[1]) {
               case "Sept.":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-09-01 00:00:00')) ;  // 
               case "Jul.":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-07-01 00:00:00')) ;  // 
               case "Aug.":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-08-01 00:00:00')) ;  // 
               case "Jun.":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-06-01 00:00:00')) ;  // 
               case "January":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-01-01 00:00:00')) ;  // 
               case "June":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-06-01 00:00:00')) ;  // 
               case "Aug":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-08-01 00:00:00')) ;  // 
               case "July":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-07-01 00:00:00')) ;  // 
               case "Summer":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-07-01 00:00:00')) ;  // 
               case "Fall":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-10-01 00:00:00')) ;  // 
               case "Winter":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-01-01 00:00:00')) ;  // 
               case "Spring":
                 $mydate = date('Y-m-d H:i:s',strtotime("$found[2]".'-05-01 00:00:00')) ;  // 
            }
            $file->field_date[LANGUAGE_NONE][0]['value'] =  $mydate;
        }
//       Circulat dependency: THis migration needs Person, but Person need images....
//        if ( preg_match('/Photographer: (\w+)\s(\w+)/',$result->body, $found)){
//          preg_replace('/Photographer: (\w+)\s(\w+)/',' ',$result->body);
//          $photographer = $found[1] . ' ' .$found[2];
//        } else if ( preg_match('/Photographer: (\w+)/',$result->body, $found)){
//          preg_replace('/Photographer: (\w+)/',' ',$result->body);
//          $photographer = $found[1];
//        }
        // Sometimes a phot may ha e a "Site: in the body
//        $result->photographer_person = $this->handleSourceMigration('DeimsContentPerson', $photographer);
        $file->field_photo_caption[LANGUAGE_NONE][0] = array('value' => $result->body, 'format' => $this->mapFormat($result->format));
//        $file->field_related_people[LANGUAGE_NONE][0] = array('target_id' => $result->photographer_person);
        if ($result->newtid = $this->handleSourceMigration('NtlTaxonomyImageGalleries', $result->tid)) {
          $file->field_term_im_galleries[LANGUAGE_NONE][0] = array('tid' => $result->newtid );
        }
      }
    }
  }
}
