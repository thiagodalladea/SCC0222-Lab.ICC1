#include <stdio.h>
int main() {
	char *estacoes[10] = {"* Morumbi", "* Butanta", "* Pinheiros", "* Faria Lima", "* Fradique Coutinho", "* Oscar Freire", "* Paulista", "* Higienopolis-Mackenzie", "* Republica", "* Luz"};
	int est;
	scanf("%d", &est);
	if(est <= 5) {
		for(int i = est; i <= 5; i++) {
			printf("%s\n", estacoes[i]);
			if(i != 5) printf("|\n");
		}
	} else {
		for(int i = est; i <=9; i++) {
			printf("%s\n", estacoes[i]);
			if(i != 9) {
				printf("|\n");
			}
		}
	}

	return 0;
}
