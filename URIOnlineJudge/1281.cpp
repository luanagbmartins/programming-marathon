/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1281|Ida à Feira
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M, P;
    map<string, float> produtos;
    string nome;
    float preco, valorT;
    int quantidade;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> M;
        produtos.clear();
        for(int j = 0; j < M; j++) {
            cin >> nome >> preco;
            produtos.insert(pair<string, float>(nome, preco));
        }

        cin >> P;
        valorT = 0;
        for(int j = 0; j < P; j++){
            cin >> nome >> quantidade;
            valorT += quantidade * produtos.find(nome)->second;
        }
        printf("R$ %.2f\n", valorT);
    }
    return 0;
}
