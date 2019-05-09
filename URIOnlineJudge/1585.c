/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1585|Fazendo Pandorgas
 */

#include <stdio.h>

int main() {
    int N, X, Y, Area, i;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        Area = (X * Y) / 2;
        printf("%d cm2\n", Area);
    }
    return 0;
}
