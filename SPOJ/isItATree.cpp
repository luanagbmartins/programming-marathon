/*
 * Author: Luana Guedes Barros Martins
 * Problem title: Spoj - Is it a tree
 */

#include <bits/stdc++.h>
#define MAX 10000

using namespace std;

int visitCount = 0;
bool visit[MAX] = {false};
map< int, vector<int> > graph;

void dfs(int raiz) {

    if(!visit[raiz]) {
        visit[raiz] = true;
        visitCount++;
    }
    for(int i = 0; i < graph[raiz].size(); i++) {
        if(!visit[graph[raiz][i]]) {
            visit[graph[raiz][i]] = true;
            visitCount++;
            dfs(graph[raiz][i]);
        }
    }
}

int main() {
    int N, M;
    int raiz;
    cin >> N >> M;


    for(int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
            if(i == 0) raiz = u;
            graph[u].push_back(v);
            graph[v].push_back(u);
    }

    if(N-M == 1) {
        dfs(raiz);
        if(visitCount == N) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else cout << "NO" << endl;

    return 0;
}
