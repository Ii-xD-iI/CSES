#include "bits/stdc++.h"

#define len(Z) (int)(Z).size()
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define ceil(X,Y) (X + Y-1)/Y
#define test(A) int A;cin>>A;while(A-->0)

using namespace std;

const int MAXN=1e5+7, INF = 2e9+7, MOD = 1e9+7;//check the limits u dum dum
const long long INFLL = 2e18+7;

int N,M;
bool flag=false;
vector<vector<int>> adj(MAXN);
vector<int> colour(MAXN,-1);

void dfs(int A, bool YE);
void Solve();

int32_t main() {

    // test(Dolphin_OTZ)
    Solve();
    return 0;
}
void Solve() {

    cin>>N>>M;
    for(int a,b,i{};i<M;++i) 
        cin>>a>>b,--a,--b,adj[a].push_back(b),adj[b].push_back(a);
    
    // for(int i {};i<N;++i) {
    //     cout << i+1 << ": ";
    //     for (int j{};j<len(adj[i]); ++j) {
    //         cout << adj[i][j]+1 << ", ";
    //     }
    //     cout << '\n';
    // }

    for(int i{};i<N;++i) {
        if(colour[i] == -1)
            dfs(i,0);
    }
    // cout << boolalpha <<  flag << '\n'; 
    if(flag) {
        cout << "IMPOSSIBLE\n";
        return;
    }

    for(int i {};i<N;++i) {
        cout << colour[i]+1 << " \n"[i+1 == N];
    }
    
    return;
}

void dfs(int A, bool YE) {
    if(colour[A] != -1) return;
    
    colour[A] = YE;

    for(auto i: adj[A]) {
        if(colour[i] == -1)//not visited
            dfs(i, colour[A]^1);
        // elif(colour[i] != colour[A]) continue;
        else{
            if(colour[i] == colour[A]){
                flag = true;
                return;
            }
        }
    }
}
/*
2/28/2021 m/dd/yyyy
*/
