#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<pair<int,int>> fpair;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n%i != 0) continue;
        
        for (int j = n; j > 1; j--) {
            if (n%j != 0) continue;
            else if (i*j == n) {
                if (i < j)
                    fpair.push_back(make_pair(j, i));
                else
                    fpair.push_back(make_pair(i, j));
            }
        }
    }

    // auto last = unique(fpair.begin(), fpair.end());
    fpair.erase(unique(fpair.begin(), fpair.end()), fpair.end());

    vector<int> sum;
    vector<int> sub;

    for (int i = 0; i < fpair.size(); i++) { 
        sum.push_back(fpair[i].first + fpair[i].second);
        sub.push_back(fpair[i].first - fpair[i].second);
    } 

    sort(sum.begin(), sum.end());
    sort(sub.begin(), sub.end());

    for (int i = 0; i < sum.size(); i++) {
        if (binary_search(sub.begin(), sub.end(), sum[i])) {
            cout << n << " eh desagradavel.\n";
            return 0;
        }
    }

    cout << n << " nao eh desagradavel.\n";
       
}