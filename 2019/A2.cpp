#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {
    int m, n, count;
    string s, t;

    cin >> m >> n;

    do {
        getline(cin, s);
    } while(s.empty()); 
    
    getline(cin, t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << s.find(t) << endl;

    // count = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (t[i] == s[j]) {
    //             count++;
    //             s[j] = '-';
    //             break;
    //         }
    //     }
    // }

    if (count == t.length()) cout << "SIM" << endl;
    else cout << "NAO" << endl;
}