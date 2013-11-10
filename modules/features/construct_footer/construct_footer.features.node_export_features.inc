<?php
/**
 * @file
 * construct_footer.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function construct_footer_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'53\',
      \'uid\' => \'0\',
      \'title\' => \'Footer\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e448cfc8-9b64-4864-b009-0633bd5aca33\',
      \'nid\' => \'53\',
      \'type\' => \'construct_footer\',
      \'language\' => \'und\',
      \'created\' => \'1384116378\',
      \'changed\' => \'1384116534\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'de5d3ec1-73c7-4bb8-acb8-0babf43211a2\',
      \'revision_timestamp\' => \'1384116534\',
      \'revision_uid\' => \'1\',
      \'field_copyright\' => array(
        \'und\' => array(
          array(
            \'value\' => \'© Copyright, All Rights Reserved\',
            \'format\' => NULL,
            \'safe_value\' => \'© Copyright, All Rights Reserved\',
          ),
        ),
      ),
      \'field_links\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/terms-and-conditions\',
            \'title\' => \'Terms and Conditions\',
            \'attributes\' => array(),
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
      \'last_comment_timestamp\' => \'1384116378\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'nodeblock\' => array(
        \'nid\' => \'53\',
        \'enabled\' => \'1\',
        \'machine_name\' => \'53\',
        \'block_title\' => \'Footer\',
        \'view_mode\' => \'full\',
        \'node_link\' => \'0\',
        \'comment_link\' => \'0\',
        \'translation_fallback\' => \'0\',
      ),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'54\',
        \'source\' => \'node/53\',
        \'alias\' => \'footer\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
