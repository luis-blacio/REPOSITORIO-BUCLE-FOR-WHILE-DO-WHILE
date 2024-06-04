// b) `while`: `ejercicios/suma_digitos/while.c` 

#include <stdio.h>
int main() {
    int numero, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
