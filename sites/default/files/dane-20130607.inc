{\rtf1\ansi\ansicpg1252\cocoartf1187\cocoasubrtf370
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural

\f0\fs24 \cf0 $view = new view();\
$view->name = 'articles';\
$view->description = 'List of articles.';\
$view->tag = 'default';\
$view->base_table = 'node';\
$view->human_name = 'Articles';\
$view->core = 7;\
$view->api_version = '3.0';\
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */\
\
/* Display: Master */\
$handler = $view->new_display('default', 'Master', 'default');\
$handler->display->display_options['title'] = 'Related Articles';\
$handler->display->display_options['use_more_always'] = FALSE;\
$handler->display->display_options['access']['type'] = 'perm';\
$handler->display->display_options['cache']['type'] = 'none';\
$handler->display->display_options['query']['type'] = 'views_query';\
$handler->display->display_options['exposed_form']['type'] = 'basic';\
$handler->display->display_options['pager']['type'] = 'full';\
$handler->display->display_options['pager']['options']['items_per_page'] = '10';\
$handler->display->display_options['pager']['options']['offset'] = '0';\
$handler->display->display_options['pager']['options']['id'] = '0';\
$handler->display->display_options['pager']['options']['quantity'] = '9';\
$handler->display->display_options['style_plugin'] = 'default';\
$handler->display->display_options['row_plugin'] = 'fields';\
/* Field: Content: Title */\
$handler->display->display_options['fields']['title']['id'] = 'title';\
$handler->display->display_options['fields']['title']['table'] = 'node';\
$handler->display->display_options['fields']['title']['field'] = 'title';\
$handler->display->display_options['fields']['title']['label'] = '';\
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;\
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;\
$handler->display->display_options['fields']['title']['element_type'] = 'h3';\
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;\
/* Field: Content: Post date */\
$handler->display->display_options['fields']['created']['id'] = 'created';\
$handler->display->display_options['fields']['created']['table'] = 'node';\
$handler->display->display_options['fields']['created']['field'] = 'created';\
$handler->display->display_options['fields']['created']['label'] = '';\
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;\
$handler->display->display_options['fields']['created']['date_format'] = 'short';\
/* Field: Content: Body */\
$handler->display->display_options['fields']['body']['id'] = 'body';\
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';\
$handler->display->display_options['fields']['body']['field'] = 'body';\
$handler->display->display_options['fields']['body']['label'] = '';\
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;\
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';\
$handler->display->display_options['fields']['body']['settings'] = array(\
  'trim_length' => '250',\
);\
/* Sort criterion: Content: Post date */\
$handler->display->display_options['sorts']['created']['id'] = 'created';\
$handler->display->display_options['sorts']['created']['table'] = 'node';\
$handler->display->display_options['sorts']['created']['field'] = 'created';\
$handler->display->display_options['sorts']['created']['order'] = 'DESC';\
/* Contextual filter: Content: Tags (field_tags) */\
$handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';\
$handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';\
$handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['default_argument_options']['node'] = TRUE;\
$handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';\
$handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';\
$handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';\
/* Filter criterion: Content: Published */\
$handler->display->display_options['filters']['status']['id'] = 'status';\
$handler->display->display_options['filters']['status']['table'] = 'node';\
$handler->display->display_options['filters']['status']['field'] = 'status';\
$handler->display->display_options['filters']['status']['value'] = 1;\
$handler->display->display_options['filters']['status']['group'] = 1;\
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;\
/* Filter criterion: Content: Type */\
$handler->display->display_options['filters']['type']['id'] = 'type';\
$handler->display->display_options['filters']['type']['table'] = 'node';\
$handler->display->display_options['filters']['type']['field'] = 'type';\
$handler->display->display_options['filters']['type']['value'] = array(\
  'article' => 'article',\
);\
\
/* Display: Page */\
$handler = $view->new_display('page', 'Page', 'page');\
$handler->display->display_options['defaults']['title'] = FALSE;\
$handler->display->display_options['title'] = 'Articles';\
$handler->display->display_options['defaults']['arguments'] = FALSE;\
$handler->display->display_options['path'] = 'articles';\
$handler->display->display_options['menu']['type'] = 'normal';\
$handler->display->display_options['menu']['title'] = 'Articles';\
$handler->display->display_options['menu']['name'] = 'main-menu';\
\
/* Display: Block */\
$handler = $view->new_display('block', 'Block', 'block_1');\
$handler->display->display_options['defaults']['fields'] = FALSE;\
/* Field: Content: Title */\
$handler->display->display_options['fields']['title']['id'] = 'title';\
$handler->display->display_options['fields']['title']['table'] = 'node';\
$handler->display->display_options['fields']['title']['field'] = 'title';\
$handler->display->display_options['fields']['title']['label'] = '';\
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;\
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;\
$handler->display->display_options['fields']['title']['element_type'] = 'h3';\
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;\
/* Field: Content: Post date */\
$handler->display->display_options['fields']['created']['id'] = 'created';\
$handler->display->display_options['fields']['created']['table'] = 'node';\
$handler->display->display_options['fields']['created']['field'] = 'created';\
$handler->display->display_options['fields']['created']['label'] = '';\
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;\
$handler->display->display_options['fields']['created']['date_format'] = 'short';\
/* Field: Content: Tags */\
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';\
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';\
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';\
$handler->display->display_options['fields']['field_tags']['label'] = '';\
$handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;\
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';\
$handler->display->display_options['defaults']['arguments'] = FALSE;\
/* Contextual filter: Content: Tags (field_tags) */\
$handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';\
$handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';\
$handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';\
$handler->display->display_options['arguments']['field_tags_tid']['default_argument_options']['node'] = TRUE;\
$handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';\
$handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';\
$handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';\
/* Contextual filter: Content: Nid */\
$handler->display->display_options['arguments']['nid']['id'] = 'nid';\
$handler->display->display_options['arguments']['nid']['table'] = 'node';\
$handler->display->display_options['arguments']['nid']['field'] = 'nid';\
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';\
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';\
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';\
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';\
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';\
$handler->display->display_options['arguments']['nid']['not'] = TRUE;\
$handler->display->display_options['defaults']['filter_groups'] = FALSE;\
$handler->display->display_options['defaults']['filters'] = FALSE;\
/* Filter criterion: Content: Published */\
$handler->display->display_options['filters']['status']['id'] = 'status';\
$handler->display->display_options['filters']['status']['table'] = 'node';\
$handler->display->display_options['filters']['status']['field'] = 'status';\
$handler->display->display_options['filters']['status']['value'] = 1;\
$handler->display->display_options['filters']['status']['group'] = 1;\
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;\
/* Filter criterion: Content: Type */\
$handler->display->display_options['filters']['type']['id'] = 'type';\
$handler->display->display_options['filters']['type']['table'] = 'node';\
$handler->display->display_options['filters']['type']['field'] = 'type';\
$handler->display->display_options['filters']['type']['value'] = array(\
  'article' => 'article',\
);}