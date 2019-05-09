/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1875|Tribol
 */

#include <stdio.h>

//1-> B->G->R
//2-> R->G->B

int main() {
    int C, P;
    int i, j, pontos[3], maior, t, count, count2;
    char M[2], S[2];

    scanf("%d", &C);
    for(i = 0; i < C; i++){
        scanf("%d", &P);
        for(j = 0; j < 3; j++) pontos[j] = 0;
        for(j = 0; j < P; j++) {
            //scanf("%c %c", &M, &S);
            scanf("%s", M);
            scanf("%s", S);
            if((M[0]-S[0] > 0 && M[0]-S[0]!=16) || M[0]-S[0] == -16) {
                if(M[0] == 'B') pontos[0] += 2;
                else if(M[0] == 'G') pontos[1] += 2;
                else if(M[0] == 'R') pontos[2] += 2;
            }
            else {
                if(M[0] == 'B') pontos[0]++;
                else if(M[0] == 'G') pontos[1]++;
                else if(M[0] == 'R') pontos[2]++;
            }
        }

        if(pontos[0]==pontos[1] && pontos[1]==pontos[2]) {
            printf("trempate\n");
        }
        else if((pontos[0]==pontos[1] && pontos[1] > pontos[2]) || (pontos[1]==pontos[2] && pontos[2]>pontos[0]) || (pontos[0]==pontos[2] && pontos[2]>pontos[1])) {
            printf("empate\n");
        }
        else {
            maior = 0;
            for(j = 0; j < 3; j++) {
                if(pontos[j] > maior) {
                    maior = pontos[j];
                    t = j;
                }
            }
            if(t == 0) printf("blue\n");
            else if(t == 1) printf("green\n");
            else printf("red\n");
        }
    }
    return 0;
}
