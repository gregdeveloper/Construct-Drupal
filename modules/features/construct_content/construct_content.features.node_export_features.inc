<?php
/**
 * @file
 * construct_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function construct_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'52\',
      \'uid\' => \'0\',
      \'title\' => \'Home\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43bac338-2c40-4059-8a26-e8f6c34342d5\',
      \'nid\' => \'52\',
      \'type\' => \'construct_page\',
      \'language\' => \'und\',
      \'created\' => \'1384103728\',
      \'changed\' => \'1384112470\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'afb1ff0b-565c-4716-ad48-a8014e6fcf2a\',
      \'revision_timestamp\' => \'1384112470\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(),
      \'field_text_and_image\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
            \'revision_id\' => \'1\',
          ),
          array(
            \'value\' => \'2\',
            \'revision_id\' => \'2\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1384103728\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'path\' => array(
        \'pid\' => \'53\',
        \'source\' => \'node/52\',
        \'alias\' => \'home\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
