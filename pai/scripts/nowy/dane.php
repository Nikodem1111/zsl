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
    <?php
  echo  session_status();
  echo "<br><br>";
echo $_SESSION['name'];
 $_SESSION['surname'] = 'Nowak';
     ?>
     <br><br>
     <a href="./surnamename.php">imię i nazwisko</a>
  </body>
</html>
