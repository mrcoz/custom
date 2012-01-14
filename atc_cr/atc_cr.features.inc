<?php
/**
 * @file
 * atc_cr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atc_cr_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function atc_cr_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function atc_cr_node_info() {
  $items = array(
    'atc_cr' => array(
      'name' => t('Change Request'),
      'base' => 'node_content',
      'description' => t('Aluminum Trailer Company - Change Request and Change Notice Content Type'),
      'has_title' => '1',
      'title_label' => t('Change Notice Number'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function atc_cr_default_rules_link() {
  $items = array();
  $items['accountreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Accounting Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "accountreview_approve",
    "label" : "AccountReview-\\u003eApprove",
    "path" : "accountreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['accountreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Accounting Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "accountreview_reject",
    "label" : "AccountReview-\\u003eReject",
    "path" : "accountreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['draft_facilitator'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Facilitator Review",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "draft_facilitator",
    "label" : "Draft-\\u003eFacilitator",
    "path" : "draft_facilitator",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['engreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Engineering Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "engreview_approve",
    "label" : "EngReview-\\u003eApprove",
    "path" : "engreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['engreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Engineering Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "engreview_reject",
    "label" : "EngReview-\\u003eReject",
    "path" : "engreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['facilitator_draft'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Send Back to Draft",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "facilitator_draft",
    "label" : "Facilitator-\\u003eDraft",
    "path" : "facilitator_draft",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['facilitator_groupreview'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Send to Group Review",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "facilitator_groupreview",
    "label" : "Facilitator-\\u003eGroupReview",
    "path" : "facilitator_groupreview",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['groupreview_facilitator'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Send Back to Facilitator",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "groupreview_facilitator",
    "label" : "GroupReview-\\u003eFacilitator",
    "path" : "groupreview_facilitator",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['itreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "IT Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "itreview_approve",
    "label" : "ITReview-\\u003eApprove",
    "path" : "itreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['itreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "IT Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "itreview_reject",
    "label" : "ITReview-\\u003eReject",
    "path" : "itreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['manreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Manufacturing Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "manreview_approve",
    "label" : "ManReview-\\u003eApprove",
    "path" : "manreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['manreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Manufacturing Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "manreview_reject",
    "label" : "ManReview-\\u003eReject",
    "path" : "manreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['purreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Purchasing Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "purreview_approve",
    "label" : "PurReview-\\u003eApprove",
    "path" : "purreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['purreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Purchasing Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "purreview_reject",
    "label" : "PurReview-\\u003eReject",
    "path" : "purreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['qualreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Quality Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "qualreview_approve",
    "label" : "QualReview-\\u003eApprove",
    "path" : "qualreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['qualreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Quality Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "qualreview_reject",
    "label" : "QualReview-\\u003eReject",
    "path" : "qualreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['salesrevew_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Sales Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "salesrevew_approve",
    "label" : "SalesRevew-\\u003eApprove",
    "path" : "salesrevew_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['salesrevew_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Sales Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "salesrevew_reject",
    "label" : "SalesRevew-\\u003eReject",
    "path" : "salesrevew_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['warreview_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Warranty Approval",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "warreview_approve",
    "label" : "WarReview-\\u003eApprove",
    "path" : "warreview_approve",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['warreview_reject'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Warranty Reject",
      "link_type" : "token",
      "bundles" : { "atc_cr" : "atc_cr" },
      "entity_link" : 1
    },
    "name" : "warreview_reject",
    "label" : "WarReview-\\u003eReject",
    "path" : "warreview_reject",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
