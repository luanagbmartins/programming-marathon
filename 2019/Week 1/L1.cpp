#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n, one, zero;

    one = zero = 0;

    cin >> n;

    while (n > 0) 
    {
        if (n%2 == 0) zero++;
        else if (n%2 == 1) one++;
        n = n / 2;
    }

    if (zero > one) cout << "left\n";
    else if (one > zero) cout << "right\n";
    else cout << "straight\n";
    
}