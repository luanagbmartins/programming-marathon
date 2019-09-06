#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, m;

    cin >> x >> m;

    if (m < 0) m *= -1;
    for (int n = 1; n < m; n++) {
        if ((n*x) % m == 1) {
            cout << n << '\n';
            return 0;
        }
    }

    cout << "Nao existe este tipo de inteiro.\n";
    return 0;
}