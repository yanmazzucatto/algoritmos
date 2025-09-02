<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado - Avaliação Escolar</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 600px;
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
            padding: 20px;
            border-radius: 5px;
            margin: 20px 0;
            font-size: 18px;
            text-align: center;
        }
        .aprovado {
            background-color: #d4edda;
            color: #155724;
            border: 1px solid #c3e6cb;
        }
        .reprovado {
            background-color: #f8d7da;
            color: #721c24;
            border: 1px solid #f5c6cb;
        }
        .detalhes {
            background-color: #e9ecef;
            padding: 15px;
            border-radius: 5px;
            margin: 15px 0;
        }
        .nota-item {
            display: flex;
            justify-content: space-between;
            padding: 5px 0;
            border-bottom: 1px solid #ddd;
        }
        .nota-item:last-child {
            border-bottom: none;
        }
        .voltar {
            text-align: center;
            margin-top: 20px;
        }
        .voltar a {
            text-decoration: none;
            background-color: #6f42c1;
            color: white;
            padding: 10px 20px;
            border-radius: 5px;
        }
        .voltar a:hover {
            background-color: #5a32a3;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1> Resultado da Avaliação</h1>
        
        <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            $p1 = floatval($_POST['p1']);
            $ai1 = floatval($_POST['ai1']);
            $p2 = floatval($_POST['p2']);
            $ai2 = floatval($_POST['ai2']);
            $frequencia = floatval($_POST['frequencia']);
            
            // Validar se as notas estão no intervalo correto
            if ($p1 >= 0 && $p1 <= 10 && $ai1 >= 0 && $ai1 <= 10 && 
                $p2 >= 0 && $p2 <= 10 && $ai2 >= 0 && $ai2 <= 10 && 
                $frequencia >= 0 && $frequencia <= 100) {
                
                // Calcular média
                $media = (($p1 + $ai1) + ($p2 + $ai2)) / 2;
                
                // Determinar situação
                if ($media >= 6 && $frequencia >= 75) {
                    $situacao = "APROVADO";
                    $classe = "aprovado";
                    $emoji = "";
                    $mensagem = "Parabéns! Você foi aprovado!";
                } elseif ($media >= 6 && $frequencia < 75) {
                    $situacao = "REPROVADO POR FREQUÊNCIA";
                    $classe = "reprovado";
                    $emoji = "";
                    $mensagem = "Reprovado por frequência insuficiente.";
                } elseif ($media < 6 && $frequencia >= 75) {
                    $situacao = "REPROVADO POR NOTA";
                    $classe = "reprovado";
                    $emoji = "";
                    $mensagem = "Reprovado por média insuficiente.";
                } else {
                    $situacao = "REPROVADO POR NOTA E FREQUÊNCIA";
                    $classe = "reprovado";
                    $emoji = "";
                    $mensagem = "Reprovado por nota e frequência insuficientes.";
                }
                
                // Exibir detalhes
                echo "<div class='detalhes'>";
                echo "<h3>Detalhes das Avaliações:</h3>";
                echo "<div class='nota-item'><span>Primeira Prova (P1):</span><span>" . number_format($p1, 1, ',', '.') . "</span></div>";
                echo "<div class='nota-item'><span>Avaliação Interdisciplinar I:</span><span>" . number_format($ai1, 1, ',', '.') . "</span></div>";
                echo "<div class='nota-item'><span>Segunda Prova (P2):</span><span>" . number_format($p2, 1, ',', '.') . "</span></div>";
                echo "<div class='nota-item'><span>Avaliação Interdisciplinar II:</span><span>" . number_format($ai2, 1, ',', '.') . "</span></div>";
                echo "<div class='nota-item'><span><strong>Frequência:</strong></span><span><strong>" . number_format($frequencia, 1, ',', '.') . "%</strong></span></div>";
                echo "<div class='nota-item'><span><strong>Média Final:</strong></span><span><strong>" . number_format($media, 2, ',', '.') . "</strong></span></div>";
                echo "</div>";
                
                // Exibir resultado
                echo "<div class='resultado $classe'>";
                echo "$emoji <strong>$situacao</strong><br>";
                echo "$mensagem";
                echo "</div>";
                
            } else {
                echo "<div class='resultado reprovado'>";
                echo "❌ <strong>ERRO</strong><br>";
                echo "Valores inválidos! Verifique se as notas estão entre 0 e 10 e a frequência entre 0 e 100.";
                echo "</div>";
            }
        } else {
            echo "<div class='resultado reprovado'>Erro: Acesso inválido!</div>";
        }
        ?>
        
        <div class="voltar">
            <a href="avaliacao_escolar.html">← Nova Avaliação</a>
        </div>
    </div>
</body>
</html>