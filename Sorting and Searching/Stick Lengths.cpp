using namespace std;
#include "bits/stdc++.h"
 
#define elif else if
#define ceil(x,y) (x+y-1)/y
#define len(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
 
#define int long long
 
int32_t main () { cin.tie(nullptr)->sync_with_stdio(false);
    
    int n;cin>>n;
    
    vector<int> v(n);
    
    for(int i {};i<n;++i) {
        cin>>v[i];
    }
    sort(all(v));
 
    int val = v[n/2], ans{};
 
    for(auto i : v) {
        ans += abs(i - val);
    }
    cout << ans;
    return 0;
}
/*
08/08/21 1:08 [am :flooshed:]
*/
