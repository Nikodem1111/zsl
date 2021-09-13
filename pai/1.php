<?php
echo 'zsł <br>';
echo 'zsł';

$name= "Janusz";
echo 'imie: $name<br>';
echo "imie: $name<br>";
//konkatentacja
echo "Janusz"."kowalski<br>";

//typy danych
//całkowity
$całkowita=10;
$bin=0b101;//5
$oct=011;//9
$hex=0x11;//17
echo $hex;
//zmiennoprzecinkowy
$x=10.5;
//logiczny
$prawda=true;
$fałsz=false;//w nazwach zmiennych nie używamy polskich znaków
echo $prawda;
echo $fałsz;//nic nie wyświetli;
//składnia heredoc
echo <<< 'E'
<hr>Twoje imię: "$name<br>"
Poznan<br>
ZSŁ
E;
$text= <<<'E'
<hr> Twoje imię: $name<br>
Poznań<br>
Zsł;

E;

echo $text;
$surname="nowak";
echo"\$name $surname"; //$name nowak

/*
postinkrementacja $x++
preinkrementacja ++$x
postdekremintacja  $x--
predenkremintacja --$x
*/
$x=2;
echo "<hr>$x";
echo ++$x;
echo $x++;
echo ++$x;

$x=1;
echo $x;//1
$x=$x++;
echo $x;//2
$x=++$x;
echo $x;//2
$y=++$x;
echo $x;//3
echo $y;//3
$y=$x++;
echo $x;//4
echo $y;//3



?>