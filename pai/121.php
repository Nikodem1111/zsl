<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h3> Dane użytkownika </h3>
    <form>
<input type="text" name="name" 
placeholder="podaj imię"><br><br>
<input type="text" name="surname" 
placeholder="podaj nazwisko"><br><br>
<input type="color" name="color" 
placeholder="podaj swój ulubiony kolor"><br><br>
<input type="submit" value="zatwierdź dane"><br>

<?php
if(!empty($_GET['name']) && !empty($_GET['surname'])){


echo <<< E
imię i nazwisko ($_GET[name]) ($_GET[surname])<br>
color ($_GET[color])
E;}
else{echo "wypełnij wszystkie pola";}
?>

</form>
</body>
</html>