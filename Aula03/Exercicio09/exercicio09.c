#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float cod1_x, cod1_y, cod2_x, cod2_y, distancia;

    printf("Digite a coordenada x do 1º ponto: ");
    scanf("%f", &cod1_x);
    printf("Digite a coordenada y do 1º ponto: ");
    scanf("%f", &cod1_y);
    printf("Digite a coordenada x do 2º ponto: ");
    scanf("%f", &cod2_x);
    printf("Digite a coordenada y do 2º ponto: ");
    scanf("%f", &cod2_y);

    distancia = sqrt((pow(cod2_x-cod1_x, 2))+(pow(cod2_y - cod1_y, 2)));

    printf("A distância entre os pontos é %.2f.", distancia);

    return 0;
}
