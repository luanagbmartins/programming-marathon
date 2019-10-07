#include <bits/stdc++.h>

using namespace std;

int main() {
    int C, A, total;
    cin >> C >> A;
    total = A/(C-1);
    if (A%(C-1) != 0) total++;
    cout << total << endl;

}