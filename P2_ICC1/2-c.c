//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menorNum(int **matriz, int n, int m) {
    int menor = 1001, lin, col;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matriz[i][j] <= menor) {
                menor = matriz[i][j];
                lin = i;
                col = j;
            }
        }
    }
    printf("O menor numero eh: %d\nEle se encontra na linha: %d e coluna: %d\n\n", menor, lin, col);
}

void maiorNum(int **matriz, int n, int m) {
    int maior = -1, lin, col;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matriz[i][j] >= maior) {
                maior = matriz[i][j];
                lin = i;
                col = j;
            }
        }
    }
    printf("O maior numero eh: %d\nEle se encontra na linha: %d e coluna: %d\n\n", maior, lin, col);
}

int main () {
    int n, m, **matriz;
    scanf("%d", &n);
    scanf("%d", &m);
    //Alocacao dinamica
    matriz = malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(sizeof(int) * m);
    }
    //Definicao de numeros aleatorios
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matriz[i][j] = (rand() % 1000);
        }
    }
    //Apresenta a matriz completa
    printf("Matriz completa:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //Funcao para mostrar o menor numero, sua linha e sua coluna
    menorNum(matriz, n, m);
    //Funcao para mostrar o maior numero, sua linha e sua coluna
    maiorNum(matriz, n, m);
    return 0;
}
