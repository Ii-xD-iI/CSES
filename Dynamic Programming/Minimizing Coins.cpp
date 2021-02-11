#include "bits/stdc++.h"

using namespace std;

#define len(X) (int)(X).size()
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
#define ceil(XXX,YYY) (XXX + YYY-1)/YYY 

const int32_t MAXN = 1e5+7 ,MOD = 1e9+7, INF = 2e9;//CHECK THE LIMITS U DUM DUM
const long long INFLL = 1e18+7;

void IO(string Bessie);

int32_t main() {
    IO("");

    int n,k;cin>>n>>k;

    vector<int> dp(k+1,INF),coin(n);
    for(int i {};i<n;++i) cin>>coin[i];

    //dp[i] = minumum coin to make sum i
    dp[0] = 0;// imagine using any coin to make some 0
    for(int i {};i<=k;++i) {//ith cell
    	for(int j{};j<n;++j) {//check evrey coin whcih is < i
    		if(coin[j]>i){continue;}//if coin size > change

    		dp[i]= min(dp[i], dp[i - coin[j]]+1);//minimum of initial and (minimum of i-coin[j])
    	}
    }

    // for(int i {};i<=k;++i) {
    	// cout << dp[i] << '\n';
    // }
    if(dp[k] == INF){cout << -1;return 0;}
    cout << dp[k] << '\n';
    return 0;
}

void IO(string Bessie = "") {   
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 
}
/*
2/12/2021 m/dd/yyyy
1:25 am :flushed:
*/
