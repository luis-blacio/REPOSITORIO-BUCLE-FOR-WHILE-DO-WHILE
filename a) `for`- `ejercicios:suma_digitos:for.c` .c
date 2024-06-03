//# Taller de Programación en C 


//1.- Suma de digitos de un numero

//a) `for`: `ejercicios/suma_digitos/for.c` 

#include <stdio.h>
int main() {

    int numero, suma = 0, digitos = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Contar el número de dígitos del número
    for (int temp = numero; temp != 0; temp /= 10) {
        digitos++;
    }

    // Calcular la suma de los dígitos
    for (int i = 0; i < digitos; i++) {
        suma += (numero % 10);
        numero /= 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}

