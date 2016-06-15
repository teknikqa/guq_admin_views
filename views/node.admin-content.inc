<?php

/**
 * @file
 * Default view for node content administration.
 */

$view = new view();
$view->name = 'guq_admin_views_node';
$view->description = 'Find and manage content. Customized for GU-Q.';
$view->tag = 'admin';
$view->base_table = 'node';
$view->human_name = 'Administration: Nodes';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Content';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 50;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
 'views_bulk_operations' => 'views_bulk_operations',
 'title' => 'title',
 'timestamp' => 'title',
 'type' => 'type',
 'name' => 'name',
 'status' => 'status',
 'changed' => 'changed',
 'edit_node' => 'edit_node',
 'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
 'views_bulk_operations' => array(
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'title' => array(
   'sortable' => 1,
   'default_sort_order' => 'asc',
   'align' => '',
   'separator' => '&nbsp;',
   'empty_column' => 0,
 ),
 'timestamp' => array(
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'type' => array(
   'sortable' => 1,
   'default_sort_order' => 'asc',
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'name' => array(
   'sortable' => 1,
   'default_sort_order' => 'asc',
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'status' => array(
   'sortable' => 1,
   'default_sort_order' => 'desc',
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'changed' => array(
   'sortable' => 1,
   'default_sort_order' => 'desc',
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
 'edit_node' => array(
   'align' => '',
   'separator' => '&emsp;',
   'empty_column' => 0,
 ),
 'delete_node' => array(
   'align' => '',
   'separator' => '',
   'empty_column' => 0,
 ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
 'forums' => 0,
 'tags' => 0,
);
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
 'action::node_assign_owner_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change author',
 ),
 'action::views_bulk_operations_delete_item' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 0,
   'override_label' => 1,
   'label' => 'Delete',
 ),
 'action::node_make_sticky_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Stick',
 ),
 'action::node_make_unsticky_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unstick',
 ),
 'action::views_bulk_operations_modify_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change value',
   'settings' => array(
     'show_all_tokens' => 1,
     'display_values' => array(
       '_all_' => '_all_',
     ),
   ),
 ),
 'action::node_promote_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Promote to front page',
 ),
 'action::node_publish_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Publish',
 ),
 'action::node_unpromote_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Demote from front page',
 ),
 'action::node_unpublish_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unpublish',
 ),
 'action::pathauto_node_update_action' => array(
   'selected' => 1,
   'postpone_processing' => 0,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Update URL aliases',
 ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Entity translation: Block Title: translated */
$handler->display->display_options['fields']['field_title_et']['id'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['table'] = 'field_data_field_title';
$handler->display->display_options['fields']['field_title_et']['field'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['field_title_et']['label'] = 'Author';
$handler->display->display_options['fields']['field_title_et']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
$handler->display->display_options['fields']['field_title_et']['language'] = 'en';
/* Field: Domain Access: Domain ID */
$handler->display->display_options['fields']['gid']['id'] = 'gid';
$handler->display->display_options['fields']['gid']['table'] = 'domain_access';
$handler->display->display_options['fields']['gid']['field'] = 'gid';
$handler->display->display_options['fields']['gid']['label'] = 'Domain';
$handler->display->display_options['fields']['gid']['display_method'] = 'sitename';
/* Field: Content: Language */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'node';
$handler->display->display_options['fields']['language']['field'] = 'language';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 41 => 0,
 46 => 0,
 31 => 0,
 36 => 0,
 16 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
$handler->display->display_options['filters']['vid']['group'] = 1;
$handler->display->display_options['filters']['vid']['exposed'] = TRUE;
$handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
$handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
$handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
$handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
$handler->display->display_options['filters']['vid']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 41 => 0,
 46 => 0,
 31 => 0,
 36 => 0,
 16 => 0,
);
/* Filter criterion: Domain Access: Domain ID */
$handler->display->display_options['filters']['gid']['id'] = 'gid';
$handler->display->display_options['filters']['gid']['table'] = 'domain_access';
$handler->display->display_options['filters']['gid']['field'] = 'gid';
$handler->display->display_options['filters']['gid']['group'] = 1;
$handler->display->display_options['filters']['gid']['exposed'] = TRUE;
$handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
$handler->display->display_options['filters']['gid']['expose']['label'] = 'Domain';
$handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
$handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
$handler->display->display_options['filters']['gid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 36 => 0,
 16 => 0,
 31 => 0,
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 41 => 0,
 46 => 0,
 31 => 0,
 36 => 0,
 16 => 0,
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['field_language_add_to_query'] = 0;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/content';

/* Display: Publications */
$handler = $view->new_display('system', 'Publications', 'content_publications_system');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Publications';
$handler->display->display_options['display_description'] = 'To have a custom content page for publications.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
 'action::node_assign_owner_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change author',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_delete_item' => array(
   'selected' => 1,
   'skip_confirmation' => 0,
   'override_label' => 1,
   'label' => 'Delete',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_modify_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change value',
   'settings' => array(
     'show_all_tokens' => 1,
     'display_values' => array(
       '_all_' => '_all_',
     ),
   ),
   'postpone_processing' => 0,
 ),
 'action::node_make_sticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Stick',
   'postpone_processing' => 0,
 ),
 'action::node_make_unsticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unstick',
   'postpone_processing' => 0,
 ),
 'action::node_promote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Promote to front page',
   'postpone_processing' => 0,
 ),
 'action::node_publish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Publish',
   'postpone_processing' => 0,
 ),
 'action::node_unpromote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Demote from front page',
   'postpone_processing' => 0,
 ),
 'action::node_unpublish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unpublish',
   'postpone_processing' => 0,
 ),
);
/* Field: Biblio: Biblio Citation */
$handler->display->display_options['fields']['citation']['id'] = 'citation';
$handler->display->display_options['fields']['citation']['table'] = 'biblio';
$handler->display->display_options['fields']['citation']['field'] = 'citation';
$handler->display->display_options['fields']['citation']['label'] = '';
$handler->display->display_options['fields']['citation']['exclude'] = TRUE;
$handler->display->display_options['fields']['citation']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['citation']['alter']['preserve_tags'] = '<p> <i> <em> <div>';
$handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['citation']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['citation']['export_links'] = 0;
$handler->display->display_options['fields']['citation']['file_attachments'] = 0;
$handler->display->display_options['fields']['citation']['open_url_link'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>
<p>[citation]</p>
';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Entity translation: Block Title: translated */
$handler->display->display_options['fields']['field_title_et']['id'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['table'] = 'field_data_field_title';
$handler->display->display_options['fields']['field_title_et']['field'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_title_et']['label'] = 'Author';
$handler->display->display_options['fields']['field_title_et']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
$handler->display->display_options['fields']['field_title_et']['language'] = 'en';
/* Field: Biblio: Type of Publication */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = 'Type';
/* Field: Content:  Research discipline */
$handler->display->display_options['fields']['field_research_subject']['id'] = 'field_research_subject';
$handler->display->display_options['fields']['field_research_subject']['table'] = 'field_data_field_research_subject';
$handler->display->display_options['fields']['field_research_subject']['field'] = 'field_research_subject';
$handler->display->display_options['fields']['field_research_subject']['label'] = 'Discipline';
$handler->display->display_options['fields']['field_research_subject']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_research_subject']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_research_subject']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
/* Field: Content: Date for sorting */
$handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['label'] = 'Sorting date';
$handler->display->display_options['fields']['field_publication_date']['settings'] = array(
 'format_type' => 'date_only_short',
 'fromto' => 'both',
 'multiple_number' => '',
 'multiple_from' => '',
 'multiple_to' => '',
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
 'biblio' => 'biblio',
);
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Biblio: Type of Publication */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Type of Publication';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 3 => 0,
);
/* Filter criterion: Content: Date for sorting (field_publication_date) */
$handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
$handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
$handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
$handler->display->display_options['filters']['field_publication_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_publication_date_value']['expose']['operator_id'] = 'field_publication_date_value_op';
$handler->display->display_options['filters']['field_publication_date_value']['expose']['label'] = 'Date for sorting';
$handler->display->display_options['filters']['field_publication_date_value']['expose']['operator'] = 'field_publication_date_value_op';
$handler->display->display_options['filters']['field_publication_date_value']['expose']['identifier'] = 'field_publication_date_value';
$handler->display->display_options['filters']['field_publication_date_value']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 3 => 0,
);
$handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'month';
$handler->display->display_options['filters']['field_publication_date_value']['year_range'] = '-10:+3';
/* Filter criterion: Content:  Research discipline (field_research_subject) */
$handler->display->display_options['filters']['field_research_subject_tid']['id'] = 'field_research_subject_tid';
$handler->display->display_options['filters']['field_research_subject_tid']['table'] = 'field_data_field_research_subject';
$handler->display->display_options['filters']['field_research_subject_tid']['field'] = 'field_research_subject_tid';
$handler->display->display_options['filters']['field_research_subject_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_research_subject_tid']['expose']['operator_id'] = 'field_research_subject_tid_op';
$handler->display->display_options['filters']['field_research_subject_tid']['expose']['label'] = 'Discipline';
$handler->display->display_options['filters']['field_research_subject_tid']['expose']['operator'] = 'field_research_subject_tid_op';
$handler->display->display_options['filters']['field_research_subject_tid']['expose']['identifier'] = 'field_research_subject_tid';
$handler->display->display_options['filters']['field_research_subject_tid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 3 => 0,
);
$handler->display->display_options['filters']['field_research_subject_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_research_subject_tid']['vocabulary'] = 'research_subject';
$handler->display->display_options['filters']['field_research_subject_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'admin/content/publications';

/* Display: Editorial sections */
$handler = $view->new_display('page', 'Editorial sections', 'page_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
 'action::node_assign_owner_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change author',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_delete_item' => array(
   'selected' => 1,
   'skip_confirmation' => 0,
   'override_label' => 1,
   'label' => 'Delete',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_modify_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change value',
   'settings' => array(
     'show_all_tokens' => 1,
     'display_values' => array(
       '_all_' => '_all_',
     ),
   ),
   'postpone_processing' => 0,
 ),
 'action::node_make_sticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Stick',
   'postpone_processing' => 0,
 ),
 'action::node_make_unsticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unstick',
   'postpone_processing' => 0,
 ),
 'action::node_promote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Promote to front page',
   'postpone_processing' => 0,
 ),
 'action::node_publish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Publish',
   'postpone_processing' => 0,
 ),
 'action::node_unpromote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Demote from front page',
   'postpone_processing' => 0,
 ),
 'action::node_unpublish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unpublish',
   'postpone_processing' => 0,
 ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Entity translation: Block Title: translated */
