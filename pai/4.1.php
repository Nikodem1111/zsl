<?php
$text =<<<T
ZSŁ-Zespół szkół łączności
T;
echo "$text <br>";
echo nl2br($text).'<hr>';
$name="JaNusz koWALSKI";
//zmiana liter na małe
echo strtolower($name)."<br>";
// zamiana na duże
echo strtoupper($name)."<br>";
//pierwsza litera na duża
echo ucfirst($name)."<br>";
//zamiana wszystkie pierwsze litery na duże
echo ucwords($name)."<br>";
$lorem="Lorem ipsum dolor, sit amet consectetur adipisicing elit. Optio distinctio voluptate laboriosam facere quasi. Ea reprehenderit dignissimos inventore fuga. Ullam corporis reiciendis quos impedit facere voluptate inventore quod odit magni.";
echo "<hr>$lorem<hr>";
$col=wordwrap($lorem, 30, "<br>");
echo $col;
//$col=wordwrap($lorem, 30, "<hr>");
//echo $col;

//czyszczenie zawartości bufora
ob_clean();
//usuwanie białych znaków
$name="Janusz";
$name1=" Janusz ";
echo "Długość"\$name: ".strlen($name).<br>";
echo "Długość"\$name1: ".strlen($name1).<br>";
echo "Długość"\$name1: ".strlen(ltrim($name1)).<br>";
echo ltrim($name1)."<br>";
echo "Długość"\$name: ".strlen(ltrim($name1)).<br>";
echo ltrim($name)."<br>";
echo strstr("janusz.kowalski@gmail.com","@");
echo strstr("janusz.kowalski@gmail.com","G");
$name="Janusz"
echo substr($name,2);
echo substr($name,2,3);
echo substr($name,-2);
echo substr($name,-2,3);
echo strstr("janusz.kowalski@gmail.com","@",1);

?>