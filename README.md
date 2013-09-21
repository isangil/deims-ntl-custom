deims-ntl-custom
================

Customizations for the NTL DEIMS migration

This is a custom Drupal 7.x module.  It extends the Drupal contributed migrate 
module and the Drupal custom DEIMS D6 Migrate module, which is an extension
of the former. This module addresses special customizations of the North Temperate 
Lakes LTER information management system

Install: $ git clone  git@github.com:isangil/deims-ntl-custom  destination-dir

Copy the module(s) to you DEIMS D7 instance - we recommend you create a "modules" 
directory under  [path]/sites/default  (yes, not sites/all/modules). Place this module 
there, so you may have "sites/default/modules/deims-ntl-custom", or you
can also rename it "ntl", so you have "sites/default/modules/ntl". Visit the modules 
admin page, and enable the NTL module.

Now visit the "migrate dashboard", if needed (like, nothing seems to change), Flush the
Class Registry cache, (use the admin toolbar, or use "drush cc") and then, re-register
the migration classes using the Migrate->Configuration page (admin toolbar, or from Migrate
Dashboard).  You should be ready to try it
