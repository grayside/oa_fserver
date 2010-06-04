<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function grayside_oa_fserver_context_default_contexts() {
  module_load_include('inc', 'grayside_oa_fserver', 'grayside_oa_fserver.defaults');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_fserver_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function grayside_oa_fserver_ctools_plugin_api() {
  module_load_include('inc', 'grayside_oa_fserver', 'grayside_oa_fserver.defaults');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_fserver_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function grayside_oa_fserver_strongarm() {
  module_load_include('inc', 'grayside_oa_fserver', 'grayside_oa_fserver.defaults');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_fserver_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function grayside_oa_fserver_views_default_views() {
  module_load_include('inc', 'grayside_oa_fserver', 'grayside_oa_fserver.features.views');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_fserver_views_default_views', $args);
}
