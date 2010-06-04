<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _grayside_oa_fserver_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oa_fserver-feature-fserver';
  $context->description = 'Feature Server > Project Listing';
  $context->tag = 'Feature Server';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'fserver_projects' => 'fserver_projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6acc34b3502edf0a939c29f8f8954ff3' => array(
          'module' => 'views',
          'delta' => '6acc34b3502edf0a939c29f8f8954ff3',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'fserver',
  );
  $context->condition_mode = 0;

  $translatables['oa_fserver-feature-fserver'] = array(
    t('Feature Server > Project Listing'),
    t('Feature Server'),
  );

  $export['oa_fserver-feature-fserver'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oa_fserver-section-project';
  $context->description = 'Features Server > Project';
  $context->tag = 'Feature Server';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_project' => 'fserver_project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fserver_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'fserver_releases-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['oa_fserver-section-project'] = array(
    t('Feature Server'),
    t('Features Server > Project'),
  );

  $export['oa_fserver-section-project'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _grayside_oa_fserver_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _grayside_oa_fserver_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'book_allowed_types';
  $strongarm->value = array(
    '0' => 'book',
    '1' => 'fserver_project',
    '2' => 'casetracker_basic_project',
  );

  $export['book_allowed_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_project_node_types';
  $strongarm->value = array(
    'fserver_project' => 'fserver_project',
    'casetracker_basic_project' => 'casetracker_basic_project',
    'blog' => 0,
    'book' => 0,
    'event' => 0,
    'group' => 0,
    'profile' => 0,
    'fserver_release' => 0,
    'shoutbox' => 0,
    'feed_ical_item' => 0,
    'feed_ical' => 0,
  );

  $export['casetracker_project_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fserver_project';
  $strongarm->value = '0';

  $export['comment_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fserver_release';
  $strongarm->value = '0';

  $export['comment_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_fserver_project';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_fserver_release';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spaces_dashboard_blocks';
  $strongarm->value = array(
    'admin-create' => 0,
    'admin-devel' => 0,
    'admin-menu' => 0,
    'atrium-account' => 0,
    'atrium-admin_links' => 0,
    'atrium-book' => 0,
    'atrium-book_all' => 0,
    'atrium-create' => 0,
    'atrium-help' => 0,
    'atrium-search' => 0,
    'atrium-user_links' => 0,
    'atrium-welcome_admin' => 1,
    'atrium-welcome_member' => 1,
    'atrium_calendar-mini' => 1,
    'atrium_casetracker-filters' => 0,
    'atrium_members-addform' => 0,
    'atrium_shoutbox-shoutbox' => 0,
    'book-0' => 0,
    'boxes-add' => 0,
    'casetracker-0' => 0,
    'comment-0' => 0,
    'context_ui-devel' => 0,
    'context_ui-editor' => 0,
    'devel-0' => 0,
    'devel-2' => 0,
    'diff-inline' => 0,
    'markdown-help' => 0,
    'menu-admin' => 0,
    'menu-devel' => 0,
    'menu-features' => 0,
    'menu-primary-links' => 0,
    'menu-secondary-links' => 0,
    'node-0' => 0,
    'og-0' => 0,
    'og-3' => 0,
    'og_views-0' => 0,
    'og_views-1' => 0,
    'search-0' => 0,
    'spaces-menu_editor' => 0,
    'spaces_dashboard-editor' => 0,
    'system-0' => 0,
    'user-0' => 0,
    'user-1' => 0,
    'user-2' => 0,
    'user-3' => 0,
    'views--exp-messaging_shoutbox-block_1' => 0,
    'views--exp-messaging_shoutbox-block_2' => 0,
    'views--exp-messaging_shoutbox-default' => 0,
    'views-2806ea1d75b0ffa45a7eaa780e276615' => 1,
    'views-3de5a072e9754aa7bce60e3f05d1538e' => 1,
    'views-468d4512633362842c0ff768ac59efad' => 0,
    'views-6acc34b3502edf0a939c29f8f8954ff3' => 1,
    'views-707d7ca4a3396303c7ef762f32d243c8' => 0,
    'views-atrium_blog-block_1' => 0,
    'views-atrium_blog-block_2' => 1,
    'views-atrium_blog_comments-block_1' => 1,
    'views-atrium_calendar-block_1' => 0,
    'views-atrium_casetracker-block_1' => 0,
    'views-atrium_casetracker-block_2' => 1,
    'views-atrium_casetracker-block_3' => 1,
    'views-atrium_groups-block_2' => 1,
    'views-atrium_intranet-block_1' => 1,
    'views-atrium_intranet-block_2' => 1,
    'views-atrium_profile_blocks-block_1' => 0,
    'views-atrium_profile_blocks-block_2' => 0,
    'views-atrium_shoutbox_users-block_1' => 0,
    'views-atrium_taxonomy-block_1' => 0,
    'views-d6af0b83befbd3a36210064bbba489a8' => 0,
    'views-fe4a87bd780dcb95c25df26cd47badd6' => 1,
    'views-fff60b5167ffbdd19460dca794bcc787' => 0,
    'views-fserver_releases-block_1' => 0,
    'views-messaging_shoutbox-block_1' => 0,
    'views-messaging_shoutbox-block_2' => 0,
    'xref-create' => 0,
  );

  $export['spaces_dashboard_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_project';
  $strongarm->value = '1';

  $export['upload_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_release';
  $strongarm->value = '0';

  $export['upload_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_links_fserver_project';
  $strongarm->value = '0';

  $export['xref_links_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_view_fserver_project';
  $strongarm->value = 0;

  $export['xref_view_fserver_project'] = $strongarm;
  return $export;
}
