<?php
/**
 * @file
 * easyddb_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyddb_frontend_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function easyddb_frontend_field_group_info_alter(&$data) {
  if (isset($data['group_ting_right_col_search|ting_object|ting_object|search_result'])) {
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['0'] = 'ting_title'; /* WAS: 'ting_title' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['1'] = 'ting_author'; /* WAS: 'ting_series' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['2'] = 'ting_abstract'; /* WAS: 'ting_abstract' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['3'] = 'ting_series'; /* WAS: 'ting_author' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['4'] = 'ting_details_classification'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function easyddb_frontend_field_default_field_instances_alter(&$data) {
  if (isset($data['ting_object-ting_object-ding_entity_buttons'])) {
    $data['ting_object-ting_object-ding_entity_buttons']['display']['ding_item_viewer_big'] = array(
      'label' => 'hidden',
      'module' => 'ding_entity',
      'settings' => array(),
      'type' => 'ding_entity_buttons_ajax',
      'weight' => 10,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ding_entity_buttons']['display']['objects_in_popup'] = array(
      'label' => 'hidden',
      'module' => 'ding_entity',
      'settings' => array(),
      'type' => 'ding_entity_buttons_ajax',
      'weight' => 3,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ding_entity_buttons']['display']['search_result']['label'] = 'hidden'; /* WAS: 'above' */
    $data['ting_object-ting_object-ding_entity_buttons']['display']['search_result']['module'] = 'ding_entity'; /* WAS: '' */
    $data['ting_object-ting_object-ding_entity_buttons']['display']['search_result']['type'] = 'ding_entity_buttons_ajax'; /* WAS: 'hidden' */
    $data['ting_object-ting_object-ding_entity_buttons']['display']['search_result']['weight'] = 99; /* WAS: 37 */
  }
  if (isset($data['ting_object-ting_object-ting_abstract'])) {
    $data['ting_object-ting_object-ting_abstract']['display']['ding_item_viewer_big'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(
        'trim_length' => 600,
      ),
      'type' => 'ting_abstract_ding_item_viewer',
      'weight' => 7,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_author'])) {
    $data['ting_object-ting_object-ting_author']['display']['ding_item_viewer_big'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(),
      'type' => 'ting_author_ding_item_viewer',
      'weight' => 8,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_author']['display']['ding_item_viewer_small'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(),
      'type' => 'ting_author_ding_item_viewer',
      'weight' => 2,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_author']['display']['objects_in_popup'] = array(
      'label' => 'hidden',
      'module' => 'ting',
      'settings' => array(),
      'type' => 'ting_author_default',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_cover'])) {
    $data['ting_object-ting_object-ting_cover']['display']['ding_item_viewer_big'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(
        'image_style' => 'ding_item_viewer_image_big',
      ),
      'type' => 'ting_cover_ding_item_viewer',
      'weight' => 0,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_cover']['display']['ding_item_viewer_small'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(
        'image_style' => 'ding_item_viewer_image_small',
      ),
      'type' => 'ting_cover_ding_item_viewer',
      'weight' => 0,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_cover']['display']['objects_in_popup'] = array(
      'label' => 'hidden',
      'module' => 'ting_covers_plus',
      'settings' => array(
        'image_style' => 'medium',
      ),
      'type' => 'ting_cover_default',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['display']['ding_item_viewer_big'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 29,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['ding_item_viewer_small'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 31,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['search_result'] = array(
      'label' => 'hidden',
      'module' => 'ting_material_details',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => 20,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_series'])) {
    $data['ting_object-ting_object-ting_series']['display']['ding_item_viewer_big'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_subjects'])) {
    $data['ting_object-ting_object-ting_subjects']['display']['ding_item_viewer_big'] = array(
      'label' => 'inline',
      'module' => 'ding_item_viewer',
      'settings' => array(),
      'type' => 'ting_subjects_ding_item_viewer',
      'weight' => 9,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_title'])) {
    $data['ting_object-ting_object-ting_title']['display']['ding_item_viewer_big'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(
        'link_type' => 'collection',
      ),
      'type' => 'ting_title_ding_item_viewer',
      'weight' => 6,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_title']['display']['ding_item_viewer_small'] = array(
      'label' => 'hidden',
      'module' => 'ding_item_viewer',
      'settings' => array(
        'link_type' => 'none',
      ),
      'type' => 'ting_title_ding_item_viewer',
      'weight' => 1,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_title']['display']['objects_in_popup'] = array(
      'label' => 'hidden',
      'module' => 'ting',
      'settings' => array(
        'link_type' => 'none',
        'prefix_type' => 'no',
      ),
      'type' => 'ting_title_default',
      'weight' => 1,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function easyddb_frontend_default_page_manager_pages_alter(&$data) {
  if (isset($data['user_bookmarks'])) {
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-1'] = (object) array(
          'pid' => 'new-1',
          'panel' => 'left_sidebar',
          'type' => 'user_menu',
          'subtype' => 'user_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_entity_id:user_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-2'] = (object) array(
          'pid' => 'new-2',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_print_button-print_button',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-3'] = (object) array(
          'pid' => 'new-3',
          'panel' => 'main_content',
          'type' => 'bookmarks',
          'subtype' => 'bookmarks',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-4'] = (object) array(
          'pid' => 'new-4',
          'panel' => 'main_content',
          'type' => 'import',
          'subtype' => 'import',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->panels['left_sidebar']['0'] = 'new-1'; /* WAS: 'new-73b329e8-9053-4a19-8207-566065ab789a' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->panels['main_content']['0'] = 'new-2'; /* WAS: 'new-3d86446d-d17a-4d20-80c2-72809fca9aa4' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->panels['main_content']['1'] = 'new-3'; /* WAS: 'new-bc51c997-ee62-4d4c-a265-4a33078ef979' */
    $data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->panels['main_content']['2'] = 'new-4'; /* WAS: '' */
    unset($data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-3d86446d-d17a-4d20-80c2-72809fca9aa4']);
    unset($data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-73b329e8-9053-4a19-8207-566065ab789a']);
    unset($data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->content['new-bc51c997-ee62-4d4c-a265-4a33078ef979']);
    unset($data['user_bookmarks']->default_handlers['page_user_bookmark_panel_context']->conf['display']->uuid);
  }
  if (isset($data['user_debts'])) {
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'left_sidebar',
          'type' => 'user_menu',
          'subtype' => 'user_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_print_button-print_button',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'main_content',
          'type' => 'debts',
          'subtype' => 'debts',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_dibs-dibs-terms-of-sale',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_dibs-dibs-cards-supported',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['left_sidebar']['0'] = 'new-5'; /* WAS: 'new-bc35a6a8-ac4b-4d43-a9ce-5530d19e355f' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['main_content']['0'] = 'new-6'; /* WAS: 'new-e2022ee9-76c6-459f-a099-31e801455557' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['main_content']['1'] = 'new-7'; /* WAS: 'new-a02ec119-af14-4c5c-bdf3-f742b32486a7' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['main_content']['2'] = 'new-8'; /* WAS: 'new-6de0581e-da74-4598-8800-395eee76efdd' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['main_content']['3'] = 'new-9'; /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->title_pane = 'new-7'; /* WAS: 'new-e2022ee9-76c6-459f-a099-31e801455557' */
    unset($data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-6de0581e-da74-4598-8800-395eee76efdd']);
    unset($data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-a02ec119-af14-4c5c-bdf3-f742b32486a7']);
    unset($data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-bc35a6a8-ac4b-4d43-a9ce-5530d19e355f']);
    unset($data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-e2022ee9-76c6-459f-a099-31e801455557']);
    unset($data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->uuid);
  }
  if (isset($data['user_loans'])) {
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'left_sidebar',
          'type' => 'user_menu',
          'subtype' => 'user_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->content['new-11'] = (object) array(
          'pid' => 'new-11',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_print_button-print_button',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'main_content',
          'type' => 'loans',
          'subtype' => 'loans',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->panels['left_sidebar']['0'] = 'new-10'; /* WAS: 'new-95c59944-f02d-4a0c-95c4-a7a854e6a5f3' */
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->panels['main_content']['0'] = 'new-11'; /* WAS: 'new-375a2a68-afd4-4852-8e12-0b6af310c47a' */
    $data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->panels['main_content']['1'] = 'new-12'; /* WAS: '' */
    unset($data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->content['new-375a2a68-afd4-4852-8e12-0b6af310c47a']);
    unset($data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->content['new-95c59944-f02d-4a0c-95c4-a7a854e6a5f3']);
    unset($data['user_loans']->default_handlers['page_user_loans_panel_context']->conf['display']->uuid);
  }
  if (isset($data['user_reservations'])) {
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'left_sidebar',
          'type' => 'user_menu',
          'subtype' => 'user_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-14'] = (object) array(
          'pid' => 'new-14',
          'panel' => 'main_content',
          'type' => 'block',
          'subtype' => 'ding_print_button-print_button',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-15'] = (object) array(
          'pid' => 'new-15',
          'panel' => 'main_content',
          'type' => 'reservations',
          'subtype' => 'reservations',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_entity_id:user_1',
            'reservation_type_list' => array(
              'ready_for_pickup' => 'ready_for_pickup',
              'not_ready_for_pickup' => 0,
              'interlibrary_loans' => 0,
            ),
            'form_build_id' => 'form-uqYqilRuJU-L4AtuQ398zk1P8y_lZwasKq93qm91EI8',
            'form_token' => 'LrQ90mfel5sMMkKaFHXxQ64WU37lYRizqlHrit9CT18',
            'form_id' => 'ding_reservation_reservations_content_type_edit_form',
            'override_title' => 0,
            'override_title_text' => '',
            'reservation_title' => 'Reservations ready for pickup',
            'reservation_empty_text' => 'There are no reservations ready for pickup.',
            'reservation_form_id' => 'ding_reservation_reservations_ready_form',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-16'] = (object) array(
          'pid' => 'new-16',
          'panel' => 'main_content',
          'type' => 'reservations',
          'subtype' => 'reservations',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_entity_id:user_1',
            'reservation_type_list' => array(
              'not_ready_for_pickup' => 'not_ready_for_pickup',
              'interlibrary_loans' => 'interlibrary_loans',
              'ready_for_pickup' => 0,
            ),
            'form_build_id' => 'form-QXSASI2sYP2qugnpOrh1aIrd6K-0Sj_sycEHjH96APE',
            'form_token' => 'yMH3jgoKwdgE1jAihu7_Xlkwph9PhG1qk5-pG304fqc',
            'form_id' => 'ding_reservation_reservations_content_type_edit_form',
            'override_title' => 1,
            'override_title_text' => '',
            'reservation_title' => 'Reservations',
            'reservation_empty_text' => 'There are no reservations.',
            'reservation_form_id' => 'ding_reservation_reservations_notready_form',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => '',
        ); /* WAS: '' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->panels['left_sidebar']['0'] = 'new-13'; /* WAS: 'new-c142c84d-4448-41f1-b980-bf06bf2e0d38' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->panels['main_content']['0'] = 'new-14'; /* WAS: 'new-422dddfe-35fd-4a5b-824a-cbcc7c68a86e' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->panels['main_content']['1'] = 'new-15'; /* WAS: 'new-8947b7ce-b3b4-4a9a-8068-9eac82ea9dd3' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->panels['main_content']['2'] = 'new-16'; /* WAS: '' */
    $data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->title_pane = 'new-15'; /* WAS: 'new-422dddfe-35fd-4a5b-824a-cbcc7c68a86e' */
    unset($data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-422dddfe-35fd-4a5b-824a-cbcc7c68a86e']);
    unset($data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-8947b7ce-b3b4-4a9a-8068-9eac82ea9dd3']);
    unset($data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->content['new-c142c84d-4448-41f1-b980-bf06bf2e0d38']);
    unset($data['user_reservations']->default_handlers['page_user_reservations_panel_context']->conf['display']->uuid);
  }
}
