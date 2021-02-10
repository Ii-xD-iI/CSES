#include "bits/stdc++.h"

using namespace std;

#define len(X) (int)(X).size()
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
#define ceil(XXX,YYY) (XXX + YYY-1)/YYY 

const int32_t MAXN = 1e5+7 ,MOD = 1e9+7, INF = 2e9+7;
const long long INFLL = 1e18+7;

void IO(string Bessie);
void dfs(int A, const int dir);

int n,m;
vector<int> adj[MAXN][2];//array of vectors and ints
vector<bool> visited(MAXN);

int32_t main() {
    IO("");
    /*
    any node can reach the root
    root can reach any node 

    thus any node can reach any other USING THE ROOT NODE 
    hmmmmmmmmm
    so every node as to be in a huge loop 
    not sure 
    */
    cin>>n>>m;
    for(int a,b,i{};i<m;++i) {
        cin>>a>>b,--a,--b;
        adj[a][1].push_back(b),adj[b][2].push_back(a);
    }

    //spanning outwards from the root
    dfs(0,1);
    for(int i {};i<n;++i) {
        if(not visited[i]) {//outwards so from root to i (0->i)
            cout << "NO\n" << 1 << ' ' << i+1 << '\n';
            return 0;//break
            //just needs A pair i believe :catt
        }
    }
    //bug : forgot to memset
    //why am even i writing that

    fill(all(visited),0);

    dfs(0,2);//from i to root 
    for(int i {};i<n;++i) {
        if(not visited[i]) {
            cout << "NO\n" << i+1 << ' ' << 1 << '\n';
            return 0;
        }
    }

    cout << "YES\n" << '\n';

    return 0;
}

void dfs(int A, const int dir) {
    visited[A] = true;
    for(int i : adj[A][dir]){
        if(not visited[i]) dfs(i,dir);
    }
}

void IO(string Bessie = "") 
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 
}
/*
2/10/2021 d/mm/yyyy
*/
