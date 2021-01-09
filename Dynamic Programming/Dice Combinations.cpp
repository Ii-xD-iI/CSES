#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define int      long long
#define endl     cout<<'\n'
const int INF = 2e9+1,MAXN = 1e6+7, MOD = 1e9+7;
 
void IO(string Bessie);
 
int32_t main(){
    IO("");//div7
    int n;cin>>n;
    vector<int> dp(MAXN);
    // dp[i] = sum of valid ways to throw the dice such a way that the sum is i
    dp[0] = 1;//1 way to get the sum as 0 {}
    //if we throw 1,2,3,4,5,6 so the ans to dp[i]= dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + ... + dp[i+6] where i>=6
    //so the recurrence 
    for(int i=1;i<=n;++i) {
        for(int j = 1;j<=6;++j) {
            if(j>i) break;
            dp[i] = ((dp[i] + dp[i-j]) % MOD);
        }
    }
    cout << dp[n] << '\n';
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
1/9/2021 m/d/yyyy
4:55 pm
*/
