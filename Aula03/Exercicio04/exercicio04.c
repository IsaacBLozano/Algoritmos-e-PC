#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float pont, hora_fun;

    printf(" Potência do equipamento (W)? ");
    scanf("%f", &pont);
    printf("Horas de uso por dia?");
    scanf("%f", &hora_fun);

    float consumo = (pont*hora_fun*30)/1000;

    printf("Consumo mensal: %.2f", consumo);



    return 0;
}
