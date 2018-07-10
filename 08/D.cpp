/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> age;
    int T;
    cin >> T;


    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        for(int j = 0; j < N; j++) {
            int tmp;
            cin >> tmp;
            if(j == N/2) age.push(tmp);
        }
    }

    for(int i = 1; i <= T; i++) {
        cout << "Case " << i << ": " << age.front() << endl;
        age.pop();
    }

    return 0;
}
