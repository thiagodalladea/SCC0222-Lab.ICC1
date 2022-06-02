#include<stdio.h>
int main() {
    char velha[3][3];
    int inGame = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            scanf("%c", &velha[i][j]); getchar();
            if(velha[i][j] == '-')
                inGame = 1;
        }
    }
    //linhas
    for(int i = 0; i < 3; i++){
        if((velha[i][0] == 'x' && velha[i][1] == 'x' && velha[i][2] == 'x')){
            printf("x ganhou");
            return 0;
        } else if((velha[i][0] == 'o' && velha[i][1] == 'o' && velha[i][2] == 'o')){
            printf("o ganhou");
            return 0;
        }
    }
    //colunas
    for(int i = 0; i < 3; i++){
        if((velha[0][i] == 'x' && velha[1][i+1] == 'x' && velha[2][i+2] == 'x')){
            printf("x ganhou");
            return 0;
        }
        if((velha[0][i] == 'o' && velha[1][i+1] == 'o' && velha[2][i+2] == 'o')){
            printf("o ganhou");
            return 0;
        }
    }
    //diagonais
    if((velha[0][0] == 'x' && velha[1][1] == 'x' && velha[2][2] == 'x')){
        printf("x ganhou");
        return 0;
    }
    if((velha[2][0] == 'o' && velha[1][1] == 'o' && velha[0][2] == 'o')){
        printf("o ganhou");
        return 0;
    }
    if(inGame == 1) printf("em jogo");
    else printf("empate");

    return 0;
}
