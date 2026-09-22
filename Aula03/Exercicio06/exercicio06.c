#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor, area_total, quant_caixa, custo;

    printf(" Qual é a largura da área (em metros)?");
    scanf("%f", &largura);
    printf("Qual é o comprimento da área em metros? ");
    scanf("%f", &comprimento);
    printf("Qual é o valor de cada caixa?");
    scanf("%f", &valor);

    area_total = largura*comprimento;
    quant_caixa = ceil(area_total/2.5);
    custo = quant_caixa*valor;

    printf("Área total a ser revestida: %.2f m² \n", area_total);
    printf("Quantidade de caixas necessárias: %.0f \n", quant_caixa);
    printf("Custo total da compra: R$ %.2f \n", custo);


    return 0;
}
