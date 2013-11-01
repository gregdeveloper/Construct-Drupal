<?php
/**
 * @file
 * construct_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function construct_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = 'News view uses the default article content type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'square__480x480_',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: News Page */
  $handler = $view->new_display('page', 'News Page', 'news_page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['description'] = 'Latest News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: News Block */
  $handler = $view->new_display('block', 'News Block', 'news_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: News Category (field_news_category) */
  $handler->display->display_options['arguments']['field_news_category_target_id']['id'] = 'field_news_category_target_id';
  $handler->display->display_options['arguments']['field_news_category_target_id']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['arguments']['field_news_category_target_id']['field'] = 'field_news_category_target_id';
  $handler->display->display_options['arguments']['field_news_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_news_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_category_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_category_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_news_category_target_id']['validate_options']['types'] = array(
    'news_category' => 'news_category',
  );
  $handler->display->display_options['arguments']['field_news_category_target_id']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['field_news_category_target_id']['validate']['fail'] = 'ignore';

  /* Display: News Carousel */
  $handler = $view->new_display('block', 'News Carousel', 'news_carousel');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'carousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['news'] = $view;

  return $export;
}
