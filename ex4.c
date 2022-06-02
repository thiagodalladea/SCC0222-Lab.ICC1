#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", (int)a&b);
	printf("%d\n", (int)a|b);
	printf("%d\n", (int)a^b);
	printf("%d\n", (int)~a);
	printf("%d\n", (int)~b);
	printf("%d\n", (int)a>>2);
	printf("%d", (int)b<<2);
	
	return 0;
}
