#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float  comprimento, largura;


    printf("Qual é a medida do comprimento (em m)? ");
    scanf("%f", &comprimento);
    printf("Qual é a largura do jardim ? ");
    scanf("%f", &largura);
    float perimetro = 2*comprimento+2*largura;
    float area = comprimento*largura;

    printf("Perímetro do jardim: %.2f m \n", perimetro);
    printf("Área do Jardim: %.2f m", area);

    return 0;

}
