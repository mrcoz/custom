<?php
/**
 * @file
 * atc_cr.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function atc_cr_user_default_roles() {
  $roles = array();

  // Exported role: Facilitor
  $roles['Facilitor'] = array(
    'name' => 'Facilitor',
    'weight' => '4',
  );

  // Exported role: GR - Accounting
  $roles['GR - Accounting'] = array(
    'name' => 'GR - Accounting',
    'weight' => '10',
  );

  // Exported role: GR - Engineering
  $roles['GR - Engineering'] = array(
    'name' => 'GR - Engineering',
    'weight' => '5',
  );

  // Exported role: GR - IT
  $roles['GR - IT'] = array(
    'name' => 'GR - IT',
    'weight' => '9',
  );

  // Exported role: GR - Manufacturing
  $roles['GR - Manufacturing'] = array(
    'name' => 'GR - Manufacturing',
    'weight' => '7',
  );

  // Exported role: GR - Purchasing
  $roles['GR - Purchasing'] = array(
    'name' => 'GR - Purchasing',
    'weight' => '6',
  );

  // Exported role: GR - Quality
  $roles['GR - Quality'] = array(
    'name' => 'GR - Quality',
    'weight' => '12',
  );

  // Exported role: GR - Sales
  $roles['GR - Sales'] = array(
    'name' => 'GR - Sales',
    'weight' => '8',
  );

  // Exported role: GR - Service
  $roles['GR - Service'] = array(
    'name' => 'GR - Service',
    'weight' => '11',
  );

  return $roles;
}
