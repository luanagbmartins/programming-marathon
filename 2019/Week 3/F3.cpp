#include <bits/stdc++.h>

using namespace std;

int mdc(int n1, int n2) {
    int r;
    do  {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    } while(r != 0);

    return n1;
}

int main() {
    int n, d;
    cin >> n >> d;

    if (n%d == 0) {
        cout << int(n/d) << endl;
    }
    else {
        if (int(n/d) > 0) cout << int(n/d) << " ";

        int m = mdc(n, d);
        cout << (n%d)/m << "/" << d/m << endl;
    }
       
}