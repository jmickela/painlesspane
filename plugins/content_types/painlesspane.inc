<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Add a Painless Pane'),
  'description' => t('Add a pane, painlessly!'),
  'category' => t('Add All the Panes!'),
  'edit form' => 'painlesspane_pane_edit_form',
  'render callback' => 'painlesspane_pane_render',
  'all contexts' => TRUE,

  //Just a little more:
  'admin info' => 'painlesspane_pane_admin_info', //Provide information about your pane to give some context in the ui
  'defaults' => array( //Give defaults for common options
    'name' => 'rootid',
  ),
);