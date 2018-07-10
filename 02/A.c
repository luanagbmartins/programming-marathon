/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|2717|Tempo do Duende
 */

#include <stdio.h>

int main() {
    int N, A, B;

    scanf("%d", &N);
    scanf("%d %d", &A, &B);

    if(A+B <= N) printf("Farei hoje!\n");
    else printf("Deixa para amanha!\n");

    return 0;
}
