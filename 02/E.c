/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1114|Senha Fixa
 */

#include <stdio.h>
#define SENHA 2002

int main() {
    int s;
    while(1) {
        scanf("%d", &s);
        if(s == SENHA) {
            printf("Acesso Permitido\n");
            break;
        }
        else printf("Senha Invalida\n");
    }
    return 0;
}
