#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Digite seu peso(kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso/ (pow(altura, 2));

    if ( imc < 20){
        printf("Você está abaixo do peso");
    }
    else if (imc < 25){
        printf("Você está com o peso normal.");
    }
    else if (imc < 30){
        printf("você está Sobrepeso");
    }
    else if (imc<40){
        printf("você está OBESO!!!!!!!");
    }
    else {
        printf("Você è um OBESO MÓRBIDO!!!!");
    }
    return 0;
}
