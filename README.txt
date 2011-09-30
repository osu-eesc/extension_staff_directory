This module is designed to work for creating a staff directory page for all OSU Extension and AES staff

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