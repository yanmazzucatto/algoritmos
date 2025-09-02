<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado - Conversor de Moedas</title>
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
        }
        .resultado {
            background-color: #d4edda;
            border: 1px solid #c3e6cb;
            padding: 20px;
            border-radius: 5px;
            margin: 20px 0;
        }
        .moeda {
            display: flex;
            justify-content: space-between;
            padding: 10px 0;
            border-bottom: 1px solid #eee;
        }
        .moeda:last-child {
            border-bottom: none;
        }
        .voltar {
            text-align: center;
            margin-top: 20px;
        }
        .voltar a {
            text-decoration: none;
            background-color: #28a745;
            color: white;
            padding: 10px 20px;
            border-radius: 5px;
        }
        .voltar a:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>💱 Resultado da Conversão</h1>
        
        <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            $valorReal = floatval($_POST['valor']);
            
            if ($valorReal > 0) {
                // Cotações (valores de exemplo - em aplicação real, buscar de API)
                $cotacoes = [
                    'USD' => 5.20,  // 1 USD = 5.20 BRL
                    'EUR' => 5.50,  // 1 EUR = 5.50 BRL
                    'GBP' => 6.30   // 1 GBP = 6.30 BRL
                ];
                
                echo "<div class='resultado'>";
                echo "<h3>Valor Original: R\$ " . number_format($valorReal, 2, ',', '.') . "</h3>";
                
                foreach ($cotacoes as $moeda => $cotacao) {
                    $valorConvertido = $valorReal / $cotacao;
                    $simbolos = [
                        'USD' => '$',
                        'EUR' => '€',
                        'GBP' => '£'
                    ];
                    
                    echo "<div class='moeda'>";
                    echo "<span><strong>$moeda:</strong></span>";
                    echo "<span>" . $simbolos[$moeda] . " " . number_format($valorConvertido, 2, '.', ',') . "</span>";
                    echo "</div>";
                }
                echo "</div>";
                
            } else {
                echo "<div class='resultado' style='background-color: #f8d7da; border-color: #f5c6cb;'>";
                echo "Erro: Por favor, insira um valor válido!";
                echo "</div>";
            }
        } else {
            echo "<div class='resultado' style='background-color: #f8d7da; border-color: #f5c6cb;'>";
            echo "Erro: Acesso inválido!";
            echo "</div>";
        }
        ?>
        
        <div class="voltar">
            <a href="conversor_moedas.html">← Nova Conversão</a>
        </div>
    </div>
</body>
</html>