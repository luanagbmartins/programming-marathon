#include <bits/stdc++.h>

using namespace std;

int fatorial(int n) {
	if ((n==0)||(n==1))
		return 1;
	return n*fatorial(n-1);
}

int main() {
    int N, f, count = 0;
    cin >> N;
    vector<int> fat;

    int i = 1;
    while(true) {
        f = fatorial(i);
        if (f > N) break;
        fat.push_back(f);
        i++;
    }

    f = N;
    while(f != 0) {
        for(i = 1; ; i++) if(fat[i] >= f or i >= fat.size()-1) break;
        (fat[i] <= f)? f -= fat[i] : f -= fat[i-1];
        count++;
    }

    cout << count << endl;

}