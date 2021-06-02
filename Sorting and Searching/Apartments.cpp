using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,m,k;cin>>n>>m>>k;
    vector<int> ppl(n);
    for(auto &i :ppl)cin>>i;
    vector<int>length(m);
    for(auto &i: length) cin>>i; 

    sort(all(ppl), greater<int>());
    sort(all(length), greater<int>());
    
    // for(auto i :ppl) cout << i << ' ';
    // cout << '\n';
    // for(auto i : length) cout << i << ' ';

    int i =0, j{};
    int cnt{};
    while(i < n and j < m) {
        if(ppl[i]-k > length[j]) ++i;

        elif(ppl[i]+k < length[j]) ++j;

        else ++cnt, ++i,++j;
    }

    cout << cnt << '\n';
    cerr << "\nTime Elapsed: [" << 1e3*clock()/CLOCKS_PER_SEC << " ms]\n";
}
/*
6/2/2021 [m/d/yyyy]
*/
