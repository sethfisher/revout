<?php

/**
 * Modify this file to match your local development environment (i.e. database
 * connection details and base url). The included settings are Acquia Dev
 * Desktop defaults, so if you're using MAMP or something else, you'll have to
 * change these.
 */

// Define the base url of the local site.
$base_url = 'http://example:8082';  // Replace "example" with your site name.

// Define the database settings.
if(!isset($databases)) {
  $databases = array();
}
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'example',        // Replace "example" with your site name.
  'username' => 'drupaluser',
  'password' => '',
  'host' => '127.0.0.1',
  'port' => 33066,
);
