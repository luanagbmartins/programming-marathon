#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, v, carlos;
    bool eleito = true;
    vector<int> votos;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> v;
        votos.push_back(v);
    }

    carlos = votos[0];
    for (int i = 1; i < N; i++) {
        if (votos[i] > carlos) {
            eleito = false;
            break;
        }
    }

    if(eleito) cout << "S" << endl;
    else cout << "N" << endl;

}