/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|2670|Máquina de Café
 */

#include <stdio.h>

int main() {
    int F[3], A, B, C, tempo;

    scanf("%d %d %d", &F[0], &F[1], &F[2]);

    A = F[1]*2 + F[2]*4;
    B = F[0]*2 + F[2]*2;
    C = F[0]*4 + F[1]*2;

    if(A<B && A<C) tempo = A;
    else if (C<A && C<B) tempo = C;
    else tempo = B;

    printf("%d\n", tempo);

    return 0;
}
