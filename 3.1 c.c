//3.- Potencia mediante sumas sucesivas

// a) `for`: `ejercicios/Potencia_Sumas/for.c` 

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    for (int i = 0; i < exponente; i++) {
        resultado += resultado * (base - 1);
    }

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}