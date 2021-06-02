using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);


    int n,x;cin>>n>>x;
    vector<int> v(n);
    for(auto &i: v) cin>>i;
    vector<bool> vis(n);
    sort(all(v));
    int l=0, r = n-1; 
    long long ans{};
    
    while(l < r) {
        // cout << "v[l]: " << v[l] << ',' << "v[r]: " << v[r] << "\n";
        if(l==r)break;
        
        if(v[l]+v[r]>x) {
            --r;
        } 

        elif(v[l] + v[r] <= x) {
            vis[l] = vis[r] = 1;
            ++ans, ++l, --r;
        }
    }
    // for(auto i :vis) cout << i << ' ';
    // cout << '\n';
    cout << ans + count(all(vis), 0);

    cerr << "\nTime Elapsed: [" << 1e3*clock()/CLOCKS_PER_SEC << " ms]\n";
}
/*
6/2/2021 [m/d/yyyy]
*/
