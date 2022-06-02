#include<stdio.h>
int main() {
    int d, aux;
    scanf("%d", &d);
    printf("         Abril 2021         \n");
    printf(" Do  Se  Te  Qu  Qu  Se  Sa \n");

    for(int i = -4; i < 4; i++) {
        if(i > 0) {
            if(i == d){
                if(i != 3){
                    if(d == 1) {
                        aux = i + 1;
                        printf(" (%2d) %2d ", i, aux);
                        i++;
                    } else {
                    aux = i + 1;
                    printf("(%2d) %2d ", i, aux);
                    i++;
                    }
                }
                else
                    printf("(%2d) ", i);
            }
            else {
                if(i == 1)
                    printf("  %2d ", i);
                else
                    printf(" %2d ", i);
            }
        } else
            printf("   ");
    }
    printf("\n");
    for(int i = 4; i < 11; i++) {
        if(i == d){
            if(i != 10){
                aux = i + 1;
                printf("(%2d) %2d ", i, aux);
                i++;
            }
            else
                printf("(%2d) ", i);
        }
        else
            printf(" %2d ", i);
    }
    printf("\n");
    for(int i = 11; i < 18; i++) {
        if(i == d){
            if(i != 17){
                aux = i + 1;
                printf("(%2d) %2d ", i, aux);
                i++;
            }
            else
                printf("(%2d) ", i);
        }
        else
            printf(" %2d ", i);
    }
    printf("\n");
    for(int i = 18; i < 25; i++) {
        if(i == d){
            if(i != 24){
                aux = i + 1;
                printf("(%2d) %2d ", i, aux);
                i++;
            }
            else
                printf("(%2d) ", i);
        }
        else
            printf(" %2d ", i);
    }
    printf("\n");
    for(int i = 25; i < 31; i++) {
        if(i == d){
            if(i == 30)
                printf("(%2d) ", i);
            else{
                aux = i + 1;
                printf("(%2d) %2d ", i, aux);
                i++;
            }
        }
        else
            printf(" %2d ", i);
    }
    printf("\n");


    return 0;
}
