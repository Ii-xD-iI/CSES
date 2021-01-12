#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
// #define int      long long
const int MAXN = 1e5+1,INF = 2e9+1;


void BFS(int A);
// void dfs(int A);

int n,m;
vector<bool> visited(MAXN);
vector<vector<int>> adj(MAXN);//,adjTree(MAXN);
vector<int> path (MAXN);
// vector<int> ShortestPath(MAXN);
bool ye = false;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin>>n>>m;
    for(int i=0,a,b;i<m;++i){
        cin>>a>>b,a--,b--;
        adj[a].push_back(b),adj[b].push_back(a);
    }

    BFS(0);//starting node

    if(not ye) {cout << "IMPOSSIBLE\n"; return 0;}
    for(int i {};i<n;++i) visited[i] = false;

    // for(int i {};i<m;++i){
        // adjTree[i].push_back(path[i]);
        // adjTree[path[i]].push_back(i);
    // }
    vector<int> ShortestPath;
    // dfs(5);
    int k = n-1;
    while(k != -1) {
        ShortestPath.push_back(k);
        k = path[k];
    }

    reverse(all(ShortestPath));
    cout << len(ShortestPath) << '\n';
    for(int i {};i<len(ShortestPath);++i) cout << ShortestPath[i]+1 << ' ';
    
    return 0;
}

void BFS(int A) {
    queue<int> topolayer;
    topolayer.push(A);

    visited[A] = true;

    while(not topolayer.empty()) {
        int Currnode = topolayer.front();

        for(auto Neighbour: adj[Currnode]) {
            if(visited[Neighbour]) continue;//if already visited continue

            visited[Neighbour] = true;

            topolayer.push(Neighbour);
            path[Neighbour] = Currnode;
            if(Neighbour+1 == n) {
                ye = true;
                break;
            }            
        }
        topolayer.pop();
    }
    path[A] = -1;
}

/*
1/12/2021 m/dd/yyyy
*/
