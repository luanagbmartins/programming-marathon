#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {
    string input;
    list<char>P;
    list<char>::iterator it;

    getline(cin, input);
    cout << input;

    for (int i = 0; i < input.length(); i++) {
        P.push_back(input[i]);
    }

    P.unique();
    cout << '\n';
    for (it = P.begin(); it != P.end(); it++) {
        cout << *it;
        cout << '\n';
    }
}