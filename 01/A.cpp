/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1136|Bingo!
 */

#include <bits/stdc++.h>
#define MAX 1002

using namespace std;

int bolas[MAX], marcadas[MAX];

int main() {
    int n, b;
    bool p;

    while(true) {
        cin >> n >> b;
        if(n == 0 && b == 0) break;

        for(int i = 0; i < MAX; i++) marcadas[i] = 0;
        
        p = true;

        for (int i = 0; i < b; ++i) cin >> bolas[i];

        for (int i = 0; i < b; ++i)
            for (int j = 0; j < b; ++j)
                marcadas[abs(bolas[i] - bolas[j])] = 1;

        for (int i = 0; i < (n + 1); ++i) {
            if(marcadas[i] == 0)
                p = false;
        }

        if(p) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}