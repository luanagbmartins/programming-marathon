/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1168|LED
 */

#include <stdio.h>

int main () {
    int N, i, j, leds;
    char V[120];

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s", V);
        j = 0;
        leds = 0;
        while(V[j] != 0) {
            if(V[j] == 49) leds += 2;
            else if(V[j] == 50) leds += 5;
            else if(V[j] == 51) leds += 5;
            else if(V[j] == 52) leds += 4;
            else if(V[j] == 53) leds += 5;
            else if(V[j] == 54) leds += 6;
            else if(V[j] == 55) leds += 3;
            else if(V[j] == 56) leds += 7;
            else if(V[j] == 57) leds += 6;
            else if(V[j] == 48) leds += 6;

            j++;
        }
        printf("%d leds\n", leds);
    }

    return 0;
}
