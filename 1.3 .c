// c) `do while`: `ejercicios/suma_digitos/do_while.c` 

#include <stdio.h>
int main() {
    int numero, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    do {
        suma += (numero % 10);
        numero /= 10;
    } while (numero != 0);

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}