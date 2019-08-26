#include <bits/stdc++.h>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int data;
    double N;
    string op;
    
    
    cin >> N;
    getline(cin, op);

    for (int i = 1; i < op.length(); i++) {
        switch (op[i]) {
            case '@':
                N = N * 3.00;
                break;
            case '%':
                N = N + 5.00;
                break;
            case '#':
                N = N - 7.00;
                break;
        }
    }

    printf("%.2lf\n", N);
    
}