$handler->display->display_options['fields']['field_title_et']['id'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['table'] = 'field_data_field_title';
$handler->display->display_options['fields']['field_title_et']['field'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_title_et']['label'] = 'Author';
$handler->display->display_options['fields']['field_title_et']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
$handler->display->display_options['fields']['field_title_et']['language'] = 'en';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: Permissions */
$handler->display->display_options['fields']['field_permission_department']['id'] = 'field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['table'] = 'field_data_field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['field'] = 'field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['label'] = 'Permission department';
$handler->display->display_options['fields']['field_permission_department']['type'] = 'taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_permission_department']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
/* Field: Workbench Access:  */
$handler->display->display_options['fields']['section']['id'] = 'section';
$handler->display->display_options['fields']['section']['table'] = 'workbench_access';
$handler->display->display_options['fields']['section']['field'] = 'section';
$handler->display->display_options['fields']['section']['label'] = 'Workbench section';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
 1 => 'AND',
 2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 3 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Menu: Menu link id */
$handler->display->display_options['filters']['mlid']['id'] = 'mlid';
$handler->display->display_options['filters']['mlid']['table'] = 'menu_links';
$handler->display->display_options['filters']['mlid']['field'] = 'mlid';
$handler->display->display_options['filters']['mlid']['group'] = 2;
$handler->display->display_options['filters']['mlid']['exposed'] = TRUE;
$handler->display->display_options['filters']['mlid']['expose']['operator_id'] = 'mlid_op';
$handler->display->display_options['filters']['mlid']['expose']['label'] = 'Menu link id';
$handler->display->display_options['filters']['mlid']['expose']['description'] = 'Menu item id.';
$handler->display->display_options['filters']['mlid']['expose']['operator'] = 'mlid_op';
$handler->display->display_options['filters']['mlid']['expose']['identifier'] = 'mlid';
$handler->display->display_options['filters']['mlid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 16 => 0,
 31 => 0,
);
/* Filter criterion: Menu: Parent */
$handler->display->display_options['filters']['p1']['id'] = 'p1';
$handler->display->display_options['filters']['p1']['table'] = 'menu_links';
$handler->display->display_options['filters']['p1']['field'] = 'p1';
$handler->display->display_options['filters']['p1']['group'] = 2;
$handler->display->display_options['filters']['p1']['exposed'] = TRUE;
$handler->display->display_options['filters']['p1']['expose']['operator_id'] = 'p1_op';
$handler->display->display_options['filters']['p1']['expose']['label'] = 'Top level parent';
$handler->display->display_options['filters']['p1']['expose']['description'] = 'Will include ALL children.';
$handler->display->display_options['filters']['p1']['expose']['operator'] = 'p1_op';
$handler->display->display_options['filters']['p1']['expose']['identifier'] = 'p1';
$handler->display->display_options['filters']['p1']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 16 => 0,
 31 => 0,
);
/* Filter criterion: Menu: Parent menu link id */
$handler->display->display_options['filters']['plid']['id'] = 'plid';
$handler->display->display_options['filters']['plid']['table'] = 'menu_links';
$handler->display->display_options['filters']['plid']['field'] = 'plid';
$handler->display->display_options['filters']['plid']['group'] = 2;
$handler->display->display_options['filters']['plid']['exposed'] = TRUE;
$handler->display->display_options['filters']['plid']['expose']['operator_id'] = 'plid_op';
$handler->display->display_options['filters']['plid']['expose']['label'] = 'Direct parent';
$handler->display->display_options['filters']['plid']['expose']['description'] = 'Will include only direct children.';
$handler->display->display_options['filters']['plid']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['plid']['expose']['operator'] = 'plid_op';
$handler->display->display_options['filters']['plid']['expose']['identifier'] = 'plid';
$handler->display->display_options['filters']['plid']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 26 => 0,
 21 => 0,
 3 => 0,
 16 => 0,
 31 => 0,
);
$handler->display->display_options['path'] = 'admin/content/editorial';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Editorial sections';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Editorial sections';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Unassigned content */
$handler = $view->new_display('page', 'Unassigned content', 'page_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
 'action::node_assign_owner_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change author',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_delete_item' => array(
   'selected' => 1,
   'skip_confirmation' => 0,
   'override_label' => 1,
   'label' => 'Delete',
   'postpone_processing' => 0,
 ),
 'action::views_bulk_operations_modify_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Change value',
   'settings' => array(
     'show_all_tokens' => 1,
     'display_values' => array(
       '_all_' => '_all_',
     ),
   ),
   'postpone_processing' => 0,
 ),
 'action::node_make_sticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Stick',
   'postpone_processing' => 0,
 ),
 'action::node_make_unsticky_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unstick',
   'postpone_processing' => 0,
 ),
 'action::node_promote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Promote to front page',
   'postpone_processing' => 0,
 ),
 'action::node_publish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Publish',
   'postpone_processing' => 0,
 ),
 'action::node_unpromote_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Demote from front page',
   'postpone_processing' => 0,
 ),
 'action::node_unpublish_action' => array(
   'selected' => 1,
   'skip_confirmation' => 1,
   'override_label' => 1,
   'label' => 'Unpublish',
   'postpone_processing' => 0,
 ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Entity translation: Block Title: translated */
$handler->display->display_options['fields']['field_title_et']['id'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['table'] = 'field_data_field_title';
$handler->display->display_options['fields']['field_title_et']['field'] = 'field_title_et';
$handler->display->display_options['fields']['field_title_et']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_title_et']['label'] = 'Author';
$handler->display->display_options['fields']['field_title_et']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
$handler->display->display_options['fields']['field_title_et']['language'] = 'en';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: Permissions */
$handler->display->display_options['fields']['field_permission_department']['id'] = 'field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['table'] = 'field_data_field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['field'] = 'field_permission_department';
$handler->display->display_options['fields']['field_permission_department']['label'] = 'Permission department';
$handler->display->display_options['fields']['field_permission_department']['type'] = 'taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_permission_department']['settings'] = array(
 'linked_field' => array(
   'linked' => 0,
   'destination' => '',
   'advanced' => array(
     'title' => '',
     'target' => '',
     'class' => '',
     'rel' => '',
     'text' => '',
   ),
 ),
);
/* Field: Workbench Access:  */
$handler->display->display_options['fields']['section']['id'] = 'section';
$handler->display->display_options['fields']['section']['table'] = 'workbench_access';
$handler->display->display_options['fields']['section']['field'] = 'section';
$handler->display->display_options['fields']['section']['label'] = 'Workbench section';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
 2 => '2',
 1 => 0,
 3 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Permissions (field_permission_department) */
$handler->display->display_options['filters']['field_permission_department_tid']['id'] = 'field_permission_department_tid';
$handler->display->display_options['filters']['field_permission_department_tid']['table'] = 'field_data_field_permission_department';
$handler->display->display_options['filters']['field_permission_department_tid']['field'] = 'field_permission_department_tid';
$handler->display->display_options['filters']['field_permission_department_tid']['operator'] = 'empty';
$handler->display->display_options['filters']['field_permission_department_tid']['value'] = '';
$handler->display->display_options['filters']['field_permission_department_tid']['vocabulary'] = 'permission_department';
$handler->display->display_options['path'] = 'admin/content/editorial/unassigned';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Unassigned content';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['admin_views_node'] = array(
  t('Defaults'),
  t('Content'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('No content available.'),
  t('author'),
  t('term'),
  t('- Choose an operation -'),
  t('Change author'),
  t('Delete'),
  t('Change value'),
  t('Stick'),
  t('Unstick'),
  t('Promote to front page'),
  t('Publish'),
  t('Demote from front page'),
  t('Unpublish'),
  t('Title'),
  t('Type'),
  t('Author'),
  t('Published'),
  t('Updated'),
  t('Operations'),
  t('Vocabulary'),
  t('System'),
);
