#include <stdio.h>

int mdc(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    int resultado = mdc(num1, num2);
    printf("O MDC de %d e %d eh: %d\n", num1, num2, resultado);
    if (resultado == 1) {
        printf("Resultado: %d => ACEITO!", resultado);
    } else {
        printf("Resultado: %d => REJEITADO!", resultado);
    }
    return 0;
}
