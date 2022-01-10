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
if (!empty($_POST)) {
  $_SESSION['login']= "prawidłowo uzupełnione!!!";
  header("location:./login1.php");
}
else {

  $_SESSION['error']= "wypisz wszystkie pola!!!";
  header("location:./login1.php");
  }

 ?>
  </body>
</html>
