#include <stdio.h>
#include <math.h>
#include <ctype.h>

int funcao(float x, char c)
{
    int soma = 0;
    int i = 0;

    if (c == 'L')
    {
        while(soma < x){
            soma += i;
            if (soma + i < x)
            i++;
        }
        return i;
    }
    else if (c == 'Q')
    {
        while(soma < x){
            soma += i * i;
            if (soma + (i * i) < x)
            i++;
        }
        return i;
}
    else
    return -1;
}

int main(){
    float x;
    int print;
    char c;

    printf("Entre o valor de x: \n");
    scanf("%f", &x);

    printf("Entre o indicador(L ou Q): \n");
    scanf(" %c", &c);

    c = toupper(c);
    x = floor(x);

    if (funcao(x, c) == -1)
    {
        printf("Indicador invalido!\n");
    }
    else
    {
        print = funcao(x, c);
        printf("%d\n", print);
    }
    return 0;
}
