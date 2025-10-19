#include <stdio.h>
#include <math.h>

int main(){
    float raio, perimetro, area, lado;

    printf("Entre com um valor para o raio: ");
    scanf("%f", &raio);

    lado = (2 * raio) / pow(2, 1/2);

    area = 2 * raio * raio;
    perimetro = 4 * pow(area, 1.0/2.0);


    printf("Perimetro do maior quadrado: %.2f\n", perimetro);
    printf("Area do maior quadrado: %.2f\n", area);


}