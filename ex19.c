#include <stdio.h>

int main() {
    int pixels[25];
    int colors[5] = {0,0,0,0,0};
    int freqColor = 0;
    for(int i = 0; i < 25; i++) {
        scanf("%d", &pixels[i]);
        colors[pixels[i]] += 1;
        if(colors[pixels[i]] > colors[freqColor]) {
            freqColor = pixels[i];
        }
    }
    for(int i = 0; i < 5; i++) {
        printf("%d: |", i);
        for(int j = 0; j < colors[i]; j++) {
            printf("#");
        }
        printf("\n");
    }
    for(int i = 0; i < 25; i++) {
        if(pixels[i] == freqColor) {
            printf("%d\n", i);
        }
    }
    return 0;
}
