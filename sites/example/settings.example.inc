<?php

// Define the base url of the local site.
$base_url = 'http://example:8082';

// Define the database settings.
if( !isset($databases) )
      $databases = array();
$databases['default']['default'] = array(
    'driver' => 'mysql',
    'database' => 'example',
    'username' => 'drupaluser',
    'password' => '',
    'host' => '127.0.0.1',
    'port' => 33066 );
