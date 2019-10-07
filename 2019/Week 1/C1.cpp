#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {
    int N;
    char L;

    cin >> N;
    cin >> L;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << L;
        }
        L++;
        if (L > 90) L = 65;
        cout << '\n';
    }
}