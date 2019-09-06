#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum;
    cin >> n;

    sum = 0;

    for (int i = 1; i < n; i++) {
        if(n%i == 0) sum += i;
    }

    cout << n << " eh um numero ";
    if (sum > n) cout << "abundante.\n";
    else if (sum < n) cout << "deficiente.\n";
    else cout << "perfeito.\n";
}