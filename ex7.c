#include<stdio.h>

int main() {
	long int x1, y1, larg1, alt1, x2, y2, larg2, alt2, x3, y3, larg3, alt3;
	int aux = 0;
	scanf("%ld", &x1);
	scanf("%ld", &y1);
	scanf("%ld", &larg1);
	scanf("%ld", &alt1);
	scanf("%ld", &x2);
	scanf("%ld", &y2);
	scanf("%ld", &larg2);
	scanf("%ld", &alt2);

	if(x2 >= x1 && x2 <= x1 + larg1) {
		if(x2 + larg2 >= x1 + larg1) {
			larg3 = larg1 - (x2 - x1);
		} else if(x2 + larg2 < x1 + larg1) {
			larg3 = larg2;
		}
		aux++;
	}
	else if(x1 >= x2 && x1 <= x2 + larg2) {
		if(x1 + larg1 >= x2 + larg2) {
			larg3 = larg2 - (x1 - x2);
		} else if(x1 + larg1 < x2 + larg2) {
			larg3 = larg1;
		}
		aux++;
	}
	if(y2 >= y1 && y2 <= y1 + alt1) {
		if(y2 + alt2 >= y1 + alt1) {
			alt3 = alt1 - (y2 - y1);
		} else if(y2 + alt2 < y1 + alt1) {
			alt3 = alt2;
		}
		aux++;
	}
	else if(y1 >= y2 && y1 <= y2 + alt2) {
		if(y1 + alt1 >= y2 + alt2) {
			alt3 = alt2 - (y1 - y2);
		} else if(y1 + alt1 < y2 + alt2) {
			alt3 = alt1;
		}
		aux++;
	}
	if(x1 >= x2)
		x3 = x1;
	else x3 = x2;
	if(y1 >= y2)
		y3 = y1;
	else y3 = y2;
	if(aux == 2)
    	printf("HIT: %ld %ld %ld %ld", x3, y3, larg3, alt3);
	else printf("MISS");

	return 0;
}
