deims-ntl-custom
================

Customizations for the NTL DEIMS migration

This is a set of custom Drupal 7.x modules.  The _ntl_ module extends the Drupal 
contributed _migrate_ module and the DEIMS custom module D6 Migrate module, which 
in itself is an extension of the Drupal contrib. _migrate_. The _ntl_ module addresses 
special customizations of the North Temperate  Lakes LTER information management system


## Instructions ##

Clone 
* `git clone --branch 7.x-1.x git@github.com:lter/deims-ntl-custom.git` 
into a place of your choice (current directory, Desktop, etc)

Or download this module from: 

* `https://github.com/lter/deims-ntl-custom/archive/7.x-1.x.zip`
Extract the contents in a local directory, you will copy the parts inside to different
places in your DEIMS install, as we explain now.

Once you have the repository locally, create a folder named _modules_ under your
DEIMS root _sites/default_ (unless you have already made it)

Under the _sites/default/modules_, create another folder named _ntl_ 

Copy the _ntl.*_ files you downloaded from github locally, into the _ntl_ 
folder you just created. Also, copy the _migration_ subfolder you downloaded from 
_github_ into the same _ntl_ folder. 

Also, we need new content types for the NTL. In the local github download, you also
see a _features_ folder.  Inside, there are at least two folders that begin with the word
_ntl_, (for slides and spatial data).  Move these folders to the modules folder,
like this:

* `cp -r deims-ntl-custom/features DEIMSROOT/sites/default/modules/`


Now visit the "migrate dashboard", if needed (like, nothing seems to change), Flush the
Class Registry cache, (use the admin toolbar, or use "drush cc") and then, re-register
the migration classes using the Migrate->Configuration page (admin toolbar, or from Migrate
Dashboard).  You should be ready to try it
