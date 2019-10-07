#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, c, x, min, max, count;
    vector<int> input;

    count = 0;

    cin >> n >> m >> c;    
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        input.push_back(x);
    }

    for (int i = 0; i <= n-m; i++) {
        min = input[i];
        max = 0;

        for (int j = i; j < i+m; j++) {
            if (min > input[j]) min = input[j];
            if (max < input[j]) max = input[j];
        }

        if (max-min <= c) count ++;
    }

    cout << count << "\n";
    
}