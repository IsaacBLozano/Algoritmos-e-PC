#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float v_inicial, angulo, alcance, radiano;

    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &v_inicial);
    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &angulo);

    radiano = (angulo*3.14)/ 180;

    alcance = ((pow(v_inicial, 2))* (sin(2*radiano)))/9.8;

    printf("O alcance horizontal estimado é %.2f metros.", alcance);



    return 0;
}
