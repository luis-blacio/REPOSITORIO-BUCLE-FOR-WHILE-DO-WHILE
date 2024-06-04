//2.- Inverso de un número

// a) `for`: `ejercicios/Inverso_numero/for.c` 

#include <stdio.h>
int main() {
    int num, inverso = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (; num!= 0; num /= 10) {
        resto = num % 10;
        inverso = inverso * 10 + resto;
    }

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}