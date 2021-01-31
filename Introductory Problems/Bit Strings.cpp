#include "bits/stdc++.h"
#define len(X) (int)(X).size()
// #define int long long
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
using namespace std;
const int MAXN = 20,INF = 2e9+7,MOD = 1e9+7;
const long long int INFLL = 1e18+7;
void IO(string Bessie);

int32_t main() {
    IO("");//perimeter

    int n;cin>>n;
    long long value=1;
    // 2^n 
    for(int i{};i<n;++i) {
        value = (value*2)%MOD;
    }
    cout << value << '\n';
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
1/31/2021  m/dd/yyyy
*/
