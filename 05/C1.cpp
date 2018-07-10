/*
 * Author: Luana Guedes Barros Martins
 * Problem title: Entregador de Pizza
 */

#include <bits/stdc++.h>
#define MAX 21

char map[MAX][MAX];
int aux[MAX][MAX];
std::queue< pair< int, int > > Q;

int main() {
    int line, column, count_intersec = 0;
    char paths, direction;

    std::cout << line << column;
    for(size_t i = 1; i < line; i++) {
        for(size_t j = 1; j < column; j++){
            std::cin >> paths;
            map[i][j] = paths;
            if(map[i][j] == '-' || map[i][j] == '|') aux[i][j] = 2;
            else if(map[i][j] == '+') aux[i][j] = 4;
        }
        map[i] = '*' + map[i] + '*';
    }
    map[0].insert(map[0].begin(), column+2, '*');
    map[line].insert(map[line].begin(), column+2, '*');

    int i = 1, j = 1;
    Q.push(make_pair(i, j));

    while(!Q.empty()) {
        i = Q.front().first;
        j = Q.front().second;
        Q.pop();

        if (i == line-1 && j == column-1) {
            break;
        } else if(!visit[i][j].first && (map[i][j] == '-' || map[i][j] == '|' || map[i][j] == '+')) {
            direction = map[i][j];
        }

        if(direction == '-' && visit[i][j].second == 0) {
            visit[i][j].second += 1;
            if(j < line-1 && map[i][j+1] != '*') j++;
            count_intersec++;
        }
        else if(direction == '-' && visit[i][j].second == 1) {
            visit[i][j].first = true;
            if(j > 0 && map[i][j-1] != '*') j--;
        }
        else if(direction == '|' && visit[i][j].second == 0) {
            visit[i][j].second += 1;
            if(i < column-1 && map[i+1][j] != '*') i++;
            count_intersec++;
        }
        else if(direction == '|' && visit[i][j].second == 1) {
            visit[i][j].first = true;
            if(i > 0 && map[i-1][j] != '*') i--;
        }
        else if(direction == '+' && visit[i][j].second == 0) {
            visit[i][j].second += 1;
            if(j < line-1 && map[i][j+1] != '*') j++;
            count_intersec++;
        }
        else if(direction == '+' && visit[i][j].second == 1) {
            visit[i][j].second += 1;
            if(i < column-1 && map[i+1][j] != '*') i++;
        }
        else if(direction == '+' && visit[i][j].second == 2) {
            visit[i][j].second += 1;
            if(i > 0 && map[i-1][j] != '*') i--;
        }
        else if(direction == '+' && visit[i][j].second == 3) {
            visit[i][j].first = true;
            if(j > 0 && map[i][j-1] != '*') j--;
        }
    }

    return 0;
}
