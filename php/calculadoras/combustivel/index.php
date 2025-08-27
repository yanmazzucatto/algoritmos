<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora de Combustível - Qual Vale Mais a Pena?</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #000;
            min-height: 100vh;
            padding: 20px;
        }

        .container {
            max-width: 800px;
            margin: 0 auto;
            background: rgba(255, 255, 255, 0.95);
            border-radius: 20px;
            box-shadow: 0 20px 40px rgba(0, 0, 0, 0.1);
            overflow: hidden;
            backdrop-filter: blur(10px);
        }

        .header {
            background: linear-gradient(135deg, #1a1919ff, #ee5a24);
            color: white;
            text-align: center;
            padding: 30px 20px;
        }

        .header h1 {
            font-size: 2.2em;
            margin-bottom: 10px;
            font-weight: 700;
        }

        .header p {
            font-size: 1.1em;
            opacity: 0.9;
        }

        .form-container {
            padding: 40px 30px;
        }

        .form-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 25px;
            margin-bottom: 30px;
        }

        .fuel-card {
            background: #f8f9fa;
            border: 2px solid #e9ecef;
            border-radius: 15px;
            padding: 25px;
            transition: all 0.3s ease;
            position: relative;
            overflow: hidden;
        }

        .fuel-card::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            height: 4px;
            background: linear-gradient(90deg, #ff6b6b, #ee5a24);
            transform: translateX(-100%);
            transition: transform 0.3s ease;
        }

        .fuel-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 15px 30px rgba(0, 0, 0, 0.1);
        }

        .fuel-card:hover::before {
            transform: translateX(0);
        }

        .fuel-card h3 {
            color: #2c3e50;
            margin-bottom: 15px;
            font-size: 1.3em;
            display: flex;
            align-items: center;
            gap: 10px;
        }

        .fuel-icon {
            width: 30px;
            height: 30px;
            border-radius: 50%;
            display: inline-flex;
            align-items: center;
            justify-content: center;
            font-size: 16px;
        }

        .etanol { background: #27ae60; color: white; }
        .gasolina { background: #f39c12; color: white; }
        .aditivada { background: #9b59b6; color: white; }

        .input-group {
            margin-bottom: 15px;
        }

        .input-group label {
            display: block;
            margin-bottom: 8px;
            font-weight: 600;
            color: #34495e;
            font-size: 0.95em;
        }

        .input-group input {
            width: 100%;
            padding: 12px 15px;
            border: 2px solid #e1e8ed;
            border-radius: 10px;
            font-size: 16px;
            transition: all 0.3s ease;
            background: white;
        }

        .input-group input:focus {
            outline: none;
            border-color: #667eea;
            box-shadow: 0 0 0 3px rgba(102, 126, 234, 0.1);
        }

        .calculate-btn {
            width: 100%;
            padding: 18px;
            background: linear-gradient(135deg, #262222ff, #764ba2);
            color: white;
            border: none;
            border-radius: 12px;
            font-size: 18px;
            font-weight: 700;
            cursor: pointer;
            transition: all 0.3s ease;
            text-transform: uppercase;
            letter-spacing: 1px;
            margin: 30px 0;
        }

        .calculate-btn:hover {
            transform: translateY(-2px);
            box-shadow: 0 10px 25px rgba(102, 126, 234, 0.3);
        }

        .calculate-btn:active {
            transform: translateY(0);
        }

        .results {
            margin-top: 30px;
            padding: 30px;
            background: #f8f9fa;
            border-radius: 15px;
            border-left: 5px solid #27ae60;
        }

        .results h2 {
            color: #2c3e50;
            margin-bottom: 25px;
            text-align: center;
            font-size: 1.8em;
        }

        .result-item {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 15px 20px;
            margin-bottom: 15px;
            background: white;
            border-radius: 10px;
            box-shadow: 0 3px 10px rgba(0, 0, 0, 0.05);
            transition: transform 0.2s ease;
        }

        .result-item:hover {
            transform: translateX(5px);
        }

        .result-item.best {
            background: linear-gradient(135deg, #27ae60, #2ed573);
            color: white;
            font-weight: bold;
            transform: scale(1.02);
            box-shadow: 0 8px 25px rgba(39, 174, 96, 0.3);
        }

        .result-item.best .result-name::after {
            content: ' 🏆';
        }

        .result-name {
            font-weight: 600;
            font-size: 1.1em;
        }

        .result-value {
            font-size: 1.2em;
            font-weight: 700;
        }

        .info-box {
            background: #e3f2fd;
            border: 1px solid #bbdefb;
            border-radius: 10px;
            padding: 20px;
            margin-top: 25px;
        }

        .info-box h3 {
            color: #1976d2;
            margin-bottom: 10px;
        }

        .info-box p {
            color: #424242;
            line-height: 1.6;
        }

        @media (max-width: 768px) {
            .form-grid {
                grid-template-columns: 1fr;
            }
            
            .header h1 {
                font-size: 1.8em;
            }
            
            .form-container {
                padding: 30px 20px;
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>⛽ Calculadora de Combustível</h1>
            <p>Descubra qual combustível vale mais a pena para seu carro!</p>
        </div>

        <div class="form-container">
            <form method="POST" action="">
                <div class="form-grid">
                    <div class="fuel-card">
                        <h3><span class="fuel-icon etanol">🌱</span>Etanol</h3>
                        <div class="input-group">
                            <label for="etanol_preco">Preço por litro (R$)</label>
                            <input type="number" step="0.01" name="etanol_preco" id="etanol_preco" 
                                   value="<?php echo isset($_POST['etanol_preco']) ? $_POST['etanol_preco'] : ''; ?>" 
                                   placeholder="Ex: 3.50">
                        </div>
                        <div class="input-group">
                            <label for="etanol_rendimento">Rendimento (km/l)</label>
                            <input type="number" step="0.1" name="etanol_rendimento" id="etanol_rendimento" 
                                   value="<?php echo isset($_POST['etanol_rendimento']) ? $_POST['etanol_rendimento'] : '7.5'; ?>" 
                                   placeholder="Ex: 7.5">
                        </div>
                    </div>

                    <div class="fuel-card">
                        <h3><span class="fuel-icon gasolina">⛽</span>Gasolina Comum</h3>
                        <div class="input-group">
                            <label for="gasolina_preco">Preço por litro (R$)</label>
                            <input type="number" step="0.01" name="gasolina_preco" id="gasolina_preco" 
                                   value="<?php echo isset($_POST['gasolina_preco']) ? $_POST['gasolina_preco'] : ''; ?>" 
                                   placeholder="Ex: 5.20">
                        </div>
                        <div class="input-group">
                            <label for="gasolina_rendimento">Rendimento (km/l)</label>
                            <input type="number" step="0.1" name="gasolina_rendimento" id="gasolina_rendimento" 
                                   value="<?php echo isset($_POST['gasolina_rendimento']) ? $_POST['gasolina_rendimento'] : '12.0'; ?>" 
                                   placeholder="Ex: 12.0">
                        </div>
                    </div>

                    <div class="fuel-card">
                        <h3><span class="fuel-icon aditivada">💎</span>Gasolina Aditivada</h3>
                        <div class="input-group">
                            <label for="aditivada_preco">Preço por litro (R$)</label>
                            <input type="number" step="0.01" name="aditivada_preco" id="aditivada_preco" 
                                   value="<?php echo isset($_POST['aditivada_preco']) ? $_POST['aditivada_preco'] : ''; ?>" 
                                   placeholder="Ex: 5.50">
                        </div>
                        <div class="input-group">
                            <label for="aditivada_rendimento">Rendimento (km/l)</label>
                            <input type="number" step="0.1" name="aditivada_rendimento" id="aditivada_rendimento" 
                                   value="<?php echo isset($_POST['aditivada_rendimento']) ? $_POST['aditivada_rendimento'] : '12.5'; ?>" 
                                   placeholder="Ex: 12.5">
                        </div>
                    </div>
                </div>

                <button type="submit" name="calcular" class="calculate-btn">
                    Calcular Melhor Opção
                </button>
            </form>

            <?php
            if (isset($_POST['calcular'])) {
                $etanol_preco = floatval($_POST['etanol_preco']);
                $etanol_rendimento = floatval($_POST['etanol_rendimento']);
                $gasolina_preco = floatval($_POST['gasolina_preco']);
                $gasolina_rendimento = floatval($_POST['gasolina_rendimento']);
                $aditivada_preco = floatval($_POST['aditivada_preco']);
                $aditivada_rendimento = floatval($_POST['aditivada_rendimento']);

                $combustiveis = array();

                if ($etanol_preco > 0 && $etanol_rendimento > 0) {
                    $custo_etanol = $etanol_preco / $etanol_rendimento;
                    $combustiveis['Etanol'] = $custo_etanol;
                }

                if ($gasolina_preco > 0 && $gasolina_rendimento > 0) {
                    $custo_gasolina = $gasolina_preco / $gasolina_rendimento;
                    $combustiveis['Gasolina Comum'] = $custo_gasolina;
                }

                if ($aditivada_preco > 0 && $aditivada_rendimento > 0) {
                    $custo_aditivada = $aditivada_preco / $aditivada_rendimento;
                    $combustiveis['Gasolina Aditivada'] = $custo_aditivada;
                }

                if (!empty($combustiveis)) {
                    asort($combustiveis);
                    $melhor_opcao = array_keys($combustiveis)[0];
                    
                    echo '<div class="results">';
                    echo '<h2>🎯 Resultados do Cálculo</h2>';
                    
                    $posicao = 1;
                    foreach ($combustiveis as $nome => $custo) {
                        $class = ($nome == $melhor_opcao) ? 'result-item best' : 'result-item';
                        echo '<div class="' . $class . '">';
                        echo '<span class="result-name">' . $posicao . 'º - ' . $nome . '</span>';
                        echo '<span class="result-value">R$ ' . number_format($custo, 3, ',', '.') . ' por km</span>';
                        echo '</div>';
                        $posicao++;
                    }
                    
                    echo '</div>';
                    
                    // Cálculo da regra dos 70%
                    if (isset($combustiveis['Etanol']) && isset($combustiveis['Gasolina Comum'])) {
                        $proporcao = ($etanol_preco / $gasolina_preco) * 100;
                        echo '<div class="info-box">';
                        echo '<h3>📊 Análise Adicional - Regra dos 70%</h3>';
                        echo '<p><strong>Proporção atual:</strong> O etanol está custando ' . number_format($proporcao, 1) . '% do preço da gasolina.</p>';
                        
                        if ($proporcao <= 70) {
                            echo '<p><strong>✅ Recomendação:</strong> Pela regra tradicional dos 70%, o etanol seria vantajoso. ';
                            echo 'Porém, nosso cálculo considera o rendimento específico do seu veículo para maior precisão.</p>';
                        } else {
                            echo '<p><strong>⚠️ Recomendação:</strong> Pela regra dos 70%, a gasolina seria mais vantajosa. ';
                            echo 'Mas lembre-se que nosso cálculo personalizado considera o rendimento real do seu carro.</p>';
                        }
                        echo '</div>';
                    }
                } else {
                    echo '<div class="results">';
                    echo '<h2>❌ Erro</h2>';
                    echo '<p style="text-align: center; color: #e74c3c;">Por favor, preencha pelo menos um combustível com preço e rendimento válidos.</p>';
                    echo '</div>';
                }
            }

            ?>

            
        </div>
    </div>

    <script>
        // Adicionar animação aos cards quando carregarem
        document.addEventListener('DOMContentLoaded', function() {
            const cards = document.querySelectorAll('.fuel-card');
            cards.forEach((card, index) => {
                card.style.opacity = '0';
                card.style.transform = 'translateY(20px)';
                
                setTimeout(() => {
                    card.style.transition = 'all 0.6s ease';
                    card.style.opacity = '1';
                    card.style.transform = 'translateY(0)';
                }, index * 200);
            });
        });

        // Validação em tempo real
        const inputs = document.querySelectorAll('input[type="number"]');
        inputs.forEach(input => {
            input.addEventListener('input', function() {
                if (this.value < 0) {
                    this.value = 0;
                }
            });
        });

        // Auto-scroll para resultados
        function scrollToResults() {
    // Focus no resultado quando aparecer
        const resultContainer = document.querySelector('.results');
            if (resultContainer) {
                setTimeout(() => {
                    resultContainer.scrollIntoView({ behavior: 'smooth', block: 'center' });
                }, 300);
            }
}
    </script>
</body>
</html>