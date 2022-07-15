#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *listNomes = NULL;
    char *sobrenome = NULL;
    int countSobre = -1;
    char temp;
    int count = 0;
    int par = 1;

    while(scanf("%c", &temp)) {
        if(temp == 32 && par == 1) {
            countSobre = 0;
        }
        if(countSobre >= 0 && par == 1) {
            if(countSobre == 0 && sobrenome != NULL) {
                sobrenome = realloc(sobrenome, 0);
            }
            sobrenome = realloc(sobrenome, sizeof(char)*(countSobre+1));
            sobrenome[countSobre] = temp;
            countSobre += 1;
        }
        if((temp == '\n' || temp == '$' ) && par == 0) {
            sobrenome = realloc(sobrenome, sizeof(char)*(countSobre+1));
            sobrenome[countSobre] = '\0';
            listNomes = realloc(listNomes, (count + countSobre) * sizeof(char));
            for(int i = 0; i < countSobre; i++) {
                listNomes[count++] = sobrenome[i];
            }
            countSobre = -1;
            count--;
        }
        else if(temp != '$') {
            listNomes = realloc(listNomes, sizeof(char)*(count+1));
            listNomes[count] = temp;
        }
        if(temp == '\n') {
            par = par == 0 ? 1 : 0;
        }
        if(temp == '$') {
            break;
        }
        count += 1;
    }
    listNomes = realloc(listNomes, sizeof(char)*(count+1));
    listNomes[count] = '\0';
    free(sobrenome);
    printf("%s", listNomes);
    free(listNomes);

    return 0;
}
