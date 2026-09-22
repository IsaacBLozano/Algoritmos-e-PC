#include<stdio.h>
#include<locale.h>
int main(){

    int num, soma = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num > 0 && num%2 !=0)
            soma += num;

    } while(num>0);

    printf("A soma dos números ímpares é: %d\n\n", soma);


    return 0;
}
