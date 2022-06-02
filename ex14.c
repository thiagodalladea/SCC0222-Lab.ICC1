#include<stdio.h>

int main() {
	char esteira[32][32];
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < 32; j++) {
            scanf("%c", & esteira[i][j]);
            getchar();
        }
    }
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < 32; j++) {
            printf("%s ", esteira[i][j]);
        }
        printf("\n");
    }

	return 0;
}
