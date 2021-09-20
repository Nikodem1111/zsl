<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    if(!empty($_GET['name']) && !empty($_GET['narodowosc']) && !empty($_GET['wiek'])){


     /*   echo <<< E
       imię  ($_GET[name]) <br>
       narodowość ($_GET[narodowosc])<br>
       wiek ($_GET[wiek])<br>
        E;}
       else{echo "wypełnij wszystkie pola";}*/
       $name = $_GET['name'];
        echo strtolower($name)."<br>";
        $na=$_GET['narodowosc'];
        echo strtolower($na)."<br>";
        $wiek= $_GET['wiek'];
        echo strtolower($wiek)."lat <br>";}
        else{echo "wypełnij wszystkie pola";}
    ?>
</body>
</html>