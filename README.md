#Bookstore - Drupal

#### A simple Drupal 7 website, 04/22/16
#### By: Aundra Miller

##Description

This is a simple Drupal 7 application for a small business. The site displays static pages, book reviews, and blocks to anonymous visitors. An authenticated user can view coupons, while a reviewer can post book reviews for all to see. This application utilizes a custom content type, as well as several custom features and Drupal 7 modules, both core and contrib. 

##Setup / Installation
1.  Clone this repository.
2.  Launch MAMP servers.
3.  Set up the database in phpMyAdmin:
    1. Import the database located at `sites/db-backup` into phpMyAdmin.
    2. Create a database user for Drupal. 
4. Open localhost at the designated Apache port.

##Logins
* Database User
  * Username: db_admin
  * Password: db_admin
* User1
  * Username: milleraundra
  * Password: User1Admin
* Reviewer
  * Username: reviewer1
  * Password: review1

##Bugs
CSS injector styles for the font-style of the main text are currently broken. Styles will load when the admin or reviewer are logged in, but it does not load for anonymous users.

## Contact

If you have any questions, concerns, or feedback, please contact me directly at miller.aundra@gmail.com

### License

MIT License.

Copyright (c) 2016 Aundra Miller
