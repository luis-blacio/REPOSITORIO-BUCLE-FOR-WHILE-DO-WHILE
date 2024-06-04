// b) `while`: `ejercicios/Inverso_numero/while.c`

#include <stdio.h>
int main() {
    int num, inverso = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (num!= 0) {
        resto = num % 10;
        inverso = inverso * 10 + resto;
        num /= 10;
    }

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}
