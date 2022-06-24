//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

void contaDigitos(int n1, int n2) {
    int *num1 = NULL, *num2 = NULL, qtd = 0, count1 = 0, count2 = 0, alg, aux;
    //Transforma o numero 1 e o numero 2 em um vetor
    while (n1 >= 1) {
        alg = n1 % 10;
        n1 /= 10;
        num1 = realloc(num1, sizeof(int) * (count1 + 1));
        num1[count1++] = alg;
    }
    while (n2 >= 1) {
        alg = n2 % 10;
        n2 /= 10;
        num2 = realloc(num2, sizeof(int) * (count2 + 1));
        num2[count2++] = alg;
    }
    //Ordena os vetores dos numeros em ordem decrescente
    for(int i = 1; i < count1; i++){
        int j = i;
        while((j != 0) && (num1[j] > num1[j - 1])) {
            aux = num1[j];
            num1[j] = num1[j - 1];
            num1[j - 1] = aux;
            j--;
        }
    }
    for(int i = 1; i < count2; i++){
        int j = i;
        while((j != 0) && (num2[j] > num2[j - 1])) {
            aux = num2[j];
            num2[j] = num2[j - 1];
            num2[j - 1] = aux;
            j--;
        }
    }
    //Verifica se eh uma permutacao
    if(count1 == count2) {
        for(int i = 0; i < count1; i++) {
            if(num1[i] != num2[i]) {
                printf("\nNao eh uma permutacao!\n");
                break;
            } else if(i == (count1 - 1)) {
                printf("\nEh uma permutacao!\n");
            }
        }
    } else {
        printf("\nNao eh uma permutacao!\n");
    }
}

int main() {
    int n1, n2, qtd;
    scanf("%d %d", &n1, &n2);
    contaDigitos(n1, n2);
    return 0;
}
