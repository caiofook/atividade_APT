#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Solicita ao usu�rio que digite o primeiro n�mero
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    // Solicita ao usu�rio que digite o segundo n�mero
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calcula a soma dos dois n�meros
    soma = num1 + num2;

    // Exibe o resultado da soma
    printf("A soma de %d e %d eh: %d\n", num1, num2, soma);

    return 0;
}
