<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <link rel="stylesheet" href="./style.css">
    <title>użytkownicy</title>
  </head>
  <body>
    <h4>Użytkowincy</h4>

  <?php
$connect = new mysqli("localhost","root","","3pi2t");

$sql = "SELECT * FROM `users`";
$result = $connect-> query($sql);
//$user= $result->fetch_assoc();
echo <<< table
<table>
 <tr>
     <th>ID</th>
     <th>imię</th>
     <th>nazwisko</th>
     <th>data urodzenia</th>
     <th>data utworzenia użytkownika</th>
   </tr>
table;
while ($user= $result->fetch_assoc()) {
echo <<<user
<tr>
<td>$user[ID]</td>
<td>$user[name]</td>
<td>$user[surname]</td>
<td>$user[date]</td>
<td>$user[create_date]</td>
</tr>
user;
}
echo "</table>";
   ?>


   </body>
</html>
