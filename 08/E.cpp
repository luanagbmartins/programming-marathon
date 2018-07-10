/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, a[10];
    cin >> N;

    while(N--) {
        int n, i, j;
        memset(a,0,sizeof(a));
        cin >> n;
        for(i = 1; i <= n; i++) {
               j = i;
               while(j) {
                   a[j%10]++;
                   j /= 10;
               }
        }
        cout << a[0];
        for(i = 1; i < 10; i++) cout << " " << a[i];
        cout << endl;

    }

    return 0;
}
