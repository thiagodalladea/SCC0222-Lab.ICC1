#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void horarioInterplanetario(unsigned long long int total, char *planeta, unsigned long long int *dias, unsigned long long int *horas, unsigned long long int *minutos, unsigned long long int *segundos) {
    if(strcmp(planeta, "Terra") == 0) {
        if (total >= 86400) {
            *dias = (total - (total % 86400)) / 86400;
            total -= (*dias * 86400);
        }
        if(total >= 3600) {
            *horas = (total - (total % 3600)) / 3600;
            total -= (*horas * 3600);
        }
        if(total >= 60) {
            *minutos = (total - (total % 60)) / 60;
        }
        *segundos = (total - *minutos * 60);
    }
    if(strcmp(planeta, "Venus") == 0) {
        if (total >= (243*86400)) {
            *dias = (total - (total % (243*86400))) / (243*86400);
            total -= (*dias * (243*86400));
        }
        if(total >= 3600) {
            *horas = (total - (total % 3600)) / 3600;
            total -= (*horas * 3600);
        }
        if(total >= 60) {
            *minutos = (total - (total % 60)) / 60;
        }
        *segundos = (total - *minutos * 60);
    }
    if(strcmp(planeta, "Mercurio") == 0) {
        if (total >= (86400*58 + 16*3600)) {
            *dias = (total - (total % (86400*58 + 16*3600))) / (86400*58 + 16*3600);
            total -= (*dias * (86400*58 + 16*3600));
        }
        if(total >= 3600) {
            *horas = (total - (total % 3600)) / 3600;
            total -= (*horas * 3600);
        }
        if(total >= 60) {
            *minutos = (total - (total % 60)) / 60;
        }
        *segundos = (total - *minutos * 60);
    }
    if(strcmp(planeta, "Jupiter") == 0) {
        if (total >= (9*3600 + 56*60)) {
            *dias = (total - (total % (9*3600 + 56*60))) / (9*3600 + 56*60);
            total -= (*dias * (9*3600 + 56*60));
        }
        if(total >= 3600) {
            *horas = (total - (total % 3600)) / 3600;
            total -= (*horas * 3600);
        }
        if(total >= 60) {
            *minutos = (total - (total % 60)) / 60;
        }
        *segundos = (total - *minutos * 60);
    }
}

int main() {
    unsigned long long int total, dias = 0, horas = 0, minutos = 0, segundos = 0;
    char planeta[10];
    int count = 0;
    scanf("%llu", &total);
    scanf("%*c");
    while(scanf("%c", &planeta[count++]) != EOF);
    planeta[count-1] = '\0';

    horarioInterplanetario(total, planeta, &dias, &horas, &minutos, &segundos);

    printf("%llu segundos no planeta %s equivalem a:\n", total, planeta);
    printf("%llu dias, %llu horas, %llu minutos e %llu segundos\n", dias, horas, minutos, segundos);

    return 0;
}
