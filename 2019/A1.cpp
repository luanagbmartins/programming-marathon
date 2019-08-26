#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    for (int j = 0; j < size; j++) {
        for (int k = 0; k < size; k++) {
            if (j == 0 || j == size-1 || k == 0 || k == size-1) cout << '#';
            else cout << 'J';
        }
        cout << "\n";
    }
}