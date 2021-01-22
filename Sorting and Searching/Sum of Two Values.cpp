#include "bits/stdc++.h"
#define len(X) (int)(X).size()
#define int long long
#define elif else if
using namespace std;
const int MAXN = 2e5+7,INF = 2e9+1;

void IO(string Bessie);


int32_t main() {
    IO("");//

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i{};i<n;++i) {
        cin>>v[i].first;
        v[i].second = i+1;
    }
    
    sort(v.begin(), v.end());

    int l=0,r = n-1;//pointers

    while(l<r) {
        int val = v[l].first+v[r].first;
        if(val == k) {cout << v[l].second << ' ' << v[r].second << '\n'; return 0;}

        elif(val > k) {r--;}
        elif(val < k) {l++;}
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

void IO(string Bessie = "") { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
     }
}
/*
1/22/2021 m/dd/yyyy
*/
