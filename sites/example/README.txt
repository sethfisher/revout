Copy the contents of this folder into your site repository, and replace all
occurrences of "example" with the site name.

Files in this directory:

# .gitignore - Ensures settings.[site].inc isn't included in your repo.

# settings.php - Place site specific configuration in this file.

# settings.[site].inc - Modify this file to match your local development
environment (i.e. db connection details and base url). The included settings are
Acquia Dev Desktop defaults, so if you're using MAMP or something else, you'll
have to change these.

# modules/custom/[site]/[site].info
                        [site].module
                        [site].install

  - This is the module you should use to manage configuration that is specific
    to your site.
