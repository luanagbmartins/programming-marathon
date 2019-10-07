#include <bits/stdc++.h>

using namespace std;

int main() {
    string S, T;
    int aux, aux1, aux2, count = 0;

    getline(cin, S);
    getline(cin, T);

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == T[i]) continue;
        else if (S[i] > T[i]) {
            aux = S[i] - T[i];
            if (aux <= (26-aux)) count += aux;
            else count += 26 - aux;
        }
        else {
            aux = T[i] - S[i];
            if (aux <= (26-aux)) count += aux;
            else count += 26 - aux;
        }
        
    }

    cout << count << endl;
}