//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int n, m, **matriz;
    scanf("%d", &n);
    scanf("%d", &m);
    //Alocacao dinamica
    matriz = malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(sizeof(int) * m);
    }
    //Definicao de numeros aleatorios
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matriz[i][j] = (rand() % 1000);
        }
    }

    return 0;
}
