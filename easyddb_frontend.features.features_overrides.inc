<?php
/**
 * @file
 * easyddb_frontend.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function easyddb_frontend_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|0"] = 'ting_title';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|1"] = 'ting_author';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|2"] = 'ting_abstract';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|3"] = 'ting_series';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|4"] = 'ting_details_classification';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|5"] = 'ting_more_info';

  // Exported overrides for: field_instance
  $overrides["field_instance.ting_collection-ting_collection-ting_entities.display|collection_popup"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'settings' => array(
      'hide_primary' => 0,
      'view_mode' => 'objects_in_popup',
    ),
    'type' => 'ting_entities_default',
    'weight' => 0,
  );
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|ding_item_viewer_big"] = array(
    'label' => 'hidden',
    'module' => 'ding_entity',
    'settings' => array(),
    'type' => 'ding_entity_buttons_ajax',
    'weight' => 10,
  );
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|objects_in_popup"] = array(
    'label' => 'hidden',
    'module' => 'ding_entity',
    'settings' => array(),
    'type' => 'ding_entity_buttons_ajax',
    'weight' => 3,
  );
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|search_result|label"] = 'hidden';
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|search_result|module"] = 'ding_entity';
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|search_result|type"] = 'ding_entity_buttons_ajax';
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|search_result|weight"] = 99;
  $overrides["field_instance.ting_object-ting_object-ting_abstract.display|ding_item_viewer_big"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(
      'trim_length' => 600,
    ),
    'type' => 'ting_abstract_ding_item_viewer',
    'weight' => 7,
  );
  $overrides["field_instance.ting_object-ting_object-ting_author.display|ding_item_viewer_big"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(),
    'type' => 'ting_author_ding_item_viewer',
    'weight' => 8,
  );
  $overrides["field_instance.ting_object-ting_object-ting_author.display|ding_item_viewer_small"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(),
    'type' => 'ting_author_ding_item_viewer',
    'weight' => 2,
  );
  $overrides["field_instance.ting_object-ting_object-ting_author.display|objects_in_popup"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'settings' => array(),
    'type' => 'ting_author_default',
    'weight' => 2,
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ding_item_viewer_big"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(
      'image_style' => 'ding_item_viewer_image_big',
    ),
    'type' => 'ting_cover_ding_item_viewer',
    'weight' => 0,
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ding_item_viewer_small"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(
      'image_style' => 'ding_item_viewer_image_small',
    ),
    'type' => 'ting_cover_ding_item_viewer',
    'weight' => 0,
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|objects_in_popup"] = array(
    'label' => 'hidden',
    'module' => 'ting_covers_plus',
    'settings' => array(
      'image_style' => 'medium',
    ),
    'type' => 'ting_cover_default',
    'weight' => 0,
  );
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|ding_item_viewer_big"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|ding_item_viewer_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 31,
  );
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|search_result"] = array(
    'label' => 'hidden',
    'module' => 'ting_material_details',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => 20,
  );
  $overrides["field_instance.ting_object-ting_object-ting_series.display|ding_item_viewer_big"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.ting_object-ting_object-ting_subjects.display|ding_item_viewer_big"] = array(
    'label' => 'inline',
    'module' => 'ding_item_viewer',
    'settings' => array(),
    'type' => 'ting_subjects_ding_item_viewer',
    'weight' => 9,
  );
  $overrides["field_instance.ting_object-ting_object-ting_title.display|ding_item_viewer_big"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(
      'link_type' => 'collection',
    ),
    'type' => 'ting_title_ding_item_viewer',
    'weight' => 6,
  );
  $overrides["field_instance.ting_object-ting_object-ting_title.display|ding_item_viewer_small"] = array(
    'label' => 'hidden',
    'module' => 'ding_item_viewer',
    'settings' => array(
      'link_type' => 'none',
    ),
    'type' => 'ting_title_ding_item_viewer',
    'weight' => 1,
  );
  $overrides["field_instance.ting_object-ting_object-ting_title.display|objects_in_popup"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'settings' => array(
      'link_type' => 'none',
      'prefix_type' => 'no',
    ),
    'type' => 'ting_title_default',
    'weight' => 1,
  );

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-07d2c562-f846-4241-b93f-7c1d723ff29d"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10"] = (object) array(
      'pid' => 'new-10',
      'panel' => 'main_content',
      'type' => 'bibliotek_info',
      'subtype' => 'bibliotek_info',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-11"] = (object) array(
      'pid' => 'new-11',
      'panel' => 'right_sidebar',
      'type' => 'campaign',
      'subtype' => 'campaign',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'ding_campaign_count' => 3,
        'ding_campaign_offset' => 0,
        'context' => array(
          0 => 'empty',
          1 => 'empty',
          2 => 'argument_string_1',
          3 => 'empty',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => '',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-2"] = (object) array(
      'pid' => 'new-2',
      'panel' => 'left_sidebar',
      'type' => 'search_backends',
      'subtype' => 'search_backends',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-3"] = (object) array(
      'pid' => 'new-3',
      'panel' => 'left_sidebar',
      'type' => 'ding_facetbrowser',
      'subtype' => 'ding_facetbrowser',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => 'Filtrér din søgning',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => '',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-4"] = (object) array(
      'pid' => 'new-4',
      'panel' => 'main_content',
      'type' => 'search_backends',
      'subtype' => 'search_backends',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(
        'css_id' => '',
        'css_class' => 'js-mobile-facets',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-41aa51eb-47c2-41e5-b0e5-2606d863b66d"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-47206bf0-1031-456c-9aab-96b659e54d89"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-5"] = (object) array(
      'pid' => 'new-5',
      'panel' => 'main_content',
      'type' => 'ding_facetbrowser',
      'subtype' => 'ding_facetbrowser',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-5929c0c7-25f7-4d61-8829-81a740e6f77e"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-6"] = (object) array(
      'pid' => 'new-6',
      'panel' => 'main_content',
      'type' => 'search_result_count',
      'subtype' => 'search_result_count',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-7"] = (object) array(
      'pid' => 'new-7',
      'panel' => 'main_content',
      'type' => 'search_per_page',
      'subtype' => 'search_per_page',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'select_type' => 'dropdown',
        'context' => 'argument_string_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-7c02f708-c47f-4eb5-8958-d6279de6ade4"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-8"] = (object) array(
      'pid' => 'new-8',
      'panel' => 'main_content',
      'type' => 'block',
      'subtype' => 'ting_search-sort_form',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => '',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-9"] = (object) array(
      'pid' => 'new-9',
      'panel' => 'main_content',
      'type' => 'search_result',
      'subtype' => 'search_result',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'type' => 'ting_search',
        'log' => 0,
        'override_empty' => 0,
        'empty_title' => '',
        'empty' => '',
        'empty_format' => 'plain_text',
        'override_no_key' => 0,
        'no_key_title' => '',
        'no_key' => '',
        'no_key_format' => 'plain_text',
        'context' => 'argument_string_1',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => '',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-d6bca0c2-099c-4659-8fcd-69da98dbc7c9"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-dd50ebf9-a0f1-499b-b389-49f178f5e242"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-f3a42372-e2fb-45e6-a62b-79c707f0a35d"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-f5097d22-b99c-49be-a0df-6b45a7d0d83c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|left_sidebar|0"] = 'new-2';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|left_sidebar|1"] = 'new-3';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|0"] = 'new-4';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|1"] = 'new-5';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|2"] = 'new-6';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|3"] = 'new-7';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|4"] = 'new-8';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|5"] = 'new-9';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|6"] = 'new-10';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|right_sidebar|0"] = 'new-11';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|uuid"]["DELETED"] = TRUE;

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-1"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-2"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-3"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-3d86446d-d17a-4d20-80c2-72809fca9aa4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-4"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-73b329e8-9053-4a19-8207-566065ab789a"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|content|new-bc51c997-ee62-4d4c-a265-4a33078ef979"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|panels|left_sidebar|0"] = 'new-1';
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|panels|main_content|0"] = 'new-2';
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|panels|main_content|1"] = 'new-3';
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|panels|main_content|2"] = 'new-4';
  $overrides["page_manager_pages.user_bookmarks.default_handlers|page_user_bookmark_panel_context|conf|display|uuid"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-5"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-6"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-6de0581e-da74-4598-8800-395eee76efdd"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-7"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-8"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-9"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-a02ec119-af14-4c5c-bdf3-f742b32486a7"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-bc35a6a8-ac4b-4d43-a9ce-5530d19e355f"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-e2022ee9-76c6-459f-a099-31e801455557"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|left_sidebar|0"] = 'new-5';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|main_content|0"] = 'new-6';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|main_content|1"] = 'new-7';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|main_content|2"] = 'new-8';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|main_content|3"] = 'new-9';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|title_pane"] = 'new-7';
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|uuid"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-10"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-11"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-12"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-375a2a68-afd4-4852-8e12-0b6af310c47a"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-95c59944-f02d-4a0c-95c4-a7a854e6a5f3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|panels|left_sidebar|0"] = 'new-10';
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|panels|main_content|0"] = 'new-11';
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|panels|main_content|1"] = 'new-12';
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|uuid"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-13"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-14"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-15"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-16"] = (object) array(
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
    );
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-422dddfe-35fd-4a5b-824a-cbcc7c68a86e"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-8947b7ce-b3b4-4a9a-8068-9eac82ea9dd3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-c142c84d-4448-41f1-b980-bf06bf2e0d38"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|panels|left_sidebar|0"] = 'new-13';
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|panels|main_content|0"] = 'new-14';
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|panels|main_content|1"] = 'new-15';
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|panels|main_content|2"] = 'new-16';
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|title_pane"] = 'new-15';
  $overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|uuid"]["DELETED"] = TRUE;

 return $overrides;
}
