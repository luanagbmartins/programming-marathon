/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1006|Média 2
 */

#include <stdio.h>

int main(){
    double A, B, C;
    double Media;

    scanf("%lf %lf %lf", &A, &B, &C);
    Media = A*0.2 + B*0.3 + C*0.5;
    printf("MEDIA = %.1lf\n", Media);

    return 0;
}
