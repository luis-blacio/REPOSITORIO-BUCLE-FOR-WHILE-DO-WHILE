// c) `do while`: `ejercicios/Potencia_Sumas/do_while.c` 

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1, i = 0;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    do {
        resultado += resultado * (base - 1);
        i++;
    } while (i < exponente);

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}