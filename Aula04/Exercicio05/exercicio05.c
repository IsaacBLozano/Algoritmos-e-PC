#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_CTYPE, "");
    float valor_a, valor_b, valor_c, delta, raiz01, raiz02;

    printf("Digite o valor de a:");
    scanf("%f", &valor_a);
    printf("Digite o valor de b:");
    scanf("%f", &valor_b);
    printf("Digite o valor de c:");
    scanf("%f", &valor_c);

    delta = valor_b*valor_b - 4*valor_a*valor_c;

    if(delta >= 0){

        raiz01 = (-valor_b + sqrt(delta)) / (2*valor_a);

        raiz02 = (-valor_b - sqrt(delta)) / (2*valor_a);

        printf("Raizes da equação:\nX1= %.2f \nX2=%.2f ", raiz01, raiz02);

    }
    else


    return 1;
}
