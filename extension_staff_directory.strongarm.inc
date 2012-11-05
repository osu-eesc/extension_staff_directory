<?php

/**
 * Implementation of hook_strongarm().
 */
function extension_staff_directory_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_staff_directory';
  $strongarm->value = '[field_staff_firstname-raw] [field_staff_lastname-raw]';
  $export['ant_pattern_staff_directory'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_location';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '8',
    'author' => '9',
    'options' => '10',
    'menu' => '6',
    'book' => '7',
    'path' => '11',
    'attachments' => '13',
    'path_redirect' => '12',
  );
  $export['content_extra_weights_group_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_staff_directory';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '10',
    'author' => '9',
    'options' => '8',
    'menu' => '7',
    'book' => '11',
    'path' => '14',
    'attachments' => '12',
    'path_redirect' => '13',
  );
  $export['content_extra_weights_staff_directory'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_staff_directory';
  $strongarm->value = '0';
  $export['language_content_type_staff_directory'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group_location';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_group_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_staff_directory';
  $strongarm->value = array();
  $export['node_options_staff_directory'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_layers_google_api';
  $strongarm->value = 'ABQIAAAAIb7ec2IktFVXT4wwpfF3ShRPlzMRScof2qFVYTJCg3FcHaADahTWXnV9n9EJAlub7GGjtS1aDaao8w';
  $export['openlayers_layers_google_api'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_group_location';
  $strongarm->value = '1';
  $export['upload_group_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_staff_directory';
  $strongarm->value = '1';
  $export['upload_staff_directory'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_staff_directory';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'book',
    2 => 'author',
    3 => 'revision_information',
    4 => 'options',
    5 => 'path',
    6 => 'attachments',
  );
  $export['vertical_tabs_fieldsets_staff_directory'] = $strongarm;

  return $export;
}
