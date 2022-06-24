//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

#define TAMANHO_A 5
#define TAMANHO_B 5
#define TAMANHO_C 10

void mesclaVetores(int A[], int B[], int C[]) {
    int ia = 0, ib = 0;
    for(int i = 0; i < TAMANHO_C; i++) {
        if(A[ia] <= B[ib]) {
            if(ia == TAMANHO_A) {
                C[i] = B[ib++];
            } else {
                C[i] = A[ia++];
            }
        } else {
            if(ib == TAMANHO_B) {
                C[i] = A[ia++];
            } else {
                C[i] = B[ib++];
            }
        }
    }
    if(A[TAMANHO_A - 1] >= B[TAMANHO_B - 1]) {
        C[TAMANHO_C - 1] = A[TAMANHO_A - 1];
    } else {
        C[TAMANHO_C - 1] = B[TAMANHO_B - 1];
    }
}

int main() {
    int A[TAMANHO_A], B[TAMANHO_B], C[TAMANHO_C];
    for(int i = 0; i < TAMANHO_A; i++) {
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < TAMANHO_B; i++) {
        scanf("%d", &B[i]);
    }
    mesclaVetores(A, B, C);
    printf("\nVetor mesclado:\n");
    for(int i = 0; i < TAMANHO_C; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
