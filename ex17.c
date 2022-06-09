#include <stdio.h>
#include <string.h>

int spamWord(char lineF[77]) {
    int spamCount = 0;
    char spam[12][15];

    strcpy(spam[0], "gratuito");
    strcpy(spam[1], "atencao");
    strcpy(spam[2], "urgente");
    strcpy(spam[3], "imediato");
    strcpy(spam[4], "zoombie");
    strcpy(spam[5], "oferta");
    strcpy(spam[6], "dinheiro");
    strcpy(spam[7], "renda");
    strcpy(spam[8], "fundo");
    strcpy(spam[9], "limitado");
    strcpy(spam[10], "ajuda");
    strcpy(spam[11], "SOS");
    for(int i = 0; i < 12; i++){
        if(strstr(lineF, spam[i]) != NULL)
            spamCount += 1;
    }
    return spamCount;
}

int main() {
    int countChar = 0, countSpam = 0;
    char curChar;
    char line[77] = "";
    while(scanf("%c", &curChar) != EOF) {
        strncat(line, &curChar, 1);
        if(curChar == '\n') {
            countChar = 0;
            countSpam += spamWord(line);
            memset(line, 0, sizeof(line));
        } else {
            if(countChar > 76)
                countSpam += 2;
            else
                countChar += 1;
        }
    }
    if(countSpam >= 2)
        printf("Spam");
    else
        printf("Inbox");
    return 0;
}
