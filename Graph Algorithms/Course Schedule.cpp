using namespace std;
#include "bits/stdc++.h"
#define len(DolphinOrz) (int)(DolphinOrz).size()
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define ceil(X,Y) (X + Y-1)/Y
void setIO(string CmDlorz);

int32_t main() {
    setIO("");

    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<int> indeg(n+1);
    for(int a,b,i{};i<m;++i) {
        cin>>a>>b;
        adj[a].push_back(b);
        indeg[b]++;
    }

    queue<int> q;
    for(int i=1;i<=n;++i) {
        if(not indeg[i]) q.push(i);
    }
    vector<int> ans;
    while(not q.empty()) {
        int curr = q.front();
        ans.push_back(curr);
        for(auto i:adj[curr]) {
            --indeg[i];
            if(not indeg[i]) q.push(i);
        }
        q.pop();
    }

    if(len(ans) < n) {
        cout << "IMPOSSIBLE\n";
    }
    else {
        for(auto i :ans) cout << i << ' ' ;
        cout << '\n';
    }
    return 0;
}

void setIO(string CmDlorz = "") {   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    if (len(CmDlorz)) {
        freopen((CmDlorz+".txt").c_str(), "r", stdin);
        freopen((CmDlorz+".txt").c_str(), "w", stdout);
    } 
}
/*
5/11/2021 m/dd/yyyy
4:38 pm
*/
