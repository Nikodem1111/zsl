<?php
echo PHP_VERSION; //7.4.82
echo 2**10,"<br>";
$x=1;
$y=10;
echo $x<=>$y;
//równe identyczne
$x=1;
$y=1.0;
echo gettype($x);//integer
echo gettype($y);//double
if ($x==$y) {
  echo "równe";
}else {
  echo "różne";
}
?>