<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>

    <?php
    if (!isset($_POST['person']) && (!empty($_POST['button']))) {
    echo <<< FORMCOUNTPERSON
      <h3>ilość osób w rodzinie</h3>
      <form  method="post">
      <input type="number" name="person" value=""placeholder="podaj ilość osób w rodzinie"><br><br>
      <input type="submit"  value="zatwierdź">
      </form>
    FORMCOUNTPERSON;
  }
    ?>
    <?php
    if (!empty($_POST['person'])) {
      echo  "<h3>ilość osób w rodzinie: $_POST[person]</h3>";
  //echo $_POST['person'];
  echo <<< FORMAGEPERSON
  <form  method="POST">
  FORMAGEPERSON;
  for ($i=1; $i <=$_POST['person'] ; $i++) {
    echo "<input type='number' name='wiek$i' value=''placeholder='podaj wiek osoby $i'><br><br>";
  }
  echo "<input type='submit' name='button1' value='oblicz średni wiek'";
    echo <<< FORMAGEPERSON
  <input type="submit"  value="zatwierdź">
  </form>
  FORMAGEPERSON;
}
if (isset($_POST['button1'])) {
print require '$_POST';
foreach ($_POST as $key => $value) {
echo '$key $value<br>';
if ($key!= button1) {
$age=$age=$value
}
  // code...
}

     ?>
  </body>
  //dodac wynik po 2 miejscach po przecinku header location i number format
</html>
