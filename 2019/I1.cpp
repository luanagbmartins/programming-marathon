#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, x;
    int sf[20][20];
    bool b, g, u;

    b = g = u = false;

    cin >> k;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cin >> x;
            sf[i][j] = x;
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k/2; j++) {
            if (sf[i][j] == sf[i][k-j-1]) b = true;
            else b = false;

            if (sf[j][i] == sf[k-j-1][i]) g = true;
            else g = false;
        }
    }

    if (b && g) cout << "Magnificent\n";
    else if (b) cout << "Beautiful\n";
    else if (g) cout << "Graceful\n";
    else cout << "Useless\n";
}