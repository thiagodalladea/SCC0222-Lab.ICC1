#include<stdio.h>
int main() {
    long int n, m, p, aux1 = 1, aux2;
    int i, j, k, l;
    scanf("%ld", &n);
    scanf("%ld", &m);
    scanf("%ld", &p);
    aux2 = 0;
    for(i = 0; i < n; i += 0) {
        for(j = 0; j < aux1; j++) {
            if(i < n){
                if(aux2 + 1 == p) {
                    if(i == 0) printf("%ld pinguim\n", aux1);
                    else printf("%ld pinguins\n", aux1);
                }
            }
            else break;
            aux2++;
            if(aux2 == m)
                aux2 = 0;
            i++;
        }

        for(k = 0; k < aux1; k++) {
            if(i < n){
                if(aux2 + 1 == p)
                    printf("no gelo\n");
            }
            else break;
            aux2++;
            if(aux2 == m)
                aux2 = 0;
            i++;
        }

        for(l = 0; l < aux1; l++) {
            if(i < n) {
                if(aux2 + 1 == p)
                    printf("uhuu!\n");
            }
            else break;
            aux2++;
            if(aux2 == m)
                aux2 = 0;
            i++;
        }

        aux1++;
    }
    return 0;
}
