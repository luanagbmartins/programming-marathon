/*
 * Author: Luana Guedes Barros Martins
 * Problem title: 106 miles to Chicago
 */

#include <bits/stdc++.h>
#define MAX 100

std::vector<int> graph[MAX];
int distance[MAX];
int previous[MAX];

int min(std::vector<int> v) {
    int min_value = 101;
    int v_min;
    for(std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
        if((*it).second < min_value) {
            min_value = (*it).second;
            v_min = (*it).first;
        }
    }
    return menor;

}

void dijkstra(int intersections) {
    std::list<int> Q;
    int u = intersections;

    for(size_t i = 0; i < intersections; i++) Q.push_back(i);

    while(!Q.empty()) {
        u = min(graph[u]);
        Q.remove(u);
        for(std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
            int alt = distance[u] + (*it).second;
            if(alt < distance[(*it)]) {
                distance[(*it)] = alt;
                previous[(*it)] = u;
            }
        }
    }
}

int main() {
    int intersections, streets;

    while(true) {
        std:cin >> intersections;
        if(intersections == 0) break;
        std:cin >> streets;

        for(size_t i = 0; i < streets; i++) {
            int pointA, pointB, percentage;
            std::cin >> pointA >> pointB >> p;
            graph[pointA-1].push_back(std::make_pair(pointB-1, percentage));
            graph[pointB-1].push_back(std::make_pair(pointA-1, percentage));
        }

        dijkstra(intersections);

    }

}
