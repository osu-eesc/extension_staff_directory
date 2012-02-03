<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function extension_staff_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group_location content
  $permissions['create group_location content'] = array(
    'name' => 'create group_location content',
    'roles' => array(),
  );

  // Exported permission: create staff_directory content
  $permissions['create staff_directory content'] = array(
    'name' => 'create staff_directory content',
    'roles' => array(),
  );

  // Exported permission: delete any group_location content
  $permissions['delete any group_location content'] = array(
    'name' => 'delete any group_location content',
    'roles' => array(),
  );

  // Exported permission: delete any staff_directory content
  $permissions['delete any staff_directory content'] = array(
    'name' => 'delete any staff_directory content',
    'roles' => array(),
  );

  // Exported permission: delete own group_location content
  $permissions['delete own group_location content'] = array(
    'name' => 'delete own group_location content',
    'roles' => array(),
  );

  // Exported permission: delete own staff_directory content
  $permissions['delete own staff_directory content'] = array(
    'name' => 'delete own staff_directory content',
    'roles' => array(),
  );

  // Exported permission: edit any group_location content
  $permissions['edit any group_location content'] = array(
    'name' => 'edit any group_location content',
    'roles' => array(),
  );

  // Exported permission: edit any staff_directory content
  $permissions['edit any staff_directory content'] = array(
    'name' => 'edit any staff_directory content',
    'roles' => array(),
  );

  // Exported permission: edit own group_location content
  $permissions['edit own group_location content'] = array(
    'name' => 'edit own group_location content',
    'roles' => array(),
  );

  // Exported permission: edit own staff_directory content
  $permissions['edit own staff_directory content'] = array(
    'name' => 'edit own staff_directory content',
    'roles' => array(),
  );

  return $permissions;
}
