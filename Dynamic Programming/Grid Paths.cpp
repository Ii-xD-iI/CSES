using namespace std;
#include "bits/stdc++.h"
#define len(DolphinOrz) (int)(DolphinOrz).size()
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define ceil(X,Y) (X + Y-1)/Y
void IO(string Bessie);

int32_t main() {
    IO("");
 
    int n,MAXN = 1e3+7,MOD = 1e9+7;cin>>n;
    vector<vector<char>> v(MAXN,vector<char> (MAXN,'*'));//given array
    vector<vector<long long>> cnt(MAXN,vector<long long> (MAXN));//dp table
 
    for(int i=1;i<=n;++i){
    	for(int j=1;j<=n;++j){
    		cin>>v[i][j];
    	}
    }//IO stuff
 
    cnt[1][1] = 1;//base case
    //dp[i][j] = number of ways to reach coord [i][j] from [1][1]
    if(v[1][1] == '*') {cout << 0 << '\n';return 0;}//its not guranteed that [1][1] is gonna be a valid cell
    
    for(int i=1;i<=n;++i){
    	for(int j=1;j<=n;++j){
    	    if(v[i][j] == '*'){continue;}//if its an invalid cell continue

            if(v[i-1][j] == '.') cnt[i][j]+= (cnt[i-1][j]), cnt[i][j] %= MOD;//if left cell is a valid one then we could reach any cells that it can reach so add its value
    		if(v[i][j-1] == '.') cnt[i][j]+= (cnt[i][j-1]), cnt[i][j] %= MOD;//similar with the top cell 
    	}
    }
 
    // for(int i{};i<=n;++i){
    	// for(int j{};j<=n;++j){
    		// cout << v[i][j] << ":" << cnt[i][j] << " \n"[j==n];
    	// }
    // } 
 
    cout << cnt[n][n];//base 1
    return 0;
}

void IO(string Bessie = "") {   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".txt").c_str(), "r", stdin);
        freopen((Bessie+".txt").c_str(), "w", stdout);
    } 
}
/*
5/10/2021 m/dd/yyyy
2:06am
*/
