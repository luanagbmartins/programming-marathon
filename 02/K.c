/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1105|Sub-Prime
 */

 #include <stdio.h>

int main() {
    long long int B, N, R[21], D, C, V;
    int i, liquidou;

    while(1) {
        scanf("%lli %lli", &B, &N);
        if(B==0 && N==0) break;

        liquidou = 0;
        for(i = 0; i < B; i++) scanf("%lli", &R[i]);
        for(i = 0; i < N; i++) {
            scanf("%lli %lli %lli", &D, &C, &V);
            R[D-1] -= V;
            R[C-1] += V;
        }
        for(i = 0; i < B; i++){
            if(R[i] < 0 && liquidou == 0) {
                printf("N\n");
                liquidou = 1;
                break;
            }
        }
        if(liquidou == 0) printf("S\n");
    }
    return 0;
}
