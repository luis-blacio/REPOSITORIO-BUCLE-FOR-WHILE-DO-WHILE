// b) `while`: `ejercicios/Potencia_Sumas/while.c`

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1, i = 0;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    while (i < exponente) {
        resultado += resultado * (base - 1);
        i++;
    }

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}