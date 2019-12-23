#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() { 
    int n, k;
    vector<int> pattern;

    cin >> n >> k;

    for (int i = 0; i < k; i++) 
        pattern.push_back(1);

    for (int i = 0; i < n-k; i++)
        pattern.push_back(0);

    sort(pattern.begin(), pattern.end());
    reverse(pattern.begin(), pattern.end());

    do {
        for (int i = 0; i < n; i++) {
            cout << pattern[i];
        }
        cout << endl;
    } while(prev_permutation(pattern.begin(), pattern.end()));


}