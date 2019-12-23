#include <bits/stdc++.h>

using namespace std;

int main() {
    int inicio, fim;
    int prefeito = 4;
    int programador = 3;
    int apanhador = 5;
    int tesoureiro = 2;
    
    cin >> inicio >> fim;

    cout << "Todas as posicoes mudam no ano " << inicio << "." << endl;
    for (int i = inicio+1; i <= fim; i++) {
            prefeito--;
            programador--;
            apanhador--;
            tesoureiro--;

            if(prefeito == 0 && programador == 0 && apanhador == 0 && tesoureiro == 0)
                cout << "Todas as posicoes mudam no ano " << i << ".\n";


            if (prefeito == 0) prefeito = 4;
            if (programador == 0) programador = 3;
            if (apanhador == 0) apanhador = 5;
            if (tesoureiro == 0) tesoureiro = 2;
    }

}