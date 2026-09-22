#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    float n1, n2, media;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);

    printf("Digite a segunda nota:");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if(media >= 6){
        printf("Parabéns! Você foi aprovado com média %.1f", media);
        return 0;
    }else  {
        printf("você está de exame com média %.2f", media);
        return 0;
    }
    printf("Você foi reprovado");

    return 0;

}
