/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    while(true) {
        cin >> N;
        if(N == 0) break;

        if(N == 1) cout << "1\n";
        else if(N == 2) cout << "2\n";
        else if(N > 2) {
          cout << (N - pow(2, (int)log2(N-1)) ) * 2 << endl;
        }

    }
    return 0;
}
