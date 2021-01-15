#include "bits/stdc++.h"
using namespace std;
#define all(X) (X).begin(), (X).end()
#define elif else if
const int MAXN = 1e9;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<pair<int,int>> v;
    for(int i =0,a,b;i<n;++i) {
        cin>>a>>b;
        v.push_back(make_pair(a,1)),v.push_back(make_pair(b,2));
    }
    sort(all(v));
    int cnt{};
    int ans=1;
    for(int i {};i<n*2;++i) {
        if(v[i].second == 1) {cnt++;ans = max(ans,cnt);}
        elif(v[i].second == 2) {cnt--;ans = max(ans,cnt);}
    }
    cout << ans << '\n';
    return 0;
}
/*
1/16/2020 m/dd/yyyy
3:33 AM
Kanna Chan Orz
*/
