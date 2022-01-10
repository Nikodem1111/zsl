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
    <h1>Imię i Nazwisko</h1>
    <?php
    //unset($_SESSION['name']);   Usuwa jedną zmienną
  //  session_desrtoy();     usuwa cała sesje
echo $_SESSION['name']." ".$_SESSION['surname'].'<br>';
echo "<br> identyfikator sesji: ";
echo session_id();
session_regenerate_id();
     ?>
     <br><br>
     <a href="./zad.php">powrót</a>
  </body>
</html>
