<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <link rel="stylesheet" href="./style.css">
    <title>użytkownicy</title>
  </head>
  <body>
    <h4>Użytkowincy</h4>
    <form class="" action="./login.php" method="post">
      <input type="text" name="" value="" placeholder="podaj login">
      <input type="password" name="" value="" placeholder="podaj hasło">
      <input type="submit" name="" value="ok">
    </form>
  <?php
if (isset($_SESSION['error'])) {
  echo $_SESSION['error'];
unset($_SESSION['error']);
}
if (isset($_SESSION['loggin'])) {
  echo $_SESSION['login'];
unset($_SESSION['login']);
}
   ?>


   </body>
</html>
