/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> cases;
    int i = 1;
    while(true) {
        int R, N;
        cin >> R >> N;
        if(R == 0 && N == 0) break;
        if(R > N*27) cout << "Case " << i << ": impossible\n";
        else cout << "Case " << i << ": " << (((R+N-1)/N)-1) << endl;

        i++;
    }
    return 0;
}
