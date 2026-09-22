#include<stdio.h>
#include<locale.h>
int main(){

    long long cpf;
    float preco = -1, total = 0;

    printf("Digite o seu CPF (somente números): ");
    scanf("%lld", &cpf);

    while( preco != 0){
        printf("Preço: ");
        scanf("%f", &preco);

        total += preco;

    }

    printf("CPF: %011lld", cpf);
    printf("\nTotal da compra: R$ %.2f", total);

    return 0;
}
