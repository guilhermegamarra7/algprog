#include <stdio.h>
#include <math.h>

int main(){
    int largura, comprimento, potencia;
    float lampadas;

    printf("Entre com a largura e o comprimento do quarto (cm): ");
    scanf("%d%d", &largura, &comprimento);
    printf("Entre com a potencia das lampadas: ");
    scanf("%d", &potencia);

    lampadas = ceil((16.0 * largura * comprimento / 10000.0) / (1.0 * potencia));

    printf("Numero de lampadas: %.0f", lampadas);
    return 0;

}