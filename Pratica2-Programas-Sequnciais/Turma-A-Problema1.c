#include <stdio.h>
#include <math.h>


int main (){
    int popfinal, popinicial, tempo;
    float taxa, expoente;

    printf("Entre com a populacao inicial: ");
    scanf("%d", &popinicial);
    printf("Entre com o tempo em anos: ");
    scanf("%d", &tempo);
    printf("Entre com a taxa de crescimento (em porcento): ");
    scanf("%f", &taxa);

    taxa = taxa / 100;
    expoente = taxa * tempo;

    popfinal = popinicial * exp(expoente);

    printf("Apos %d anos, a populacao sera aproximadamente %d aliens!", tempo, popfinal);
    return 0;
}