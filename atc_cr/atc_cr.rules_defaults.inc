<?php
/**
 * @file
 * atc_cr.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function atc_cr_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_accountreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_accountreview_approve" : {
      "LABEL" : "Rules link: AccountReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-aad" ] } }
      ]
    }
  }');
  $items['rules_link_condition_accountreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_accountreview_reject" : {
      "LABEL" : "Rules link: AccountReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-acc" ] } }
      ]
    }
  }');
  $items['rules_link_condition_draft_facilitator'] = entity_import('rules_config', '{ "rules_link_condition_draft_facilitator" : {
      "LABEL" : "Rules link: Draft-\\u003eFacilitator condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Draft" } }
      ]
    }
  }');
  $items['rules_link_condition_engreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_engreview_approve" : {
      "LABEL" : "Rules link: EngReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-eng" ] } }
      ]
    }
  }');
  $items['rules_link_condition_engreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_engreview_reject" : {
      "LABEL" : "Rules link: EngReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-eng" ] } }
      ]
    }
  }');
  $items['rules_link_condition_facilitator_draft'] = entity_import('rules_config', '{ "rules_link_condition_facilitator_draft" : {
      "LABEL" : "Rules link: Facilitator-\\u003eDraft condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } }
      ]
    }
  }');
  $items['rules_link_condition_facilitator_groupreview'] = entity_import('rules_config', '{ "rules_link_condition_facilitator_groupreview" : {
      "LABEL" : "Rules link: Facilitator-\\u003eGroupReview condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } }
      ]
    }
  }');
  $items['rules_link_condition_groupreview_facilitator'] = entity_import('rules_config', '{ "rules_link_condition_groupreview_facilitator" : {
      "LABEL" : "Rules link: GroupReview-\\u003eFacilitator condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
      ]
    }
  }');
  $items['rules_link_condition_itreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_itreview_approve" : {
      "LABEL" : "Rules link: ITReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-itad" ] } }
      ]
    }
  }');
  $items['rules_link_condition_itreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_itreview_reject" : {
      "LABEL" : "Rules link: ITReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-it" ] } }
      ]
    }
  }');
  $items['rules_link_condition_manreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_manreview_approve" : {
      "LABEL" : "Rules link: ManReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-man" ] } }
      ]
    }
  }');
  $items['rules_link_condition_manreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_manreview_reject" : {
      "LABEL" : "Rules link: ManReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-man" ] } }
      ]
    }
  }');
  $items['rules_link_condition_purreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_purreview_approve" : {
      "LABEL" : "Rules link: PurReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-pur" ] } }
      ]
    }
  }');
  $items['rules_link_condition_purreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_purreview_reject" : {
      "LABEL" : "Rules link: PurReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-pur" ] } }
      ]
    }
  }');
  $items['rules_link_condition_qualreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_qualreview_approve" : {
      "LABEL" : "Rules link: QualReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-qad" ] } }
      ]
    }
  }');
  $items['rules_link_condition_qualreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_qualreview_reject" : {
      "LABEL" : "Rules link: QualReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-qual" ] } }
      ]
    }
  }');
  $items['rules_link_condition_salesrevew_approve'] = entity_import('rules_config', '{ "rules_link_condition_salesrevew_approve" : {
      "LABEL" : "Rules link: SalesRevew-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-sad" ] } }
      ]
    }
  }');
  $items['rules_link_condition_salesrevew_reject'] = entity_import('rules_config', '{ "rules_link_condition_salesrevew_reject" : {
      "LABEL" : "Rules link: SalesRevew-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-sal" ] } }
      ]
    }
  }');
  $items['rules_link_condition_warreview_approve'] = entity_import('rules_config', '{ "rules_link_condition_warreview_approve" : {
      "LABEL" : "Rules link: WarReview-\\u003eApprove condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-wad" ] } }
      ]
    }
  }');
  $items['rules_link_condition_warreview_reject'] = entity_import('rules_config', '{ "rules_link_condition_warreview_reject" : {
      "LABEL" : "Rules link: WarReview-\\u003eReject condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "data_is_empty" : { "data" : [ "node:field-gr-war" ] } }
      ]
    }
  }');
  $items['rules_link_set_accountreview_approve'] = entity_import('rules_config', '{ "rules_link_set_accountreview_approve" : {
      "LABEL" : "Rules link: AccountReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-gr-acc" ], "value" : "[site:current-user]" } },
              { "data_set" : { "data" : [ "node:field-gr-aad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "AccountReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_accountreview_reject'] = entity_import('rules_config', '{ "rules_link_set_accountreview_reject" : {
      "LABEL" : "Rules link: AccountReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_draft_facilitator'] = entity_import('rules_config', '{ "rules_link_set_draft_facilitator" : {
      "LABEL" : "Rules link: Draft-\\u003eFacilitator rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "workbench_access" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } },
              { "workbench_access_assign_access_section" : { "node" : [ "node" ], "access_section" : "5" } },
              { "mail_to_users_of_role" : {
                  "roles" : { "value" : { "4" : "4" } },
                  "subject" : "A New Change Request has been submitted: [node:title]",
                  "message" : "A new change request has been submitted.\\r\\n\\r\\nplease log in and process at your earliest opportunity.\\r\\n\\r\\n[node:url]",
                  "from" : "Big Brother"
                }
              }
            ],
            "LABEL" : "Ready for Review"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_engreview_approve'] = entity_import('rules_config', '{ "rules_link_set_engreview_approve" : {
      "LABEL" : "Rules link: EngReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "node:field-gr-eng" ],
                  "value" : [ "site:current-user:name" ]
                }
              },
              { "data_set" : { "data" : [ "node:field-gr-ead" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "EngReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_engreview_reject'] = entity_import('rules_config', '{ "rules_link_set_engreview_reject" : {
      "LABEL" : "Rules link: EngReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Rejected" } },
              { "data_set" : {
                  "data" : [ "node:field-gr-eng" ],
                  "value" : [ "site:current-user:name" ]
                }
              },
              { "data_set" : {
                  "data" : [ "node:field-gr-ead" ],
                  "value" : "Rejected [site:current-date]"
                }
              }
            ],
            "LABEL" : "EngReview-\\u003eReject"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_facilitator_draft'] = entity_import('rules_config', '{ "rules_link_set_facilitator_draft" : {
      "LABEL" : "Rules link: Facilitator-\\u003eDraft rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "workbench_access" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Draft" } },
              { "workbench_access_assign_access_section" : { "node" : [ "node" ], "access_section" : "11" } }
            ],
            "LABEL" : "Facilitator-\\u003eDraft"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_facilitator_groupreview'] = entity_import('rules_config', '{ "rules_link_set_facilitator_groupreview" : {
      "LABEL" : "Rules link: Facilitator-\\u003eGroupReview rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "LABEL" : "Facilitator-\\u003eGroupReview"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_groupreview_facilitator'] = entity_import('rules_config', '{ "rules_link_set_groupreview_facilitator" : {
      "LABEL" : "Rules link: GroupReview-\\u003eFacilitator rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Facilitator" } },
              { "data_set" : { "data" : [ "node:field-gr-ead" ] } },
              { "data_set" : { "data" : [ "node:field-gr-eng" ] } },
              { "data_set" : { "data" : [ "node:field-gr-pur" ] } },
              { "data_set" : { "data" : [ "node:field-gr-pad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-man" ] } },
              { "data_set" : { "data" : [ "node:field-gr-mad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-sal" ] } },
              { "data_set" : { "data" : [ "node:field-gr-sad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-war" ] } },
              { "data_set" : { "data" : [ "node:field-gr-wad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-qual" ] } },
              { "data_set" : { "data" : [ "node:field-gr-qad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-it" ] } },
              { "data_set" : { "data" : [ "node:field-gr-itad" ] } },
              { "data_set" : { "data" : [ "node:field-gr-acc" ] } },
              { "data_set" : { "data" : [ "node:field-gr-aad" ] } }
            ],
            "LABEL" : "GroupReview-\\u003eFacilitator"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_itreview_approve'] = entity_import('rules_config', '{ "rules_link_set_itreview_approve" : {
      "LABEL" : "Rules link: ITReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-gr-it" ], "value" : "[site:current-user]" } },
              { "data_set" : { "data" : [ "node:field-gr-itad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "ITReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_itreview_reject'] = entity_import('rules_config', '{ "rules_link_set_itreview_reject" : {
      "LABEL" : "Rules link: ITReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_manreview_approve'] = entity_import('rules_config', '{ "rules_link_set_manreview_approve" : {
      "LABEL" : "Rules link: ManReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "node:field-gr-man" ],
                  "value" : [ "site:current-user:name" ]
                }
              },
              { "data_set" : { "data" : [ "node:field-gr-mad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "ManReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_manreview_reject'] = entity_import('rules_config', '{ "rules_link_set_manreview_reject" : {
      "LABEL" : "Rules link: ManReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_purreview_approve'] = entity_import('rules_config', '{ "rules_link_set_purreview_approve" : {
      "LABEL" : "Rules link: PurReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "node:field-gr-pur" ],
                  "value" : [ "site:current-user:name" ]
                }
              },
              { "data_set" : { "data" : [ "node:field-gr-pad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "PurReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_purreview_reject'] = entity_import('rules_config', '{ "rules_link_set_purreview_reject" : {
      "LABEL" : "Rules link: PurReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_qualreview_approve'] = entity_import('rules_config', '{ "rules_link_set_qualreview_approve" : {
      "LABEL" : "Rules link: QualReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-gr-qual" ], "value" : "[site:current-user]" } },
              { "data_set" : { "data" : [ "node:field-gr-qad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "QualReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_qualreview_reject'] = entity_import('rules_config', '{ "rules_link_set_qualreview_reject" : {
      "LABEL" : "Rules link: QualReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_salesrevew_approve'] = entity_import('rules_config', '{ "rules_link_set_salesrevew_approve" : {
      "LABEL" : "Rules link: SalesRevew-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-gr-sal" ], "value" : "[site:current-user]" } },
              { "data_set" : { "data" : [ "node:field-gr-sad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "SalesRevew-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_salesrevew_reject'] = entity_import('rules_config', '{ "rules_link_set_salesrevew_reject" : {
      "LABEL" : "Rules link: SalesRevew-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_warreview_approve'] = entity_import('rules_config', '{ "rules_link_set_warreview_approve" : {
      "LABEL" : "Rules link: WarReview-\\u003eApprove rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
              { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-gr-war" ], "value" : "[site:current-user]" } },
              { "data_set" : { "data" : [ "node:field-gr-wad" ], "value" : "[site:current-date]" } }
            ],
            "LABEL" : "WarReview-\\u003eApprove"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warreview_reject'] = entity_import('rules_config', '{ "rules_link_set_warreview_reject" : {
      "LABEL" : "Rules link: WarReview-\\u003eReject rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_publish_and_approve_change_request'] = entity_import('rules_config', '{ "rules_publish_and_approve_change_request" : {
      "LABEL" : "Publish and Approve Change Request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workbench_access" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Review - Group" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-eng" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-pur" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-man" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-sal" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-war" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-qual" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-it" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-gr-acc" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-atc-lcs" ], "value" : "Approved" } },
        { "node_publish" : { "node" : [ "node" ] } },
        { "data_set" : { "data" : [ "node:comment" ] } },
        { "workbench_access_assign_access_section" : { "node" : [ "node" ], "access_section" : "4" } }
      ]
    }
  }');
  $items['rules_publish_and_reject_change_request'] = entity_import('rules_config', '{ "rules_publish_and_reject_change_request" : {
      "LABEL" : "Publish and Reject Change Request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workbench_access" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "atc_cr" : "atc_cr" } } } },
        { "data_is" : { "data" : [ "node:field-atc-lcs" ], "value" : "Rejected" } }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "data_set" : { "data" : [ "node:comment" ] } },
        { "workbench_access_assign_access_section" : { "node" : [ "node" ], "access_section" : "4" } }
      ]
    }
  }');
  return $items;
}
