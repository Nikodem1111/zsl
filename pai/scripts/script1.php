<?php
if (!empty($_POST['name'])) {
  require_once '../functions/function1.php';
//echo  text();

//echo 'imię:' name($_POST['name']);
echo 'imię: '.validatestring($_POST['name'], $_POST['lenght'] ).'<br><br>';
//echo $_POST['name'];
}
?>
