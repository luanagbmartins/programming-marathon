/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1260|Espécies de Madeira
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    double tamanho_lista;
    string nome;
    char n[50], x[2];
    map<string, double>especies;
    map<string, double>::iterator it;

    cin >> N;
    cin.get();
    cin.get();
    for(int i = 0; i < N; i++) {
        especies.clear();
        tamanho_lista = 0.0000;
        while(true) {
            cin.getline(n, sizeof(n));
            nome = n;

            if(nome.size() == 0) break;

            tamanho_lista++;
            it = especies.find(nome);

            if(it != especies.end()) {
                especies.find(nome)->second ++;
            } else {
                especies.insert(pair<string, double>(nome, 1.0000));
            }
        }

        for(auto& x: especies)
            x.second = (x.second * 100.0000) / tamanho_lista;

        for(auto& x: especies) {
            cout << x.first;
            printf(" %.4f\n", x.second);
        }

        if(i < N-1) cout << endl;
    }
    return 0;
}
