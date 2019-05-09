/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1300|Horas e Minutos
 */

#include <stdio.h>

int main() {
    int angulo;
    
    while(scanf("%d", &angulo) != EOF) {
        if(angulo%6 == 0) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
