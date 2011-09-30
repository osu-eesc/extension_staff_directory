Drupal 6 module that imports data from extension.oregonstate.edu and creates a staff directory page 
listing OSU Extension and AES staff. A group listing can found at http://extension.oregonstate.edu/find-us/group

core = "6.x"
dependencies[] = "content_access"
dependencies[] = "features"
dependencies[] = "feeds"
dependencies[] = "feeds_ui"
dependencies[] = "feeds_xpathparser"
dependencies[] = "openlayers"
dependencies[] = "openlayers_ui"
dependencies[] = "openlayers_views"
dependencies[] = "strongarm"
dependencies[] = "text"
dependencies[] = "views"

Useage: After installing the URL for the twwo feeds needs to be entered.

go to  /import/faculty_staff_import and enter the following in the URL field
http://extension.oregonstate.edu/employee/list/[replace with group nid]/xml

go to  /import/group_location_import and enter the following in the URL field
http://extension.oregonstate.edu/employee/location/[replace with group nid]/xml

to view the staf directory page go to
/staff-directory