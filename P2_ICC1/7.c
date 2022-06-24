//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

void ler_matriz(int **matriz, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void subtrai_matrizes(int **matriz1, int **matriz2, int n, int m) {
    printf("\nMatriz Resultante da Subtracao: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%4d ", (matriz1[i][j] - matriz2[i][j]));
        }
        printf("\n");
    }
    printf("\n");
}

void imprimir_matriz(int **matriz, int n, int m) {
    printf("\nMatriz: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void liberar_matriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        free (matriz[i]) ;
    }
    free(matriz) ;
}

int main() {
    int **matriz1, **matriz2, n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    //Alocacao dinamica
    matriz1 = malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        matriz1[i] = (int*) malloc(sizeof(int) * m);
    }
    matriz2 = malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        matriz2[i] = (int*) malloc(sizeof(int) * m);
    }
    //funcoes
    ler_matriz(matriz1, n, m);
    ler_matriz(matriz2, n, m);
    imprimir_matriz(matriz1, n, m);
    imprimir_matriz(matriz2, n, m);
    subtrai_matrizes(matriz1, matriz2, n, m);
    liberar_matriz(matriz1, n);
    liberar_matriz(matriz2, n);
    return 0;
}
