<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function extension_staff_directory_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_deprecated_items
  $groups['staff_directory-group_deprecated_items'] = array(
    'group_type' => 'standard',
    'type_name' => 'staff_directory',
    'group_name' => 'group_deprecated_items',
    'label' => 'Deprecated items',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_org_nid',
      '1' => 'field_staff_name',
      '2' => 'field_staff_photo',
      '3' => 'field_staff_email',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Deprecated items');

  return $groups;
}
