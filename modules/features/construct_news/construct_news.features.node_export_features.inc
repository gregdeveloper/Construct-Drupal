<?php
/**
 * @file
 * construct_news.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function construct_news_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'0\',
      \'title\' => \'Esse Singularis Usitas Veniam\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee618b3b-5dc2-4960-a667-68e8f9f87045\',
      \'nid\' => \'37\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383911498\',
      \'changed\' => \'1384104349\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'267d2706-fb43-45a6-b698-1583c08c3ce4\',
      \'revision_timestamp\' => \'1384104349\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Camur neque tego. Facilisi gilvus hos lobortis odio singularis tamen typicus. Consequat illum jugis oppeto premo quae. Damnum dolus genitus jugis. Luptatum meus quadrum vereor. Abigo commoveo et ille suscipere utrum ymo. Consectetuer eligo et exputo genitus jus os sudo utinam. Ea illum refoveo validus vero. Commoveo incassum olim qui sino utrum. Abdo commoveo damnum jumentum macto pala quadrum refero utrum vulputate. Accumsan acsi bene commodo minim suscipit. Distineo iriure neo. Accumsan conventio huic in lucidus suscipit.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Camur neque tego. Facilisi gilvus hos lobortis odio singularis tamen typicus. Consequat illum jugis oppeto premo quae. Damnum dolus genitus jugis. Luptatum meus quadrum vereor. Abigo commoveo et ille suscipere utrum ymo. Consectetuer eligo et exputo genitus jus os sudo utinam. Ea illum refoveo validus vero. Commoveo incassum olim qui sino utrum. Abdo commoveo damnum jumentum macto pala quadrum refero utrum vulputate. Accumsan acsi bene commodo minim suscipit. Distineo iriure neo. Accumsan conventio huic in lucidus suscipit.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'32\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction3.jpg\',
            \'uri\' => \'public://field/image/construction3_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104349\',
            \'uuid\' => \'4be8d7d0-f2e0-4173-96f7-869a87d5ecaa\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'38\',
        \'source\' => \'node/37\',
        \'alias\' => \'esse-singularis-usitas-veniam\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'0\',
      \'title\' => \'Metuo Si Turpis\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a7db2750-5460-4c0d-bee3-08b064cb2918\',
      \'nid\' => \'33\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383825267\',
      \'changed\' => \'1384104372\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'29046ffa-da47-4924-9d04-5645f11b1bd7\',
      \'revision_timestamp\' => \'1384104372\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Antehabeo dolor erat fere quae roto secundum similis verto. Aliquip causa facilisi fere imputo molior quadrum typicus utinam. Consequat immitto iriure letalis vereor.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Antehabeo dolor erat fere quae roto secundum similis verto. Aliquip causa facilisi fere imputo molior quadrum typicus utinam. Consequat immitto iriure letalis vereor.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'33\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'219\',
            \'uid\' => \'1\',
            \'filename\' => \'construction4.jpg\',
            \'uri\' => \'public://field/image/construction4_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25019\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104372\',
            \'uuid\' => \'18359744-2285-47bd-8d4d-013c8305f871\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'34\',
        \'source\' => \'node/33\',
        \'alias\' => \'metuo-si-turpis\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'0\',
      \'title\' => \'At In Quis Te\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7f64d68-39b9-40a9-907f-7dde3f8c297c\',
      \'nid\' => \'41\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383752710\',
      \'changed\' => \'1384104280\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2e63276b-053c-45ef-bee2-76a09957c546\',
      \'revision_timestamp\' => \'1384104280\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Augue eligo et haero importunus iusto jumentum patria vicis vulputate. At commoveo ludus nobis obruo praesent valetudo. Amet camur capto dignissim ex hendrerit iriure utinam. At eligo esse gilvus molior nulla olim typicus.\\r\\n\\r\\nAliquam appellatio ex gilvus incassum molior olim quidem veniam. Commodo commoveo consequat duis jumentum neo plaga praesent vel vulputate. Euismod facilisis imputo jugis quidem utrum valde veniam vindico vulputate.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Augue eligo et haero importunus iusto jumentum patria vicis vulputate. At commoveo ludus nobis obruo praesent valetudo. Amet camur capto dignissim ex hendrerit iriure utinam. At eligo esse gilvus molior nulla olim typicus.</p>\\n<p>Aliquam appellatio ex gilvus incassum molior olim quidem veniam. Commodo commoveo consequat duis jumentum neo plaga praesent vel vulputate. Euismod facilisis imputo jugis quidem utrum valde veniam vindico vulputate.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'29\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'219\',
            \'uid\' => \'1\',
            \'filename\' => \'construction4.jpg\',
            \'uri\' => \'public://field/image/construction4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25019\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104280\',
            \'uuid\' => \'bfbb4d03-e135-446a-a259-ac563a2a9461\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'42\',
        \'source\' => \'node/41\',
        \'alias\' => \'quis-te\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'0\',
      \'title\' => \'Os Acsi augue dolor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'88ce8722-10bb-48c2-b52e-4ae3f95bf682\',
      \'nid\' => \'36\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383814662\',
      \'changed\' => \'1384104150\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3e75852f-d22d-4b6e-a5ba-7c9d878ddd04\',
      \'revision_timestamp\' => \'1384104150\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Mauris suscipit ullamcorper. Cogo nulla patria sino. Dolore gilvus haero immitto in valde venio. Exputo importunus quis tego ulciscor vel. Abluo diam neque os ulciscor validus. Camur defui feugiat pneum. Abico aliquam hos iusto natu quidne ratis sed usitas. Defui gilvus ibidem jumentum lobortis ludus saluto secundum si ymo.\\r\\n\\r\\nAcsi augue dolor elit lucidus ulciscor. Appellatio consectetuer duis gemino macto patria sed sudo voco.\\r\\n\\r\\nCaecus dolore exputo iaceo illum neo pagus quia quibus tego. Abluo ibidem jumentum metuo mos pagus paulatim quidem sudo ullamcorper. Decet ea eros esca luctus pneum populus saluto suscipit. Hos paratus si ulciscor. Abluo autem hendrerit immitto meus nibh quidem typicus vero verto.\\r\\n\\r\\nAbdo at luctus nulla si turpis. Abico consectetuer saepius secundum si. Eligo esse facilisis genitus hos iustum pecus quae quidne vindico.\\r\\n\\r\\nInterdico populus tation tego. Exerci gravis qui scisco sit. Erat hos macto obruo pertineo quibus refoveo tincidunt vel vulpes. Facilisis ideo nobis pertineo vero zelus.\\r\\n\\r\\nEsca facilisi natu nobis validus voco. Abluo at duis ea enim lucidus natu quis ullamcorper vel.\\r\\n\\r\\nExerci nimis occuro pala sed singularis vulpes ymo. Abigo bene conventio enim ludus magna minim tamen. Exerci incassum uxor. Magna quis vel verto. Causa commodo humo neque obruo premo quadrum sit valetudo verto. Amet defui dignissim elit eros nimis occuro roto sed vicis. Causa gemino ideo luptatum pertineo pneum sagaciter suscipit utrum.\\r\\n\\r\\nConsectetuer haero huic nunc quibus quis sagaciter. Cogo et natu saluto valde vel. Eligo huic natu tamen. Eligo lucidus neo saepius sino. Aliquam aliquip decet elit ibidem meus nimis similis valetudo.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Mauris suscipit ullamcorper. Cogo nulla patria sino. Dolore gilvus haero immitto in valde venio. Exputo importunus quis tego ulciscor vel. Abluo diam neque os ulciscor validus. Camur defui feugiat pneum. Abico aliquam hos iusto natu quidne ratis sed usitas. Defui gilvus ibidem jumentum lobortis ludus saluto secundum si ymo.</p>\\n<p>Acsi augue dolor elit lucidus ulciscor. Appellatio consectetuer duis gemino macto patria sed sudo voco.</p>\\n<p>Caecus dolore exputo iaceo illum neo pagus quia quibus tego. Abluo ibidem jumentum metuo mos pagus paulatim quidem sudo ullamcorper. Decet ea eros esca luctus pneum populus saluto suscipit. Hos paratus si ulciscor. Abluo autem hendrerit immitto meus nibh quidem typicus vero verto.</p>\\n<p>Abdo at luctus nulla si turpis. Abico consectetuer saepius secundum si. Eligo esse facilisis genitus hos iustum pecus quae quidne vindico.</p>\\n<p>Interdico populus tation tego. Exerci gravis qui scisco sit. Erat hos macto obruo pertineo quibus refoveo tincidunt vel vulpes. Facilisis ideo nobis pertineo vero zelus.</p>\\n<p>Esca facilisi natu nobis validus voco. Abluo at duis ea enim lucidus natu quis ullamcorper vel.</p>\\n<p>Exerci nimis occuro pala sed singularis vulpes ymo. Abigo bene conventio enim ludus magna minim tamen. Exerci incassum uxor. Magna quis vel verto. Causa commodo humo neque obruo premo quadrum sit valetudo verto. Amet defui dignissim elit eros nimis occuro roto sed vicis. Causa gemino ideo luptatum pertineo pneum sagaciter suscipit utrum.</p>\\n<p>Consectetuer haero huic nunc quibus quis sagaciter. Cogo et natu saluto valde vel. Eligo huic natu tamen. Eligo lucidus neo saepius sino. Aliquam aliquip decet elit ibidem meus nimis similis valetudo.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'26\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction1.jpg\',
            \'uri\' => \'public://field/image/construction1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31069\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104150\',
            \'uuid\' => \'f7270254-0f3d-4fdb-a400-49b241084706\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'37\',
        \'source\' => \'node/36\',
        \'alias\' => \'os-acsi-augue-dolor\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'0\',
      \'title\' => \'Typicus\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'aaef5900-215c-4845-8214-f1d21d00efca\',
      \'nid\' => \'40\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383745807\',
      \'changed\' => \'1384104300\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'439f1a93-c160-4f20-94a5-ef193f5169a2\',
      \'revision_timestamp\' => \'1384104300\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Amet caecus comis hos mos nutus olim uxor verto volutpat. Aliquam gemino ille nobis pala torqueo vicis. Causa diam interdico.\\r\\n\\r\\nAbluo autem elit nunc pagus refoveo sudo. Enim gravis nunc praesent premo wisi.\\r\\n\\r\\nAliquip mos singularis turpis volutpat. Diam dolus iusto magna neo neque quidem te valde vulpes. Luptatum sudo valetudo. Blandit damnum defui laoreet nostrud qui uxor. Refero sagaciter singularis vulpes. Adipiscing decet hos ille odio sino sit validus vulputate. Caecus decet et feugiat huic saepius tation ut validus. Commodo esca haero roto. Consectetuer conventio euismod gilvus pecus refero. At illum lenis paulatim saluto secundum.\\r\\n\\r\\nAcsi aptent at letalis nunc patria plaga quidne vereor. Cui eligo interdico quidem vero. Amet decet iustum nulla saluto venio. Eu euismod exputo iriure luctus similis venio vero volutpat zelus.\\r\\n\\r\\nEt facilisi luptatum verto. Mos quadrum venio. Elit facilisi hos ille proprius sit turpis typicus. Adipiscing lenis suscipit. Appellatio commodo consectetuer quia volutpat. Causa quidem quis ut. Abdo comis mauris meus nutus premo quae refoveo si validus. Antehabeo dignissim jumentum jus os quibus sudo vindico vulputate.\\r\\n\\r\\nDistineo eros nibh. Ad consequat enim pecus. Brevitas enim qui saluto. Abluo aptent comis gemino nunc paratus saepius tamen tum. Aliquip erat meus nostrud nunc paulatim quibus quis ullamcorper utrum. Iaceo pagus valetudo.\\r\\n\\r\\nAdipiscing aliquam inhibeo nibh oppeto venio. Abbas blandit enim jus tego vindico. Aliquip dignissim ludus neo nunc oppeto sit vulpes. Abbas aliquam blandit olim persto quadrum refero rusticus sino. Aliquip caecus et iaceo importunus luctus magna metuo sudo velit. Ad dolore iustum jugis luctus rusticus veniam. Abbas abluo decet ea erat oppeto praesent. Inhibeo pala patria praesent utinam vero verto.\\r\\n\\r\\nDolore ea esse proprius tation vulputate. Exerci lucidus luctus magna mos quae quia. Dolus minim nutus. Abbas bene brevitas ille patria plaga. Aptent ideo neque quibus suscipit. Adipiscing blandit esca gravis ibidem jus. Acsi commodo fere lobortis mauris obruo secundum vel.\\r\\n\\r\\nConventio magna nutus vulputate. Appellatio diam humo. Bene patria ullamcorper. Abluo letalis populus refero torqueo. Nutus sino suscipere. Defui diam elit persto proprius torqueo. Brevitas dolus neque oppeto os plaga. Iustum lobortis saepius.\\r\\n\\r\\nAbluo gravis interdico jugis pecus secundum. Eros gravis pala sit. Erat eum nulla paratus utrum. Jus mos quidne virtus. Comis dolus in quae qui quis veniam. Comis gilvus imputo nunc. Exerci incassum magna tamen.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Amet caecus comis hos mos nutus olim uxor verto volutpat. Aliquam gemino ille nobis pala torqueo vicis. Causa diam interdico.</p>\\n<p>Abluo autem elit nunc pagus refoveo sudo. Enim gravis nunc praesent premo wisi.</p>\\n<p>Aliquip mos singularis turpis volutpat. Diam dolus iusto magna neo neque quidem te valde vulpes. Luptatum sudo valetudo. Blandit damnum defui laoreet nostrud qui uxor. Refero sagaciter singularis vulpes. Adipiscing decet hos ille odio sino sit validus vulputate. Caecus decet et feugiat huic saepius tation ut validus. Commodo esca haero roto. Consectetuer conventio euismod gilvus pecus refero. At illum lenis paulatim saluto secundum.</p>\\n<p>Acsi aptent at letalis nunc patria plaga quidne vereor. Cui eligo interdico quidem vero. Amet decet iustum nulla saluto venio. Eu euismod exputo iriure luctus similis venio vero volutpat zelus.</p>\\n<p>Et facilisi luptatum verto. Mos quadrum venio. Elit facilisi hos ille proprius sit turpis typicus. Adipiscing lenis suscipit. Appellatio commodo consectetuer quia volutpat. Causa quidem quis ut. Abdo comis mauris meus nutus premo quae refoveo si validus. Antehabeo dignissim jumentum jus os quibus sudo vindico vulputate.</p>\\n<p>Distineo eros nibh. Ad consequat enim pecus. Brevitas enim qui saluto. Abluo aptent comis gemino nunc paratus saepius tamen tum. Aliquip erat meus nostrud nunc paulatim quibus quis ullamcorper utrum. Iaceo pagus valetudo.</p>\\n<p>Adipiscing aliquam inhibeo nibh oppeto venio. Abbas blandit enim jus tego vindico. Aliquip dignissim ludus neo nunc oppeto sit vulpes. Abbas aliquam blandit olim persto quadrum refero rusticus sino. Aliquip caecus et iaceo importunus luctus magna metuo sudo velit. Ad dolore iustum jugis luctus rusticus veniam. Abbas abluo decet ea erat oppeto praesent. Inhibeo pala patria praesent utinam vero verto.</p>\\n<p>Dolore ea esse proprius tation vulputate. Exerci lucidus luctus magna mos quae quia. Dolus minim nutus. Abbas bene brevitas ille patria plaga. Aptent ideo neque quibus suscipit. Adipiscing blandit esca gravis ibidem jus. Acsi commodo fere lobortis mauris obruo secundum vel.</p>\\n<p>Conventio magna nutus vulputate. Appellatio diam humo. Bene patria ullamcorper. Abluo letalis populus refero torqueo. Nutus sino suscipere. Defui diam elit persto proprius torqueo. Brevitas dolus neque oppeto os plaga. Iustum lobortis saepius.</p>\\n<p>Abluo gravis interdico jugis pecus secundum. Eros gravis pala sit. Erat eum nulla paratus utrum. Jus mos quidne virtus. Comis dolus in quae qui quis veniam. Comis gilvus imputo nunc. Exerci incassum magna tamen.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'30\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction1.jpg\',
            \'uri\' => \'public://field/image/construction1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31069\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104300\',
            \'uuid\' => \'e980fa4c-a50c-4081-893f-75c2f3486eb0\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'41\',
        \'source\' => \'node/40\',
        \'alias\' => \'typicus\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'38\',
      \'uid\' => \'0\',
      \'title\' => \'Aliquam Gravis Nunc\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a0b8b465-fb01-4556-a483-b273f0306915\',
      \'nid\' => \'38\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383842498\',
      \'changed\' => \'1384104324\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7a2c9ceb-ea02-400f-ba33-3d8d29896477\',
      \'revision_timestamp\' => \'1384104324\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Fere nutus quadrum sagaciter. Consectetuer esca luptatum meus nisl os. Antehabeo distineo eu huic illum ut. Augue cogo damnum natu nostrud praesent quidne uxor velit zelus. Amet appellatio huic neque roto virtus. Distineo ibidem importunus iusto patria rusticus vereor.\\r\\n\\r\\nCaecus damnum ex magna nobis obruo similis. Ad feugiat qui. Abdo jus laoreet luctus modo nisl ratis usitas. Capto facilisi haero lobortis suscipere usitas. Abbas abdo accumsan capto gemino natu pagus. Facilisis mauris obruo paratus populus utinam validus virtus zelus. Causa humo inhibeo luctus premo refero sit tum utinam. Eros laoreet secundum.\\r\\n\\r\\nFere gilvus gravis natu. Antehabeo autem commodo diam ideo ille saepius. Damnum ex si. Duis roto tamen usitas. Comis importunus pala premo refoveo venio. Hendrerit nimis ratis. Augue oppeto veniam. Dignissim hendrerit immitto oppeto os si suscipit utrum.\\r\\n\\r\\nAbdo diam hos paulatim quidne tation vereor volutpat. Nulla si velit verto. Camur iriure letalis mos qui quibus roto singularis vero. Bene dolore enim pecus quadrum ut zelus. Blandit defui humo jumentum neque populus praemitto qui tation. Eu ludus qui sudo. Macto molior tamen vero ymo. Commodo hos neo nulla plaga quidem roto virtus.\\r\\n\\r\\nAt haero iaceo roto scisco tation te tego. Ludus turpis ulciscor vulpes. Dolus occuro plaga pneum scisco tum. Camur diam eros hendrerit in meus nostrud patria tincidunt tum. Abigo sit virtus. Acsi euismod illum pertineo quibus.\\r\\n\\r\\nAppellatio feugiat genitus gravis magna tation. Iusto nostrud validus velit. Aliquam capto eu humo lucidus magna secundum. Eum premo saepius sed singularis tego zelus. Causa damnum hos interdico odio pertineo. Abigo erat ille ludus premo. Meus occuro praemitto. Abdo gravis iaceo qui quibus verto.\\r\\n\\r\\nAmet blandit eligo nostrud persto sudo te. Letalis luptatum similis veniam vereor vero. Abico abigo importunus macto obruo oppeto os refoveo. Abico commoveo ideo jugis luptatum occuro rusticus sagaciter. Autem decet inhibeo sit volutpat. Damnum defui facilisis feugiat in iustum quidne similis typicus.\\r\\n\\r\\nCommoveo magna obruo. Comis iaceo nimis praemitto quae sit te voco. Refoveo sed tum.\\r\\n\\r\\nEum humo laoreet minim uxor. Aliquip luptatum utrum. Exerci os quis valde. Abbas commodo consequat esse mauris quis ratis uxor veniam volutpat. Eum neque tamen. Esca nutus tation. Gravis imputo lobortis odio olim persto sit turpis ulciscor venio. Amet antehabeo neque nimis os praesent rusticus tamen turpis veniam. Appellatio brevitas cogo quis saluto. Odio quia similis torqueo.\\r\\n\\r\\nBrevitas conventio facilisis huic in jugis minim tum. Blandit camur damnum ludus nutus pertineo suscipit voco. Loquor pertineo tum venio voco. Dolor facilisi fere ille magna melior proprius quis sit tamen. Abluo esca facilisis letalis magna populus probo sagaciter sino. Immitto iriure melior nimis os ratis te valde vindico. At comis defui gilvus haero iaceo macto uxor valetudo.\\r\\n\\r\\nAliquip augue esca ille illum premo sagaciter. Abbas autem euismod gemino hendrerit laoreet persto praemitto wisi. Abbas lucidus praemitto ratis torqueo vulputate. Ad eum oppeto proprius. Et gravis nostrud pecus venio. Ea nimis suscipit verto. Appellatio iusto qui refoveo. Abluo blandit consectetuer facilisis jugis nutus saluto si validus. Capto dolore fere imputo iusto nobis rusticus suscipere valetudo. Comis interdico verto.\\r\\n\\r\\nAcsi illum in natu neo quibus secundum uxor zelus. Commodo ille lucidus melior quidem ullamcorper. At dolore eum gemino letalis mos ratis. Aptent modo ratis. Brevitas feugiat iaceo iriure odio pala singularis. At capto diam laoreet letalis nutus te velit. Appellatio dignissim qui. Capto commodo decet dolor ea ut. Populus quis si. Capto fere melior tego.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Fere nutus quadrum sagaciter. Consectetuer esca luptatum meus nisl os. Antehabeo distineo eu huic illum ut. Augue cogo damnum natu nostrud praesent quidne uxor velit zelus. Amet appellatio huic neque roto virtus. Distineo ibidem importunus iusto patria rusticus vereor.</p>\\n<p>Caecus damnum ex magna nobis obruo similis. Ad feugiat qui. Abdo jus laoreet luctus modo nisl ratis usitas. Capto facilisi haero lobortis suscipere usitas. Abbas abdo accumsan capto gemino natu pagus. Facilisis mauris obruo paratus populus utinam validus virtus zelus. Causa humo inhibeo luctus premo refero sit tum utinam. Eros laoreet secundum.</p>\\n<p>Fere gilvus gravis natu. Antehabeo autem commodo diam ideo ille saepius. Damnum ex si. Duis roto tamen usitas. Comis importunus pala premo refoveo venio. Hendrerit nimis ratis. Augue oppeto veniam. Dignissim hendrerit immitto oppeto os si suscipit utrum.</p>\\n<p>Abdo diam hos paulatim quidne tation vereor volutpat. Nulla si velit verto. Camur iriure letalis mos qui quibus roto singularis vero. Bene dolore enim pecus quadrum ut zelus. Blandit defui humo jumentum neque populus praemitto qui tation. Eu ludus qui sudo. Macto molior tamen vero ymo. Commodo hos neo nulla plaga quidem roto virtus.</p>\\n<p>At haero iaceo roto scisco tation te tego. Ludus turpis ulciscor vulpes. Dolus occuro plaga pneum scisco tum. Camur diam eros hendrerit in meus nostrud patria tincidunt tum. Abigo sit virtus. Acsi euismod illum pertineo quibus.</p>\\n<p>Appellatio feugiat genitus gravis magna tation. Iusto nostrud validus velit. Aliquam capto eu humo lucidus magna secundum. Eum premo saepius sed singularis tego zelus. Causa damnum hos interdico odio pertineo. Abigo erat ille ludus premo. Meus occuro praemitto. Abdo gravis iaceo qui quibus verto.</p>\\n<p>Amet blandit eligo nostrud persto sudo te. Letalis luptatum similis veniam vereor vero. Abico abigo importunus macto obruo oppeto os refoveo. Abico commoveo ideo jugis luptatum occuro rusticus sagaciter. Autem decet inhibeo sit volutpat. Damnum defui facilisis feugiat in iustum quidne similis typicus.</p>\\n<p>Commoveo magna obruo. Comis iaceo nimis praemitto quae sit te voco. Refoveo sed tum.</p>\\n<p>Eum humo laoreet minim uxor. Aliquip luptatum utrum. Exerci os quis valde. Abbas commodo consequat esse mauris quis ratis uxor veniam volutpat. Eum neque tamen. Esca nutus tation. Gravis imputo lobortis odio olim persto sit turpis ulciscor venio. Amet antehabeo neque nimis os praesent rusticus tamen turpis veniam. Appellatio brevitas cogo quis saluto. Odio quia similis torqueo.</p>\\n<p>Brevitas conventio facilisis huic in jugis minim tum. Blandit camur damnum ludus nutus pertineo suscipit voco. Loquor pertineo tum venio voco. Dolor facilisi fere ille magna melior proprius quis sit tamen. Abluo esca facilisis letalis magna populus probo sagaciter sino. Immitto iriure melior nimis os ratis te valde vindico. At comis defui gilvus haero iaceo macto uxor valetudo.</p>\\n<p>Aliquip augue esca ille illum premo sagaciter. Abbas autem euismod gemino hendrerit laoreet persto praemitto wisi. Abbas lucidus praemitto ratis torqueo vulputate. Ad eum oppeto proprius. Et gravis nostrud pecus venio. Ea nimis suscipit verto. Appellatio iusto qui refoveo. Abluo blandit consectetuer facilisis jugis nutus saluto si validus. Capto dolore fere imputo iusto nobis rusticus suscipere valetudo. Comis interdico verto.</p>\\n<p>Acsi illum in natu neo quibus secundum uxor zelus. Commodo ille lucidus melior quidem ullamcorper. At dolore eum gemino letalis mos ratis. Aptent modo ratis. Brevitas feugiat iaceo iriure odio pala singularis. At capto diam laoreet letalis nutus te velit. Appellatio dignissim qui. Capto commodo decet dolor ea ut. Populus quis si. Capto fere melior tego.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'31\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction2.jpg\',
            \'uri\' => \'public://field/image/construction2_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32473\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104324\',
            \'uuid\' => \'cbc63ad5-2b8c-484a-8165-822ce44ae3c9\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'39\',
        \'source\' => \'node/38\',
        \'alias\' => \'aliquam-gravis-nunc\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'50\',
      \'uid\' => \'0\',
      \'title\' => \'Nostrud\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'446088dc-1e86-4535-82d7-81d61fb960de\',
      \'nid\' => \'50\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383906276\',
      \'changed\' => \'1384104235\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7b6b0486-8e68-4710-bef6-0f0235f12186\',
      \'revision_timestamp\' => \'1384104235\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Dolore eros feugiat jugis nisl proprius quibus roto velit. Accumsan appellatio comis ille illum magna tation ut ymo. Cogo natu praemitto quadrum quae ratis saepius sudo. Aliquam brevitas dolus gilvus illum laoreet odio ratis. Diam duis iusto. Abbas causa distineo immitto neque pala. Esca os pala premo quia sit torqueo. Acsi exerci facilisis neque nutus occuro pagus. Enim exputo ludus. Aliquip ille interdico ludus nostrud tincidunt usitas verto. Adipiscing exerci ideo letalis nutus populus vereor volutpat. Damnum iaceo ratis sino virtus vulpes. Abdo augue eligo esca imputo lucidus magna si torqueo. Illum jugis jumentum mauris nostrud nutus occuro ulciscor vulpes. Dolor esse haero molior patria pecus ratis torqueo uxor virtus.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Dolore eros feugiat jugis nisl proprius quibus roto velit. Accumsan appellatio comis ille illum magna tation ut ymo. Cogo natu praemitto quadrum quae ratis saepius sudo. Aliquam brevitas dolus gilvus illum laoreet odio ratis. Diam duis iusto. Abbas causa distineo immitto neque pala. Esca os pala premo quia sit torqueo. Acsi exerci facilisis neque nutus occuro pagus. Enim exputo ludus. Aliquip ille interdico ludus nostrud tincidunt usitas verto. Adipiscing exerci ideo letalis nutus populus vereor volutpat. Damnum iaceo ratis sino virtus vulpes. Abdo augue eligo esca imputo lucidus magna si torqueo. Illum jugis jumentum mauris nostrud nutus occuro ulciscor vulpes. Dolor esse haero molior patria pecus ratis torqueo uxor virtus.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'27\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction2.jpg\',
            \'uri\' => \'public://field/image/construction2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32473\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104235\',
            \'uuid\' => \'25b4d0ab-36c5-4bb5-b103-816dc28ec5d1\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'51\',
        \'source\' => \'node/50\',
        \'alias\' => \'nostrud\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'0\',
      \'title\' => \'Importunus Ulciscor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f9489638-4296-4834-82f4-a6d2e22f1461\',
      \'nid\' => \'20\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383973937\',
      \'changed\' => \'1384104429\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a12d105f-8e40-4fd6-89d1-3ed7964f1630\',
      \'revision_timestamp\' => \'1384104429\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Augue diam esse euismod in voco. Blandit esca lenis nisl probo validus. Cui exerci importunus jus loquor persto ulciscor usitas vero vulputate. Cui erat eu jus laoreet minim pneum populus premo. Diam luctus mauris nimis oppeto qui similis vereor.\\r\\n\\r\\nDolore euismod quidne utinam vereor. Dignissim dolore esse iusto jumentum. Inhibeo iustum nostrud. Abdo accumsan conventio feugiat jugis nobis pagus sagaciter si vindico.\\r\\n\\r\\nEligo iustum os vel. Abico duis esse quidne quis. Eros imputo nunc quidem quidne sed similis.\\r\\n\\r\\nAptent comis jumentum molior vulpes. Appellatio incassum modo olim. Amet cui distineo eligo nimis pertineo probo quidne vulputate. Esse gilvus proprius.\\r\\n\\r\\nAntehabeo eros nibh. Abico at capto defui exputo feugiat macto mauris tego. Iusto nulla paratus persto plaga torqueo ut validus virtus. Aptent huic incassum iustum lenis utrum uxor. Abbas bene facilisis natu quibus ulciscor. Damnum hos luctus modo patria velit volutpat.\\r\\n\\r\\nDuis esca ex genitus haero laoreet minim pneum similis ymo. Commoveo euismod humo magna odio sagaciter scisco singularis sino validus.\\r\\n\\r\\nAdipiscing appellatio bene natu praesent refoveo. Brevitas caecus dolor importunus magna nobis odio sed tum ullamcorper. Abbas blandit mauris paulatim praesent turpis veniam ymo. Ad elit genitus hendrerit modo nulla typicus ullamcorper.\\r\\n\\r\\nAppellatio commodo cui esca euismod ibidem neque odio tum valde. Abico esse facilisi huic illum interdico premo sudo wisi. Bene iriure laoreet sudo. Sudo valetudo zelus. Conventio immitto nisl pala probo quidne virtus.\\r\\n\\r\\nAugue defui duis exerci humo interdico odio ratis turpis. Acsi aptent facilisi melior tego valetudo vicis vindico virtus ymo.\\r\\n\\r\\nEuismod facilisis humo minim obruo paratus persto quae. Duis loquor usitas. Dolor esse et genitus lobortis ratis sagaciter singularis utrum. Brevitas jus qui quia rusticus sed uxor vulpes. Blandit ex nimis odio quae virtus wisi. Dolore genitus ille iriure jumentum letalis pala singularis tincidunt venio.\\r\\n\\r\\nIustum proprius refoveo saluto sit. Aliquam metuo odio quidne. Eu humo inhibeo iriure macto nisl proprius te turpis ut. Accumsan adipiscing damnum dignissim duis esca modo quibus quidem sed. Diam distineo illum immitto qui typicus vel.\\r\\n\\r\\nAbdo decet dolore elit esca inhibeo nulla saluto suscipere te. Magna qui sit. Aliquip dolore incassum ludus modo nulla sino utinam.\\r\\n\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Augue diam esse euismod in voco. Blandit esca lenis nisl probo validus. Cui exerci importunus jus loquor persto ulciscor usitas vero vulputate. Cui erat eu jus laoreet minim pneum populus premo. Diam luctus mauris nimis oppeto qui similis vereor.</p>\\n<p>Dolore euismod quidne utinam vereor. Dignissim dolore esse iusto jumentum. Inhibeo iustum nostrud. Abdo accumsan conventio feugiat jugis nobis pagus sagaciter si vindico.</p>\\n<p>Eligo iustum os vel. Abico duis esse quidne quis. Eros imputo nunc quidem quidne sed similis.</p>\\n<p>Aptent comis jumentum molior vulpes. Appellatio incassum modo olim. Amet cui distineo eligo nimis pertineo probo quidne vulputate. Esse gilvus proprius.</p>\\n<p>Antehabeo eros nibh. Abico at capto defui exputo feugiat macto mauris tego. Iusto nulla paratus persto plaga torqueo ut validus virtus. Aptent huic incassum iustum lenis utrum uxor. Abbas bene facilisis natu quibus ulciscor. Damnum hos luctus modo patria velit volutpat.</p>\\n<p>Duis esca ex genitus haero laoreet minim pneum similis ymo. Commoveo euismod humo magna odio sagaciter scisco singularis sino validus.</p>\\n<p>Adipiscing appellatio bene natu praesent refoveo. Brevitas caecus dolor importunus magna nobis odio sed tum ullamcorper. Abbas blandit mauris paulatim praesent turpis veniam ymo. Ad elit genitus hendrerit modo nulla typicus ullamcorper.</p>\\n<p>Appellatio commodo cui esca euismod ibidem neque odio tum valde. Abico esse facilisi huic illum interdico premo sudo wisi. Bene iriure laoreet sudo. Sudo valetudo zelus. Conventio immitto nisl pala probo quidne virtus.</p>\\n<p>Augue defui duis exerci humo interdico odio ratis turpis. Acsi aptent facilisi melior tego valetudo vicis vindico virtus ymo.</p>\\n<p>Euismod facilisis humo minim obruo paratus persto quae. Duis loquor usitas. Dolor esse et genitus lobortis ratis sagaciter singularis utrum. Brevitas jus qui quia rusticus sed uxor vulpes. Blandit ex nimis odio quae virtus wisi. Dolore genitus ille iriure jumentum letalis pala singularis tincidunt venio.</p>\\n<p>Iustum proprius refoveo saluto sit. Aliquam metuo odio quidne. Eu humo inhibeo iriure macto nisl proprius te turpis ut. Accumsan adipiscing damnum dignissim duis esca modo quibus quidem sed. Diam distineo illum immitto qui typicus vel.</p>\\n<p>Abdo decet dolore elit esca inhibeo nulla saluto suscipere te. Magna qui sit. Aliquip dolore incassum ludus modo nulla sino utinam.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'35\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'219\',
            \'uid\' => \'1\',
            \'filename\' => \'construction4.jpg\',
            \'uri\' => \'public://field/image/construction4_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25019\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104429\',
            \'uuid\' => \'4c07e4f5-376e-4fd1-803d-7904d7211525\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'21\',
        \'source\' => \'node/20\',
        \'alias\' => \'importunus-ulciscor\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'43\',
      \'uid\' => \'0\',
      \'title\' => \'Luptatum Ratis Uxor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9cfafe5f-b19e-4853-9f73-2d63359fea15\',
      \'nid\' => \'43\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383710780\',
      \'changed\' => \'1384104258\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ae0d8689-e981-4a2c-9cb7-f47038837d33\',
      \'revision_timestamp\' => \'1384104258\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Damnum feugiat quae. Hos paratus refoveo tamen usitas. Abico capto consectetuer dignissim haero jugis jus nibh rusticus suscipit. Amet consectetuer decet feugiat lucidus metuo nostrud nunc sagaciter uxor. Appellatio diam exputo ibidem interdico plaga pneum sino utinam. Abluo hendrerit inhibeo jumentum mos nostrud quia te validus. Gemino nulla ullamcorper. Persto scisco ut. Capto iaceo si. Dolor eligo gemino premo roto tamen turpis utinam vel ymo. Antehabeo iustum luptatum os. Bene commodo consequat immitto olim. Minim paratus ut. Et pala praemitto veniam. Aliquip defui in laoreet nutus persto sit te uxor. Aptent capto gemino tamen. Haero iriure nobis. Letalis loquor sed tego typicus zelus. Conventio dignissim melior nimis refoveo usitas vereor. Aliquip exerci gravis hos ibidem iustum jus molior sudo velit. Aliquip brevitas eu hos usitas utinam. Camur ea nobis. Diam dolor facilisis luctus patria quidem rusticus suscipere usitas validus. Erat ex in natu nibh saluto. Esca letalis singularis veniam. Feugiat iriure premo singularis tamen typicus validus. Aptent defui diam elit hos odio quadrum refero secundum. Distineo meus minim modo os similis. Hendrerit nibh refoveo scisco vereor zelus. Humo laoreet luctus oppeto pala praesent torqueo vulpes. Esca lenis paulatim valde. Ad augue cogo incassum luctus meus nulla quis rusticus tego. Acsi ille letalis scisco. Conventio dolus jumentum molior pertineo quidne rusticus scisco ymo. Abigo abluo hos jugis quia te turpis veniam. Et ibidem ideo in lucidus nimis nutus persto sudo. Conventio ludus melior olim singularis. Ille incassum lenis scisco si. Adipiscing aptent blandit ea haero praemitto. Comis hos huic qui secundum singularis te turpis ullamcorper zelus. Comis diam distineo euismod incassum magna neo nisl plaga. Appellatio feugiat natu ratis refoveo roto suscipit vulpes. Abico consequat eum nulla. Commoveo facilisi probo. Amet blandit brevitas paulatim qui quidem saluto te vindico vulputate. Imputo in lucidus praesent sudo vicis vindico virtus. Blandit decet ille luctus pagus patria sino uxor. Bene eu hos ideo nulla quia quidne uxor veniam volutpat. Haero occuro proprius. Abdo amet antehabeo damnum luctus nunc premo quae. Facilisis genitus humo mos nutus pecus scisco sudo vel ymo. Facilisis odio suscipere te. Autem commodo consequat enim rusticus te. Abigo odio oppeto probo turpis vicis. Cogo melior turpis utrum. Brevitas facilisis gemino laoreet pecus refoveo virtus voco. Appellatio esse fere iaceo paratus patria qui refero. Cogo humo iustum letalis nimis os quadrum similis ulciscor ut. Meus molior nostrud probo quadrum tum valde. Diam esca luptatum pneum si.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Damnum feugiat quae. Hos paratus refoveo tamen usitas. Abico capto consectetuer dignissim haero jugis jus nibh rusticus suscipit. Amet consectetuer decet feugiat lucidus metuo nostrud nunc sagaciter uxor. Appellatio diam exputo ibidem interdico plaga pneum sino utinam. Abluo hendrerit inhibeo jumentum mos nostrud quia te validus. Gemino nulla ullamcorper. Persto scisco ut. Capto iaceo si. Dolor eligo gemino premo roto tamen turpis utinam vel ymo. Antehabeo iustum luptatum os. Bene commodo consequat immitto olim. Minim paratus ut. Et pala praemitto veniam. Aliquip defui in laoreet nutus persto sit te uxor. Aptent capto gemino tamen. Haero iriure nobis. Letalis loquor sed tego typicus zelus. Conventio dignissim melior nimis refoveo usitas vereor. Aliquip exerci gravis hos ibidem iustum jus molior sudo velit. Aliquip brevitas eu hos usitas utinam. Camur ea nobis. Diam dolor facilisis luctus patria quidem rusticus suscipere usitas validus. Erat ex in natu nibh saluto. Esca letalis singularis veniam. Feugiat iriure premo singularis tamen typicus validus. Aptent defui diam elit hos odio quadrum refero secundum. Distineo meus minim modo os similis. Hendrerit nibh refoveo scisco vereor zelus. Humo laoreet luctus oppeto pala praesent torqueo vulpes. Esca lenis paulatim valde. Ad augue cogo incassum luctus meus nulla quis rusticus tego. Acsi ille letalis scisco. Conventio dolus jumentum molior pertineo quidne rusticus scisco ymo. Abigo abluo hos jugis quia te turpis veniam. Et ibidem ideo in lucidus nimis nutus persto sudo. Conventio ludus melior olim singularis. Ille incassum lenis scisco si. Adipiscing aptent blandit ea haero praemitto. Comis hos huic qui secundum singularis te turpis ullamcorper zelus. Comis diam distineo euismod incassum magna neo nisl plaga. Appellatio feugiat natu ratis refoveo roto suscipit vulpes. Abico consequat eum nulla. Commoveo facilisi probo. Amet blandit brevitas paulatim qui quidem saluto te vindico vulputate. Imputo in lucidus praesent sudo vicis vindico virtus. Blandit decet ille luctus pagus patria sino uxor. Bene eu hos ideo nulla quia quidne uxor veniam volutpat. Haero occuro proprius. Abdo amet antehabeo damnum luctus nunc premo quae. Facilisis genitus humo mos nutus pecus scisco sudo vel ymo. Facilisis odio suscipere te. Autem commodo consequat enim rusticus te. Abigo odio oppeto probo turpis vicis. Cogo melior turpis utrum. Brevitas facilisis gemino laoreet pecus refoveo virtus voco. Appellatio esse fere iaceo paratus patria qui refero. Cogo humo iustum letalis nimis os quadrum similis ulciscor ut. Meus molior nostrud probo quadrum tum valde. Diam esca luptatum pneum si.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'28\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction3.jpg\',
            \'uri\' => \'public://field/image/construction3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104258\',
            \'uuid\' => \'7f043737-b551-408f-bc26-fdae68e396bf\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'44\',
        \'source\' => \'node/43\',
        \'alias\' => \'luptatum-ratis-uxor\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'0\',
      \'title\' => \'Euismod Humo Sino Venio\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9fda38a9-b366-46dd-8c6a-85643ebd21d3\',
      \'nid\' => \'29\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1383791781\',
      \'changed\' => \'1384104393\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cc88a50e-c3c2-4c94-b5cd-1b68be526718\',
      \'revision_timestamp\' => \'1384104393\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Antehabeo cui decet dolus populus sit tamen uxor. Abigo augue brevitas esca immitto nobis nutus occuro quia uxor. Erat gravis iusto saepius sudo te tego uxor. Blandit decet neque occuro paulatim plaga proprius vulpes. At conventio facilisi iaceo probo quia. Dolor importunus inhibeo nibh nulla probo quia quidne venio vulputate. Appellatio augue duis immitto nobis quidem typicus utrum vicis vulputate. At conventio defui dolore euismod ex feugiat ideo suscipit tamen. Paratus sudo voco. Augue commoveo damnum defui iusto oppeto te vel vulputate. Fere feugiat rusticus saepius tation. Ea luctus mauris olim qui sagaciter ulciscor volutpat. Feugiat gravis letalis oppeto sagaciter veniam. Facilisi in pecus ulciscor venio volutpat. Distineo dolore iusto mauris saluto ymo. Abigo abluo autem esse jus verto. Abbas defui quadrum sudo. Consectetuer gilvus nibh pecus suscipere. Blandit iustum nutus utrum. Aliquip distineo dolus enim ibidem iriure ludus premo velit. Conventio elit lobortis uxor validus. Abdo laoreet quibus typicus velit. Abluo caecus facilisis lenis neque qui sudo utrum vulputate zelus. Iusto lobortis tamen torqueo utrum. Consectetuer conventio erat eros feugiat metuo pecus velit volutpat. Ideo in jumentum jus nobis pertineo secundum. Acsi comis consectetuer diam huic importunus minim nobis validus wisi.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Antehabeo cui decet dolus populus sit tamen uxor. Abigo augue brevitas esca immitto nobis nutus occuro quia uxor. Erat gravis iusto saepius sudo te tego uxor. Blandit decet neque occuro paulatim plaga proprius vulpes. At conventio facilisi iaceo probo quia. Dolor importunus inhibeo nibh nulla probo quia quidne venio vulputate. Appellatio augue duis immitto nobis quidem typicus utrum vicis vulputate. At conventio defui dolore euismod ex feugiat ideo suscipit tamen. Paratus sudo voco. Augue commoveo damnum defui iusto oppeto te vel vulputate. Fere feugiat rusticus saepius tation. Ea luctus mauris olim qui sagaciter ulciscor volutpat. Feugiat gravis letalis oppeto sagaciter veniam. Facilisi in pecus ulciscor venio volutpat. Distineo dolore iusto mauris saluto ymo. Abigo abluo autem esse jus verto. Abbas defui quadrum sudo. Consectetuer gilvus nibh pecus suscipere. Blandit iustum nutus utrum. Aliquip distineo dolus enim ibidem iriure ludus premo velit. Conventio elit lobortis uxor validus. Abdo laoreet quibus typicus velit. Abluo caecus facilisis lenis neque qui sudo utrum vulputate zelus. Iusto lobortis tamen torqueo utrum. Consectetuer conventio erat eros feugiat metuo pecus velit volutpat. Ideo in jumentum jus nobis pertineo secundum. Acsi comis consectetuer diam huic importunus minim nobis validus wisi.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'34\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'350\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'construction3.jpg\',
            \'uri\' => \'public://field/image/construction3_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23199\',
            \'status\' => \'1\',
            \'timestamp\' => \'1384104393\',
            \'uuid\' => \'61c1b5e8-dc90-4b98-8324-ea2b6618963b\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'last_comment_timestamp\' => \'1384103189\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'30\',
        \'source\' => \'node/29\',
        \'alias\' => \'euismod-humo-sino-venio\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
