/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 
 */


#include <bits/stdc++.h>

using namespace std;

int main() {
    int iterator, output, i;
    string N;

    while(true) {
      cin >> N;
      output = 0;
      if (N == "0") break;

      iterator = N.size() - 1;
      i = 1;
      while(iterator >= 0) {
        output += (N[iterator] - 48) * (pow(2, i) - 1);
        i++;
        iterator--;
      }

      cout << output << endl;

    }

    return 0;
}
