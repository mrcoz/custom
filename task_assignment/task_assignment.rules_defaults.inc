<?php
/**
 * @file
 * task_assignment.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function task_assignment_default_rules_configuration() {
  $items = array();
  $items['rules_task_assignment_email_notification'] = entity_import('rules_config', '{ "rules_task_assignment_email_notification" : {
      "LABEL" : "Task Assignment Email Notification",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "task" : "task" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-assignment:mail" ],
            "subject" : "New Task Assignment Created",
            "message" : "Please Review this new task assignment\\r\\n\\r\\n[node:url]",
            "from" : "Big Brother"
          }
        }
      ]
    }
  }');
  return $items;
}
