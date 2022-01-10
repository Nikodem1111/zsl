<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
    <h3>Strona domowa</h3>
    <?php
$_SESSION['name'] = "Janusz";

     ?>
     <a href="./dane.php">Dane</a>
  </body>
</html>
