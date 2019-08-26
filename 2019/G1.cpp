#include <bits/stdc++.h>

using namespace std;

int main() {
    list<char> A;
    list<char>::iterator it;
    char c;
    
    while (scanf("%c", &c) != (int(c) == 10)) {
        A.push_back(c);
    }

    A.unique();
    for (it = A.begin(); it != A.end(); it++) {
        cout << *it;
    }
    cout << '\n';
}