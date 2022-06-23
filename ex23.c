#include <stdio.h>
#include <string.h>
#define linha 32
#define coluna 64

char matrizAtual[linha+2][coluna+2];

void simuPart() {
    char matrizNova[linha+2][coluna+2];
    char temp;
    for(int i = 0; i < linha+2; i++){
        strcpy(matrizNova[i], matrizAtual[i]);
    }
    for(int i = 1; i < linha+1; i++) {
        for(int j = 1; j < coluna+1; j++) {
            switch(matrizAtual[i][j]) {
                case '#':
                    if(matrizAtual[i+1][j] == '~' || matrizAtual[i+1][j] == ' ') {
                        temp = matrizNova[i+1][j];
                        matrizNova[i+1][j] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i+1][j-1] == '~' || matrizAtual[i+1][j-1] == ' ') {
                        temp = matrizNova[i+1][j-1];
                        matrizNova[i+1][j-1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i+1][j+1] == '~' || matrizAtual[i+1][j+1] == ' ') {
                        temp = matrizNova[i+1][j+1];
                        matrizNova[i+1][j+1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    break;
                case '~':
                    if(matrizAtual[i+1][j] == ' ') {
                        temp = matrizNova[i+1][j];
                        matrizNova[i+1][j] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i+1][j-1] == ' ') {
                        temp = matrizNova[i+1][j-1];
                        matrizNova[i+1][j-1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i+1][j+1] == ' ') {
                        temp = matrizNova[i+1][j+1];
                        matrizNova[i+1][j+1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i][j-1] == ' ') {
                        temp = matrizNova[i][j-1];
                        matrizNova[i][j-1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    if(matrizAtual[i][j+1] == ' ') {
                        temp = matrizNova[i][j+1];
                        matrizNova[i][j+1] = matrizNova[i][j];
                        matrizNova[i][j] = temp;
                        break;
                    }
                    break;
            }
        }
    }
    for(int i = 0; i < linha; i++) {
        strcpy(matrizAtual[i], matrizNova[i]);
    }
}

int main() {
    int frames, x, y, actFrame = 0, rFrame;
    char newPart;
    scanf("%d", &frames);
    for(int i = 0; i < linha+2; i++) {
        matrizAtual[i][0] = '@';
        matrizAtual[i][coluna+1] = '@';
    }
    for(int j = 0; j < coluna+2; j++) {
        matrizAtual[0][j] = '@';
        matrizAtual[linha+1][j] = '@';
    }
    for(int i = 1; i < linha+1; i++) {
        for(int j = 1; j < coluna+1; j++) {
            matrizAtual[i][j] = ' ';
        }
    }
    while(actFrame < frames) {
        int EndOF = scanf(" %d: %d %d %c", &rFrame, &x, &y, &newPart) == EOF ? 1 : 0;
        if(EndOF == 1) {
            rFrame = frames;
        }
        while(actFrame < rFrame) {
            printf("frame: %d\n", actFrame+1);
            for(int i = 1; i < linha+1; i++) {
                for(int j = 1; j < coluna+1; j++) {
                    printf("%c", matrizAtual[i][j]);
                }
                printf("\n");
            }
            simuPart();
            actFrame++;
        }
        if(EndOF == 0) {
            matrizAtual[y+1][x+1] = newPart;
        }
    }
    return 0;
}
