/*
 * Author: Luana Guedes Barros Martins
 * Problem title: Robô Colecionador
 */

#include <bits/stdc++.h>
#define MAX 100

char map[MAX][MAX];


int main() {
    int line, column, instructions;
    int count_figures = 0;
    int x, y;

    std::cin >> line >> column >> instructions;

    for(size_t i = 0; i < line; i++) {
        for(size_t j = 0; j < column; j++) {
            char temp;
            std::cin >> temp;
            map[i][j] = temp;
            if(map[i][j] == 'N' || map[i][j] == 'S' || map[i][j] == 'L' || map[i][j] == 'O') {
                y = i;
                x = j;
            }
        }
    }

    for(size_t i = 0; i < instructions; i++) {
        char directions;
        std::cin >> directions;

        if(directions == 'D') {
            if(map[y][x] == 'N') map[y][x] = 'L';
            else if(map[y][x] == 'L') map[y][x] = 'S';
            else if(map[y][x] == 'S') map[y][x] = 'O';
            else if(map[y][x] == 'O') map[y][x] = 'N';
        }
        else if(directions == 'E') {
            if(map[y][x] == 'N') map[y][x] = 'O';
            else if(map[y][x] == 'O') map[y][x] = 'S';
            else if(map[y][x] == 'S') map[y][x] = 'L';
            else if(map[y][x] == 'L') map[y][x] = 'N';
        }
        else if(directions == 'F') {
            if(map[y][x] == 'N') {
                if(y > 0) {
                    if(map[y-1][x] != '#') {
                        map[y][x] = '.';
                        --y;
                        if(map[y][x] == '*') count_figures++;
                        map[y][x] = 'N';
                    }
                }
            }
            else if(map[y][x] == 'O') {
                if(x > 0) {
                    if(map[y][x-1] != '#') {
                        map[y][x] = '.';
                        --x;
                        if(map[y][x] == '*') count_figures++;
                        map[y][x] = 'O';
                    }
                }
            }
            else if(map[y][x] == 'S') {
                if(y < line-1) {
                    if(map[y+1][x] != '#') {
                        map[y][x] = '.';
                        ++y;
                        if(map[y][x] == '*') count_figures++;
                        map[y][x] = 'S';
                    }
                }
            }
            else if(map[y][x] == 'L') {
                if(x < column-1) {
                    if(map[y][x+1] != '#') {
                        map[y][x] = '.';
                        ++x;
                        if(map[y][x] == '*') count_figures++;

                        map[y][x] = 'L';
                    }
                }
            }
        }
    }

    std::cout << count_figures << std::endl;

    return 0;
}
