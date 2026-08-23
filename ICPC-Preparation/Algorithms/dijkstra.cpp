// Dijkstra shortest paths (non-negative weights)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);

vector<ll> dijkstra(int n, int src, const vector<vector<pair<int,ll>>>& g) {
    vector<ll> dist(n, INF);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    dist[src]=0; pq.push({0,src});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if (d!=dist[u]) continue;
        for (auto [v,w]: g[u]){
            if (dist[v] > d + w){
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
