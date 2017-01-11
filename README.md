# islandora_vagrant_features

## Initial creation
Run from inside the sites directory of the site that contains the variable we are exporting.  
E.g. `/var/www/drupal/sites/umkc`
```
drush fe islandora_vagrant_features variable:islandora_paged_content_djatoka_url
```

# Adding a new variable to the feature

1. Add the variable to the .info file
2. Switch to the site that contains the variable we are exporting 
3. `drush fu --d islandora_vagrant_features`

