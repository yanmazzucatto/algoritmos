#include <stdio.h>

// Função para verificar se um número é perfeito
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

// Função para verificar se um número é triangular
int is_triangular(int n) {
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
        if (sum == n) {
            return 1; // É triangular
        }
    }
    return 0; // Não é triangular
}

// Função para calcular o dano
int calculate_damage(int value) {
    if (value < 0) {
        value = -value; // Pega o módulo se for negativo
    }
    
    if (is_perfect(value)) {
        printf("Combo: %d (Perfeito) -> Dano: %d\n", value, value * 3);
        return value * 3; // Multiplica por 3 se for perfeito
    } else if (is_triangular(value)) {
        printf("Combo: %d (Triangular) -> Dano: %d\n", value, value * 2);
        return value * 2; // Multiplica por 2 se for triangular
    } else {
        printf("Combo: %d -> Dano: %d\n", value, value); // Não altera o valor
        return value;
    }
}

int main() {
    int golpe, ryu_points, ken_points, ryu_rounds = 0, ken_rounds = 0;

    while (1) {
        ryu_points = 0;
        ken_points = 0;

        printf("Iniciando um novo round...\n");

        // Lê golpes de Ryu (valores positivos)
        while (1) {
            scanf("%d", &golpe);
            if (golpe == 0) {
                // Termina a luta
                if (ryu_rounds > ken_rounds) {
                    printf("Ryu venceu\n");
                } else if (ken_rounds > ryu_rounds) {
                    printf("Ken venceu\n");
                } else {
                    printf("empatou\n");
                }
                return 0;
            }
            if (golpe < 0) {
                break; // Sai do loop se for negativo
            }
            ryu_points += calculate_damage(golpe);
        }

        // Lê golpes de Ken (valores negativos)
        while (1) {
            ken_points += calculate_damage(golpe); // Usa o valor negativo
            if (golpe >= 0) {
                break; // Sai do loop se for positivo
            }
            scanf("%d", &golpe);
        }

        // Mostra os pontos totais de cada lutador no round
        printf("Ryu total de pontos: %d\n", ryu_points);
        printf("Ken total de pontos: %d\n", ken_points);

        // Determina o vencedor do round
        if (ryu_points > ken_points) {
            ryu_rounds++;
            printf("Ryu venceu o round %d!\n", ryu_rounds);
        } else if (ken_points > ryu_points) {
            ken_rounds++;
            printf("Ken venceu o round %d!\n", ken_rounds);
        } else {
            printf("Round %d empatou!\n", ryu_rounds + ken_rounds);
        }
    }

    return 0;
}
