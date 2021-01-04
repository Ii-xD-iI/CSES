#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define INF   2e9+1
// #define int      long long
#define MAXN     1e5+7
 
int n,m;
map<int,vector<int>> adj;
vector<bool> visited(MAXN);
vector<int> idk;
int cmp = -1;
 
void dfs(int& A);
 
int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    cin>>n>>m;
    if(n==0){cout << 0 << '\n';return 0;}
 
    for(int i=0,a,b;i<m;++i) {
        cin>>a>>b,a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    for(int i {};i<n;++i) {
        if(not visited[i]) {
            dfs(i);
            ++cmp;
            idk.push_back(i);
        }
    }
 
    cout << cmp << '\n';
    for(int i=1;i<len(idk);++i) {
        cout << idk[i-1]+1 << ' ' << idk[i]+1 << '\n';
    }
 
    return 0;
}
 
void dfs(int& A) {
    visited[A] = true;
    for(auto Neighbour: adj[A]) {
        if(not visited[Neighbour]) dfs(Neighbour);
    }
}
