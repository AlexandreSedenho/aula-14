#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    float gravidade = 9.81;
    float tempo = sqrt(2 * altura / gravidade);
    return tempo;
}

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo_queda = calcular_tempo_queda(altura);
    float distancia = velocidade * tempo_queda;
    return distancia;
}

int main() {
    float altura, velocidade;
    printf("Digite a velocidade do avião em metros por segundo: ");
    scanf("%f", &velocidade);
    printf("Digite a altura do avião em metros: ");
    scanf("%f", &altura);

    float distancia_liberacao = calcular_distancia_liberacao(velocidade, altura);
    float tempo_queda = calcular_tempo_queda(altura);
    
    printf("Distância Liberação: %.2f\n", distancia_liberacao);
    printf("Tempo de Queda: %.2f\n", tempo_queda);
}