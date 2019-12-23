#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sorte = 0;
    vector<int> bin;
    cin >> n;

    while (n != 0) {
        bin.push_back(n%2);
        n /= 2;
    }

    for (int i = bin.size(); i > 0; i--) {
        if (bin[i-1] == 1) {
            sorte += pow(5, i);
        }
    }

    cout << sorte << endl;
}
