<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado - Calculadora de Combustível</title>
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
            font-weight: bold;
        }
        .alcool {
            background-color: #d4edda;
            color: #155724;
            border: 1px solid #c3e6cb;
        }
        .gasolina {
            background-color: #f8d7da;
            color: #721c24;
            border: 1px solid #f5c6cb;
        }
        .voltar {
            margin-top: 20px;
        }
        .voltar a {
            text-decoration: none;
            background-color: #007bff;
            color: white;
            padding: 10px 20px;
            border-radius: 5px;
        }
        .voltar a:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>🚗 Resultado da Análise</h1>
        
        <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            $alcool = floatval($_POST['alcool']);
            $gasolina = floatval($_POST['gasolina']);
            
            if ($alcool > 0 && $gasolina > 0) {
                $proporcao = $alcool / $gasolina;
                
                echo "<p><strong>Preço do Álcool:</strong> R\$ " . number_format($alcool, 2, ',', '.') . "</p>";
                echo "<p><strong>Preço da Gasolina:</strong> R\$ " . number_format($gasolina, 2, ',', '.') . "</p>";
                echo "<p><strong>Proporção:</strong> " . number_format($proporcao, 3, ',', '.') . "</p>";
                
                if ($proporcao < 0.7) {
                    echo "<div class='resultado alcool'>";
                    echo "🌱 <strong>RECOMENDAÇÃO: ÁLCOOL</strong><br>";
                    echo "O álcool é mais vantajoso!<br>";
                    echo "Economia estimada por litro: R\$ " . number_format(($gasolina * 0.7) - $alcool, 2, ',', '.');
                    echo "</div>";
                } else {
                    echo "<div class='resultado gasolina'>";
                    echo "⛽ <strong>RECOMENDAÇÃO: GASOLINA</strong><br>";
                    echo "A gasolina é mais vantajosa!<br>";
                    echo "Diferença por litro: R\$ " . number_format($alcool - ($gasolina * 0.7), 2, ',', '.');
                    echo "</div>";
                }
            } else {
                echo "<div class='resultado gasolina'>Erro: Valores inválidos!</div>";
            }
        } else {
            echo "<div class='resultado gasolina'>Erro: Acesso inválido!</div>";
        }
        ?>
        
        <div class="voltar">
            <a href="calculadora_combustivel.html">← Fazer Nova Consulta</a>
        </div>
    </div>
</body>
</html>