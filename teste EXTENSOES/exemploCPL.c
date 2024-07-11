#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Solicita ao usuário que digite o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    // Solicita ao usuário que digite o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Exibe o resultado da soma
    printf("A soma de %d e %d eh: %d\n", num1, num2, soma);

    return 0;
}
