/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1261|Pontos de Feno
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> D;
    int M, N;
    cin >> M >> N;

    for(int i = 0; i < M; i++) {
        string name;
        int value;
        cin >> name >> value;
        D.insert(pair<string, int>(name, value));
    }

    cout << "AAAAAAAAAAH\n";

    for(int i = 0; i < N; i++) {
        string p;
		long s = 0;
		vector<string> desc;
		string tdesc;
		
		desc.clear();
		
		cin >> p;
		tdesc = p;
		while(tdesc != ".") {
			desc.push_back(tdesc);
			cin >> p;
			tdesc = p;
		}
		
		for(int j = 0; j < desc.size(); j++) {
			s += D[desc.at(j)];
		}
		
		cout << s << endl;

    }

    return 0;
}