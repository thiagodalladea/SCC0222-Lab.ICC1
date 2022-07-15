#include <stdio.h>
#include <stdlib.h>

int main() {
    int type, count = 0, aux, enemy, bestAtack, atackInd;
    int *atack = malloc(0);
    scanf("%d", &type);
    float multAtack[type][type], damAtack = 0,atackVal, atackMult;

    for(int i = 0; i < type; i++) {
        for(int j = 0; j < type; j++) {
            scanf("%f", &multAtack[i][j]);
        }
    }
    while(1) {
        scanf("%d", &aux);
        if(aux == -1) {
            break;
        }
        atack = realloc(atack, (int)sizeof(int) * (count*2 + 2));
        atack[count*2] = aux;
        scanf("%d", &atack[count*2 + 1]);
        count += 1;
    }

    scanf("%d", &enemy);

    for(int i = 0; i < count; i++) {
        atackInd = atack[i*2 + 1];
        atackVal = (float)atack[i*2];
        atackMult =  atackVal * (multAtack[atackInd][enemy]);
        if(atackMult > damAtack) {
            bestAtack = i;
            damAtack = atackMult;
        }
    }
    printf("O melhor ataque possui indice %d e dano %.2f\n", bestAtack, damAtack);
    free(atack);

    return 0;
}
