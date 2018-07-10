/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|2172|Evento
 */

#include <stdio.h>

int main() {
    unsigned long long X, M;

    while(1) {
        scanf("%llu %llu", &X, &M);
        if(X==0 && M==0) break;
        printf("%llu\n", X*M);
    }
    return 0;
}
