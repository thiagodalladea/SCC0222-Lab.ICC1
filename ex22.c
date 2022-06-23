#include <stdio.h>
#include <stdlib.h>

void trocoMoedas(int valor, int *cem, int *cinq, int *vinte, int *dez, int *cinco, int *um) {
    *cem = (valor - (valor % 100)) / 100;
    valor -= *cem * 100;
    *cinq = (valor - (valor % 50)) / 50;
    valor -= *cinq * 50;
    *vinte = (valor - (valor % 25)) / 25;
    valor -= *vinte * 25;
    *dez = (valor - (valor % 10)) / 10;
    valor -= *dez * 10;
    *cinco = (valor - (valor % 5)) / 5;
    valor -= *cinco * 5;
    *um = valor;

}

int main() {
    int valor, cem = 0, cinq = 0, vinte = 0, dez = 0, cinco = 0, um = 0;
    scanf("%d", &valor);
    trocoMoedas(valor, &cem, &cinq, &vinte, &dez, &cinco, &um);

    printf("O valor consiste em %d moedas de 1 real\n", cem);
    printf("O valor consiste em %d moedas de 50 centavos\n", cinq);
    printf("O valor consiste em %d moedas de 25 centavos\n", vinte);
    printf("O valor consiste em %d moedas de 10 centavos\n", dez);
    printf("O valor consiste em %d moedas de 5 centavos\n", cinco);
    printf("O valor consiste em %d moedas de 1 centavo\n", um);

    return 0;
}
