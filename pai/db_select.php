<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>użytkownicy</title>
  </head>
  <body>
    <h4>Użytkowincy</h4>

  <?php
$connect = new mysqli("localhost","root","","3pi2t");

$sql = "SELECT * FROM `users`";
$result = $connect-> query($sql);
//$user= $result->fetch_assoc();

while ($user= $result->fetch_assoc()) {
  echo <<< USER
  id: $user[ID]<br><br>
  imię: nazwisko: $user[name] $user[surname]<br>
  data urodzenia: $user[date]<br>
  data utworzenia konta : $user[create_date]<br>
<hr>
USER;
}

   ?>
   </body>
</html>
