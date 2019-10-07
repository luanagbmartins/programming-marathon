#include <stdio.h>
#include <string.h>

 char str1[100010], str2[100010];

int main(){

    int i, j, tam, k, cont1, l, t1, t2, dist;
  //char str1[100000], str2[100000];
     

    //meio é 77

    scanf(" %s", str1);
    scanf(" %s", str2);

    tam = strlen(str1);
    cont1 = 0;
    for(i = 0;i < tam;i++){
        
        j = str1[i];
        l = str2[i];
    
        if(j == l){
          continue;
        }

        if(j > l){
            dist = j - l;
            t1 = 26 - dist;
            if(dist <= t1) cont1 += dist;
            else cont1 += t1;
        }       
        else {
            dist = l - j;
            t1 = 26 - dist;
            if(dist <= t1) cont1 += dist;
            else cont1 += t1;

        }      
    }
   printf("%d\n", cont1);


    return 0;

}