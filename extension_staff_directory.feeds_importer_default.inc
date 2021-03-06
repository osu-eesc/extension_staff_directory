<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function extension_staff_directory_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'faculty_staff_import';
  $feeds_importer->config = array(
    'name' => 'faculty_staff_import',
    'description' => 'Pulls in people and location data for a particular group',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'Titles',
          'xpathparser:2' => 'tel',
          'xpathparser:3' => 'GUID',
          'xpathparser:7' => 'org_nid',
          'xpathparser:8' => 'FirstName',
          'xpathparser:9' => 'LastName',
          'xpathparser:10' => 'Photo',
          'xpathparser:11' => 'Employer',
          'xpathparser:12' => 'AdminLeader',
          'xpathparser:13' => 'Sticky',
          'xpathparser:14' => 'Status',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
        ),
        'context' => '//node/employee',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'staff_directory',
        'input_format' => '2',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_staff_titles',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_staff_phone',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_org_nid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_staff_firstname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_staff_lastname',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_staff_photo_url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_staff_employer',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_staff_leader',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_staff_sticky',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_staff_status',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['faculty_staff_import'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'group_location_import';
  $feeds_importer->config = array(
    'name' => 'group_location_import',
    'description' => 'Pulls in location data for a specified  group',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'GUID',
          'xpathparser:1' => 'org_nid',
          'xpathparser:2' => 'GeoLocation',
          'xpathparser:3' => 'City',
          'xpathparser:4' => 'State',
          'xpathparser:5' => 'ZIPCode',
          'xpathparser:6' => 'tel',
          'xpathparser:7' => 'fax',
          'xpathparser:9' => 'StreetAddress',
          'xpathparser:10' => 'GroupName',
          'xpathparser:11' => 'Businesshours',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
        ),
        'context' => '//node/group',
        'exp' => array(
          'errors' => 1,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'group_location',
        'input_format' => '3',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_org_nid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_geo_location',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_group_location_city',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_group_location_state',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_group_location_zipcode',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_group_location_tel',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_group_location_fax',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_group_location_street',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_group_location_hours',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '43200',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['group_location_import'] = $feeds_importer;

  return $export;
}
