/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, iterator, parity;
    string output;

    while(true) {
      cin >> N;
      iterator = 0;
      parity = 0;
      if (N == 0) break;

      cout << "The parity of ";
      while(N > 0) {
        if (N%2 == 1) parity++;
        output[iterator] = 48 + N%2;
        N = N/2;
        iterator++;
      }
      iterator--;
      while(true) {
        cout << output[iterator];
        iterator--;
        if(iterator < 0) break;
      }
      cout << " is " << parity << " (mod 2).\n";
    }

    return 0;
}
