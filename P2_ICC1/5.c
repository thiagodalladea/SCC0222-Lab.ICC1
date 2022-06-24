//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

void maiorElemento(int *v, int n, int *maior) {
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            *maior = v[i];
        }
        else {
            if(v[i] > *maior) {
                *maior = v[i];
            }
        }
    }
}

void lerVetor(int *v, int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

int main() {
    int *v, n, *maior;
    scanf("%d", &n);
    v = (int*) malloc(sizeof(int) * n);

    lerVetor(v, n);
    maiorElemento(v, n, &maior);
    printf("Maior numero do vetor: %d\n", maior);
    return 0;
}
