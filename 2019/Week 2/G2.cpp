#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {
    int n1, n2, count;
    string n;
    cin >> n;

    count = 0;
    while (true) {     
        sort(n.begin(), n.end());   
        n1 = int(n[3]) * 1000 + int(n[2]) * 100 + int(n[1])*10 + int(n[0]);
        n2 = int(n[0]) * 1000 + int(n[1]) * 100 + int(n[2])*10 + int(n[3]);
        count++;
        if(n1-n2 == 6174) break;

        n.clear();
        n = to_string(n1-n2);
    }

    cout << count << endl;
}