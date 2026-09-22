#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int horas, min, total_min;

    printf("Hora? ");
    scanf("%d", &horas);
    printf("Minutos? ");
    scanf("%d", &min);


    total_min = (horas*60)+min;

    printf("Já se passaram %d minutos desde o início do dia.", total_min);


    return 0;
}
