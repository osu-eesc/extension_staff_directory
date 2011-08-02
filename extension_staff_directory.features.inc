<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function extension_staff_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function extension_staff_directory_node_info() {
  $items = array(
    'group_location' => array(
      'name' => t('Group Location'),
      'module' => 'features',
      'description' => t('Used for importing xml feed from extension.oregonstate.edu find people database'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'staff_directory' => array(
      'name' => t('Faculty and Staff Directory'),
      'module' => 'features',
      'description' => t('Used for importing xml feed from extension.oregonstate.edu find people database'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function extension_staff_directory_views_api() {
  return array(
    'api' => '2',
  );
}
