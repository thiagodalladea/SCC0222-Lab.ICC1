#include <stdio.h>

int main() {
	int num, char1, char2, char3, char4;
	scanf("%d", &num);
	char1 = (num&255<<24)>>24;
	char2 = (num&255<<16)>>16;
	char3 = (num&255<<8)>>8;
	char4 = num&255;
	printf("%c%c%c%c\n", (char)char1, (char)char2, (char)char3, (char)char4);
	
	return 0;
}
