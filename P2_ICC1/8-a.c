//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

int contaDigitos(int n, int d) {
    int *num = NULL, qtd = 0, count = 0, alg;
    //Transforma o numero em um array
    while (n >= 1) {
        alg = n % 10;
        n /= 10;
        num = realloc(num, sizeof(int) * (count + 1));
        num[count++] = alg;
    }
    for (int i = 0; i < count; i++) {
        if(d == num[i]){
            qtd += 1;
        }
    }
    return qtd;
}

int main() {
    int n, d, qtd;
    scanf("%d %d", &n, &d);
    qtd = contaDigitos(n, d);
    printf("\nQuantidade de vezes que o numero 'd' aparece em 'n': %d\n", qtd);
    return 0;
}
