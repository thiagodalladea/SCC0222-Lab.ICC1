#include <stdio.h>

int main() {
    int n_linhas = 0, n_palavras = 0, n_chars = 0;
    char curChar = ' ', prevChar = ' ';

    while(scanf("%c", &curChar) != EOF) {
        if((curChar == '\n' || curChar == '\r' || curChar == ' ' || curChar == '\t') && (prevChar != '\n' && prevChar != '\r' && prevChar != ' ' && prevChar != '\t'))
            n_palavras += 1;
        if(curChar == '\n' || curChar == '\r')
            n_linhas += 1;
        if(curChar == '\n' && prevChar == '\r')
            n_linhas -= 1;
        prevChar = curChar;
        n_chars += 1;
    }
    if (prevChar != '\n' && prevChar != '\r' && prevChar != ' ' && prevChar != '\t')
        n_palavras++;
    printf("Linhas\tPalav.\tCarac.\n");
    printf("%d\t%d\t%d", n_linhas, n_palavras, n_chars);
    return 0;
}
