/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|2718|Luzes de Natal
 */

 #include <stdio.h>

int main() {
    unsigned long long int X, N;
    int i, count1 = 0, count2 = 0;

    scanf("%llu", &N);
    for(i = 0; i < N; i++){
        scanf("%llu", &X);
        count1 = 0;
        count2 = 0;
        while(X > 0) {
            if(X%2 == 1) count1++;
            else {
            if(count2 < count1) count2 = count1;
                count1 = 0;
            }
            X /= 2;
        }
        if(count1 > count2) printf("%d\n", count1);
        else printf("%d\n",count2);
    }

    return 0;
}
