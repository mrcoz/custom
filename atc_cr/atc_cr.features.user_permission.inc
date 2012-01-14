<?php
/**
 * @file
 * atc_cr.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atc_cr_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access rules debug
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access rules link accountreview_approve
  $permissions['access rules link accountreview_approve'] = array(
    'name' => 'access rules link accountreview_approve',
    'roles' => array(
      0 => 'GR - Accounting',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link accountreview_reject
  $permissions['access rules link accountreview_reject'] = array(
    'name' => 'access rules link accountreview_reject',
    'roles' => array(
      0 => 'GR - Accounting',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link draft_facilitator
  $permissions['access rules link draft_facilitator'] = array(
    'name' => 'access rules link draft_facilitator',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link engreview_approve
  $permissions['access rules link engreview_approve'] = array(
    'name' => 'access rules link engreview_approve',
    'roles' => array(
      0 => 'GR - Engineering',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link engreview_reject
  $permissions['access rules link engreview_reject'] = array(
    'name' => 'access rules link engreview_reject',
    'roles' => array(
      0 => 'GR - Engineering',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link facilitator_draft
  $permissions['access rules link facilitator_draft'] = array(
    'name' => 'access rules link facilitator_draft',
    'roles' => array(
      0 => 'Facilitor',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link facilitator_groupreview
  $permissions['access rules link facilitator_groupreview'] = array(
    'name' => 'access rules link facilitator_groupreview',
    'roles' => array(
      0 => 'Facilitor',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link groupreview_facilitator
  $permissions['access rules link groupreview_facilitator'] = array(
    'name' => 'access rules link groupreview_facilitator',
    'roles' => array(
      0 => 'GR - Accounting',
      1 => 'GR - Engineering',
      2 => 'GR - IT',
      3 => 'GR - Manufacturing',
      4 => 'GR - Purchasing',
      5 => 'GR - Quality',
      6 => 'GR - Sales',
      7 => 'GR - Service',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link itreview_approve
  $permissions['access rules link itreview_approve'] = array(
    'name' => 'access rules link itreview_approve',
    'roles' => array(
      0 => 'GR - IT',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link itreview_reject
  $permissions['access rules link itreview_reject'] = array(
    'name' => 'access rules link itreview_reject',
    'roles' => array(
      0 => 'GR - IT',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link manreview_approve
  $permissions['access rules link manreview_approve'] = array(
    'name' => 'access rules link manreview_approve',
    'roles' => array(
      0 => 'GR - Manufacturing',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link manreview_reject
  $permissions['access rules link manreview_reject'] = array(
    'name' => 'access rules link manreview_reject',
    'roles' => array(
      0 => 'GR - Manufacturing',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link purreview_approve
  $permissions['access rules link purreview_approve'] = array(
    'name' => 'access rules link purreview_approve',
    'roles' => array(
      0 => 'GR - Purchasing',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link purreview_reject
  $permissions['access rules link purreview_reject'] = array(
    'name' => 'access rules link purreview_reject',
    'roles' => array(
      0 => 'GR - Purchasing',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link qualreview_approve
  $permissions['access rules link qualreview_approve'] = array(
    'name' => 'access rules link qualreview_approve',
    'roles' => array(
      0 => 'GR - Quality',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link qualreview_reject
  $permissions['access rules link qualreview_reject'] = array(
    'name' => 'access rules link qualreview_reject',
    'roles' => array(
      0 => 'GR - Quality',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link salesrevew_approve
  $permissions['access rules link salesrevew_approve'] = array(
    'name' => 'access rules link salesrevew_approve',
    'roles' => array(
      0 => 'GR - Sales',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link salesrevew_reject
  $permissions['access rules link salesrevew_reject'] = array(
    'name' => 'access rules link salesrevew_reject',
    'roles' => array(
      0 => 'GR - Sales',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link warreview_approve
  $permissions['access rules link warreview_approve'] = array(
    'name' => 'access rules link warreview_approve',
    'roles' => array(
      0 => 'GR - Service',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link warreview_reject
  $permissions['access rules link warreview_reject'] = array(
    'name' => 'access rules link warreview_reject',
    'roles' => array(
      0 => 'GR - Service',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access workbench access by role
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'GR - Accounting',
      2 => 'GR - Engineering',
      3 => 'GR - IT',
      4 => 'GR - Manufacturing',
      5 => 'GR - Purchasing',
      6 => 'GR - Quality',
      7 => 'GR - Sales',
      8 => 'GR - Service',
      9 => 'administrator',
      10 => 'authenticated user',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer rules links
  $permissions['administer rules links'] = array(
    'name' => 'administer rules links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: bypass rules access
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: create atc_cr content
  $permissions['create atc_cr content'] = array(
    'name' => 'create atc_cr content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'GR - Engineering',
      2 => 'Initiator',
      3 => 'administrator',
      4 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any atc_cr content
  $permissions['delete any atc_cr content'] = array(
    'name' => 'delete any atc_cr content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own atc_cr content
  $permissions['delete own atc_cr content'] = array(
    'name' => 'delete own atc_cr content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'GR - Engineering',
      2 => 'Initiator',
      3 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any atc_cr content
  $permissions['edit any atc_cr content'] = array(
    'name' => 'edit any atc_cr content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own atc_cr content
  $permissions['edit own atc_cr content'] = array(
    'name' => 'edit own atc_cr content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'GR - Engineering',
      2 => 'Initiator',
      3 => 'administrator',
      4 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Facilitor',
      1 => 'GR - Accounting',
      2 => 'GR - Engineering',
      3 => 'GR - IT',
      4 => 'GR - Manufacturing',
      5 => 'GR - Purchasing',
      6 => 'GR - Quality',
      7 => 'GR - Sales',
      8 => 'GR - Service',
      9 => 'Initiator',
      10 => 'administrator',
      11 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
