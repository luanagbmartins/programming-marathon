/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|2721|Indecisão das Renas
 */

#include <stdio.h>

int main() {
    int A, total = 0, i;

    for(i = 0; i < 9; i++) {
        scanf("%d", &A);
        total += A;
    }

    switch(total % 9) {
        case 0:
            printf("Rudolph\n");
            break;
        case 8:
            printf("Blitzen\n");
            break;
        case 7:
            printf("Donner\n");
            break;
        case 6:
            printf("Cupid\n");
            break;
        case 5:
            printf("Comet\n");
            break;
        case 4:
            printf("Vixen\n");
            break;
        case 3:
            printf("Prancer\n");
            break;
        case 2:
            printf("Dancer\n");
            break;
        case 1:
            printf("Dasher\n");
            break;
    }
    return 0;
}
