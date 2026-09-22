#include <stdio.h>

int main() {
    int conta, senha;
    int tentativas;
    int sistema_ativo = 1;

    while (sistema_ativo) {
        tentativas = 0;
        int acesso_concedido = 0;

        printf("===================================\n");
        printf("        TERMINAL DE ATENDIMENTO     \n");
        printf("   (Digite 0 na conta para desligar) \n");
        printf("===================================\n");

        do {
            printf("Conta: ");
            scanf("%d", &conta);

            if (conta == 0) {
                printf("Desligando o terminal...\n");
                sistema_ativo = 0;
                break;
            }

            printf("Senha: ");
            scanf("%d", &senha);

            tentativas++;

            if (conta == 12345 && senha == 123) {
                printf("\nSaida:\nAcesso autorizado.\n\n");
                acesso_concedido = 1;
                break;
            } else {
                if (tentativas < 3) {
                    printf("\nCredenciais incorretas. Tentativa %d de 3.\n\n", tentativas);
                }
            }

        } while (tentativas < 3);

        if (acesso_concedido == 0 && sistema_ativo == 1) {
            printf("\nSaida:\nAcesso bloqueado.\n\n");
        }
    }

    return 0;
}
