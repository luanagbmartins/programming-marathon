/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, testCase;
    float a0, an, a1;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
      cin >> testCase;
      cin >> a0 >> an;
      for(int j = 0; j < testCase; j++) {
        float c;
        cin >> c;
        a1 = (a0 + an)/2 - c;

        cout << a1 << endl << endl;
      }
    }

    return 0;
}
