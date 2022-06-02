#include<stdio.h>

int main() {
    double a,b,c,d,result,min;
    for(int i = 0; i < 4; i++) {
        switch(i) {
            case 0:
                scanf("%lf", &a);
                min = a;
                break;
            case 1:
                scanf("%lf", &b);
                if(b <= min)
                    min = b;
                break;
            case 2:
                scanf("%lf", &c);
                if(c <= min)
                    min = c;
                break;
            case 3:
                scanf("%lf", &d);
                if(d <= min)
                    min = d;
                break;
        }
    }
    result = (a + b + c + d - min) / 3;
    printf("%.4lf\n", result);

    return 0;
}
