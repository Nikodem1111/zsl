<?php
function text(){
  return "test";
}
function name($name){
  return $name;
}
//zamieni 1litere na duza reszta mała i białe znaki usunąc
function validatestring ($string, $length, $color){
  $a= substr(ucfirst(strtolower(ltrim($string))), 0, $length);

  return $a;
}
function nationality ($nationality){
  $b= ucfirst(strtolower(ltrim($nationality)));

  return $b;
}
 ?>
