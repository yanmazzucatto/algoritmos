<?php

echo "hello world";
$eu = "yan";
echo "ola eu sou o $eu";
echo "quem é voce? (nome)";
$voce = trim(fgets((STDIN)));
echo "prazer $voce";
echo "quantos anos voce tem? ";
$idade =(int) trim(fgets((STDIN)));
echo "nossa... faz aniversario em que mes?";
$mes = (int) trim(fgets((STDIN)));

if ($mes < 12 && $mes > 0) {
    if ($mes <=8){
    $dataNasc = 2025 - $idade;
    } else{
        $dataNasc = (2025 - $idade) - 1 ;
    }
    }
echo "vc nasceu em $dataNasc";
?>