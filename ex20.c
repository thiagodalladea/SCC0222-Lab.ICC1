#include<stdio.h>
int maior(int values[]) {
    int vMaior = 0;
    for(int i = 0; i < 10; i++) {
        if(vMaior < values[i]){
            vMaior = values[i];
        } else continue;
    }
    return vMaior;
}
int menor(int values[]) {
    int vMenor;
    for(int i = 0; i < 10; i++) {
        if(i == 0) {
            vMenor = values[0];
        }
        else if(vMenor > values[i]){
            vMenor = values[i];
        } else continue;
    }
    return vMenor;
}
float media(int values[]) {
    float vMedia = 0;
    for(int i = 0; i < 10; i++) {
        vMedia += values[i];
    }
    vMedia = vMedia/10;
    return vMedia;
}
int moda(int values[]) {
    int rep = 0, repAux = 0, vModa;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(i != j) {
                if(values[i] == values[j]) {
                    repAux++;
                }
            }
        }
        if(repAux > rep) {
            vModa = values[i];
            rep = repAux;
        }
        repAux = 0;
    }
    return vModa;
}
int main() {
    int values[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }
    printf("%d %d %.2f %d", maior(values), menor(values), media(values), moda(values));
    return 0;
}
