#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    float nota, soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        do {
            printf("\nDigite a nota do aluno (0-10): ");
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("Nota inválida!!! Tente outra vez!!\n");
            } else {
                soma += nota;
            }
        } while (nota < 0 || nota > 10);
    }

    media = soma / n;
    printf("\nMédia da turma: %.2f\n", media);

    return 0;
}
