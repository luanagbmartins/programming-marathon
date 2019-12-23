#include <bits/stdc++.h>

using namespace std;

int fatorial(int n) {
	if ((n == 0) || (n == 1))
		return 1;
	return n * fatorial(n - 1);
}

int combinacao(int n, int p) {
	int r = 1;
	for (int i = n; i > n-p; i--) {
		r = r * i;
	}

	return r/fatorial(p);
}

int main() {
	int n, count = 0;
	cin >> n;
	cout << combinacao(n-1, 3) << endl;
}