#include<stdio.h>

int main() {
	char esteira[32][65];
	char move, prevMove;
	int startI, startJ;
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < 65; j++) {
            scanf("%c", &esteira[i][j]);
            if(esteira[i][j] == '[') {
                startI = i;
                startJ = j+2;
            } else continue;
        }
    }
    move = esteira[startI][startJ];
    prevMove = move;
    while(move != ']' && move != '.' && move != ' ') {
        move = esteira[startI][startJ];
        if(move == '>') {
            esteira[startI][startJ] = '.';
            startJ += 2;
            prevMove = move;
        } else if(move == '<') {
            esteira[startI][startJ] = '.';
            startJ -= 2;
            prevMove = move;
        } else if(move == 'v') {
            esteira[startI][startJ] = '.';
            startI += 1;
            prevMove = move;
        } else if(move == '^') {
            esteira[startI][startJ] = '.';
            startI -= 1;
            prevMove = move;
        } else if (move == '#') {
            if(prevMove == '>') {
                startJ += 2;
            } else if(prevMove == '<') {
                startJ -= 2;
            } else if(prevMove == 'v') {
                startI += 1;
            } else if(prevMove == '^') {
                startI -= 1;
            }
        }
    }
    if(move == ']') {
        printf("Ok.\n");
    } else if(move == '.') {
        printf("Loop infinito.\n");
    } else if(move == ' ') {
        printf("Falha na esteira.\n");
    }
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < 65; j++) {
            printf("%c", esteira[i][j]);
        }
    }
	return 0;
}
