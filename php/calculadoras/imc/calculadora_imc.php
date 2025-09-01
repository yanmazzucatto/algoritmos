<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado - Calculadora de IMC</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 500px;
            margin: 50px auto;
            padding: 20px;
            background-color: #f5f5f5;
        }
        .container {
            background: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
            text-align: center;
        }
        .resultado {
            padding: 20px;
            border-radius: 5px;
            margin: 20px 0;
            font-size: 18px;
        }
        .baixo-peso { background-color: #cce5ff; border: 1px solid #99ccff; }
        .normal { background-color: #d4edda; border: 1px solid #c3e6cb; }
        .sobrepeso { background-color: #fff3cd; border: 1px solid #ffeaa7; }
        .obesidade { background-color: #f8d7da; border: 1px solid #f5c6cb; }
        .tabela {
            margin: 20px 0;
            font-size: 14px;
            text-align: left;
        }
        .voltar {
            margin-top: 20px;
        }
        .voltar a {
            text-decoration: none;
            background-color: #17a2b8;
            color: white;
            padding: 10px 20px;
            border-radius: 5px;
        }
        .voltar a:hover {
            background-color: #138496;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>⚖️ Resultado do IMC</h1>
        
        <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            $peso = floatval($_POST['peso']);
            $altura = floatval($_POST['altura']);
            
            if ($peso > 0 && $altura > 0) {
                $imc = $peso / ($altura * $altura);
                
                // Determinar classificação
                if ($imc < 18.5) {
                    $classificacao = "Baixo peso";
                    $classe = "baixo-peso";
                    $emoji = "⚠️";
                } elseif ($imc >= 18.5 && $imc < 25) {
                    $classificacao = "Peso normal";
                    $classe = "normal";
                    $emoji = "✅";
                } elseif ($imc >= 25 && $imc < 30) {
                    $classificacao = "Sobrepeso";
                    $classe = "sobrepeso";
                    $emoji = "⚠️";
                } else {
                    $classificacao = "Obesidade";
                    $classe = "obesidade";
                    $emoji = "🚨";
                }
                
                echo "<p><strong>Peso:</strong> " . number_format($peso, 1, ',', '.') . " kg</p>";
                echo "<p><strong>Altura:</strong> " . number_format($altura, 2, ',', '.') . " m</p>";
                
                echo "<div class='resultado $classe'>";
                echo "$emoji <strong>IMC: " . number_format($imc, 2, ',', '.') . "</strong><br>";
                echo "<strong>Classificação: $classificacao</strong>";
                echo "</div>";
                
                // Tabela de referência
                echo "<div class='tabela'>";
                echo "<strong>Tabela de Referência:</strong><br>";
                echo "• Baixo peso: IMC < 18,5<br>";
                echo "• Peso normal: IMC 18,5 - 24,9<br>";
                echo "• Sobrepeso: IMC 25,0 - 29,9<br>";
                echo "• Obesidade: IMC ≥ 30,0";
                echo "</div>";
                
            } else {
                echo "<div class='resultado obesidade'>Erro: Valores inválidos!</div>";
            }
        } else {
            echo "<div class='resultado obesidade'>Erro: Acesso inválido!</div>";
        }
        ?>
        
        <div class="voltar">
            <a href="calculadora_imc.html">← Novo Cálculo</a>
        </div>
    </div>
</body>
</html>