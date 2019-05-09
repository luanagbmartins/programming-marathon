/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1110|Jogando Cartas Fora
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, aux;
    queue<int>cartas;
    queue<int>retiradas;

    while(true) {
        cin >> N;
        if(N == 0) break;
        for(int i = 1; i <= N; i++) cartas.push(i);

        while(cartas.size() > 1) {
            retiradas.push(cartas.front());
            cartas.pop();
            aux = cartas.front();
            cartas.pop();
            cartas.push(aux);
        }

        cout << "Discarded cards: ";
        while(retiradas.size() > 1) {
            aux = retiradas.front();
            retiradas.pop();
            cout << aux << ", ";
        }
        aux = retiradas.front();
        retiradas.pop();
        cout << aux << endl;

        cout << "Remaining card: ";
        aux = cartas.front();
        cartas.pop();
        cout << aux << endl;
    }
    return 0;
}
