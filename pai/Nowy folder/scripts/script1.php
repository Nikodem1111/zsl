<?php

  require_once '../functions/function1.php';
//echo  text();
if (!empty($_POST['name']) && !empty($_POST['color']) && !empty($_POST['nationality']))
{
echo "<br>";



echo 'imię bez poprawy: '.$_POST['name'].", długość: ".strlen($_POST['color']);
echo "<br>";
//echo 'imię:' name($_POST['name']);
$color=$_POST['color'];
//$e=$_POST['nationality'];
//$nationality=ucfirst(strtolower(ltrim($e)));
echo "<div style=\"color: $color\">";
echo 'imię: po poprawie:'.validatestring($_POST['name'], $_POST['lenght'],  $_POST['color'])."</div>";
echo 'narodowość: '.nationality($_POST['nationality']);
//echo $_POST['name'];

}
?>


</div>
