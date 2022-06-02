#include<stdio.h>
int main() {
    int n, p, beg, end;
	int count = 1;
    scanf("%d", &n);
    scanf("%d", &p);
    int line[n][n];
    beg = 0;
    end = n - 1;
    if(p <= (n*n)) {
        for(int j = 0; j< (n*n); j++) {
            for(int i = beg; i <= end; i++) {
                line[beg][i] = count++;
            }
            for(int i = beg + 1; i <= end; i++) {
                line[i][end] = count++;
            }
            for(int i = end - 1; i >= beg; i--) {
                line[end][i] = count++;
            }
            for(int i = end - 1; i >= beg + 1; i--) {
                line[i][beg] = count++;
            }
            beg += 1;
            end -= 1;
		}
		for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++) {
	            if(line[i][j] == p){
	            	if((n*n) - p == 0)
	            		printf("O astronauta esta na posicao: %d %d\nPreste atencao, astronauta, chegou a sua vez!\n", i, j);
	                else
						printf("O astronauta esta na posicao: %d %d\nAinda faltam %d chamadas para a sua vez!\n", i, j, (n*n) - p);
	            } else continue;
	        }
	    }
    }
    else {
        printf("O astronauta ja saiu em missao ha %d chamadas.\n", p - (n*n));
    }
    return 0;
}
