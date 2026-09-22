#include<stdio.h>

int main()
{
    float valor_raio;
    printf("Qual é a medida do Raio (em cm)? ");
    scanf("%f", &valor_raio);
    float valor_perimetro = 2*3.14159*valor_raio;
    printf("o perímetro da circunferência é %.2f cm.", valor_perimetro);
    return 0;

}
