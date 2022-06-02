#include<stdio.h>
int main() {
	char move[6];
	int x = 0, y = 0;
	scanf("%s", &*move);
	for(int i = 0; i < 6; ++i) {
		switch(move[i]) {
			case 'W':
                y++;
                break;
			case 'S':
			    y--;
			    break;
			case 'D':
			    x++;
			    break;
			case 'A':
			    x--;
			    break;
		}
	}
    printf("%d %d\n", x, y);
	return 0;
}
