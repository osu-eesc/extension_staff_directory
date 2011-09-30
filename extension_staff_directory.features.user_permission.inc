<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function extension_staff_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: create staff_directory content
  $permissions['create staff_directory content'] = array(
    'name' => 'create staff_directory content',
    'roles' => array(),
  );

  // Exported permission: delete any staff_directory content
  $permissions['delete any staff_directory content'] = array(
    'name' => 'delete any staff_directory content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own staff_directory content
  $permissions['delete own staff_directory content'] = array(
    'name' => 'delete own staff_directory content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any staff_directory content
  $permissions['edit any staff_directory content'] = array(
    'name' => 'edit any staff_directory content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own staff_directory content
  $permissions['edit own staff_directory content'] = array(
    'name' => 'edit own staff_directory content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
