//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

int main () {
    int n, m, **matriz;
    scanf("%d", &n);
    scanf("%d", &m);
    //Alocacao dinamica
    matriz = malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(sizeof(int) * m);
    }

    return 0;
}
