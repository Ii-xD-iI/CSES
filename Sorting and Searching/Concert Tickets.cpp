using namespace std;
#include "bits/stdc++.h"

#define elif else if
#define ceil(x,y) (x+y-1)/y
#define len(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()

#define int long long

int32_t main () { cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, m; cin >> n >> m;

    vector<int> cost(n);
    for(auto& i : cost) cin >> i;

    vector<pair<int,int>> ppl(m);

    for(int a,i{}; i < m; ++i) {cin >> a;
        ppl[i] = {a, i};
    }

    multiset<int, greater<int>> pq;

    for(auto i : cost) {
        pq.insert(i);
    }

    vector<int> ans(m);

    for(auto i : ppl) {
        auto it = pq.lower_bound(i.first);

        if((it) != pq.end()) {
            ans[i.second] = *it;
            
            pq.erase(it);
        }
        else
            ans[i.second] = -1;
        
    }

    for(auto i : ans) cout << i << '\n';
    cout << '\n';

    return 0;
}
/*
08/08/21 3:38 [am :flooshed:]
*/
