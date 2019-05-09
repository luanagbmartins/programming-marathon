/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1257|Array Hash
 */

#include <stdio.h>

int main() {
    int N, L, valor, k;
    int i, j;
    char S[51];

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &L);
        valor = 0;
        for(j = 0; j < L; j++){
            scanf("%s", S);
            k = 0;
            while(S[k] != 0){
                valor += j + k + (S[k] - 65);
                k++;
            }
        }
        printf("%d\n", valor);
    }
    return 0;
}
