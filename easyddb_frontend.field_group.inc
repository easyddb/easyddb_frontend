<?php
/**
 * @file
 * easyddb_frontend.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function easyddb_frontend_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|ting_object|ting_object|ding_item_viewer_big';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'ding_item_viewer_big';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '1',
    'children' => array(
      0 => 'ding_entity_buttons',
      1 => 'ting_title',
      2 => 'ting_abstract',
      3 => 'ting_author',
      4 => 'ting_subjects',
      5 => 'more_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Data',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_data|ting_object|ting_object|ding_item_viewer_big'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ting_left_col_collection|ting_object|ting_object|objects_in_popup';
  $field_group->group_name = 'group_ting_left_col_collection';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'objects_in_popup';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '1',
    'children' => array(
      0 => 'ting_cover',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'classes' => 'ting-object-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ting_left_col_collection|ting_object|ting_object|objects_in_popup'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ting_right_col_collection|ting_object|ting_object|objects_in_popup';
  $field_group->group_name = 'group_ting_right_col_collection';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'objects_in_popup';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '2',
    'children' => array(
      0 => 'ding_entity_buttons',
      1 => 'ting_title',
      2 => 'ting_type',
      3 => 'ting_author',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'classes' => 'ting-object-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ting_right_col_collection|ting_object|ting_object|objects_in_popup'] = $field_group;

  return $export;
}
