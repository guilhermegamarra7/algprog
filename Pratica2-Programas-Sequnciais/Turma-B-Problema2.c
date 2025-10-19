#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    float raio, altura, superficie;

    printf("Entre com o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Entre com a altura do cilindro: ");
    scanf("%f", &altura);

    superficie = 2 * M_PI * raio * raio + 2 * M_PI * raio * altura;

    printf("A area da superficie do cilindro eh: %.2f", superficie);
    return 0;

}