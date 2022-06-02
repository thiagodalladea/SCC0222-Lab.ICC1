#include <stdio.h>
#include <math.h>

int main() {
	float a, b, result;
	scanf("%f", &a);
	scanf("%f", &b);
	result = pow(a,b);
	printf("%.4f\n", result);
	
	return 0;
}
