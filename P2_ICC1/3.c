//Nome: Thiago Prado Dalla Dea
//N. USP: 12691710

#include <stdio.h>

typedef struct coord {
    float x;
    float y;
} coord;

int main() {
    float a, b;
    coord p1;
    coord p2;
    //Coleta os dois pontos do usuario
    scanf("%f%f", &p1.x, &p1.y);
    scanf("%f%f", &p2.x, &p2.y);
    //Calcula o coeficiente angular e linear
    a = (p1.y - p2.y) / (p1.x - p2.x);
    b = p1.y - a * p1.x;

    printf("\nEquacao da reta: y = %.2f * x + %.2f", a, b);

    return 0;
}
