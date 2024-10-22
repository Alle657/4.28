#include <stdio.h>

int main() {
    int i;
    float numero, massimo;


    printf("Inserisci il numero 1: ");
    scanf("%f", &numero);
    massimo = numero;


    for (i = 2; i <= 10; i++) {
        printf("Inserisci il numero %d: ", i);
        scanf("%f", &numero);


        if (numero > massimo) {
            massimo = numero;
        }
    }


    printf("Il numero massimo è: %.2f\n", massimo);

    return 0;
}
