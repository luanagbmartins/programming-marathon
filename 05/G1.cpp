/*
 * Author: Luana Guedes Barros Martins
 * Problem title: A jornada do rato
 */

#include <bits/stdc++.h>

int cages[26][26];

int main() {
    int line, column, count_cats;
    int total_paths = 0;

    std::cin >> line >> column;
    std::cin >> count_cats;

    cages[1][1] = 1;
    for(size_t i = 0; i < count_cats; i++) {
        int l, c;
        std::cin >> l >> c;
        cages[l][c] = -1;
    }


    for(size_t i = 1; i <= line ; i++) {
        for(size_t j = 1; j <= column; j++) {
            if(cages[i][j] == -1) cages[i][j] = 0;
            else if (i == 1 && j == 1) continue;
            else cages[i][j] = cages[i][j-1] + cages[i-1][j];
        }
    }

    std::cout << cages[line][column] << '\n';

    return 0;
}
