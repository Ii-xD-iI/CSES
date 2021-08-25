#include "bits/stdc++.h"
using namespace std;

#define elif else if
#define len(x) (int)(x).size()

int main() { cin.tie(nullptr)->sync_with_stdio(false);

    const int MOD = 1e9+7;
    int N, X; cin >> N >> X;
    vector<long long> DP(X+1), coins(N);
    for(auto &i : coins) cin >> i;

    DP[0] = 1;
    
    for(int i = 1; i <= X; ++i) { 
        for(auto &j : coins) {
            if(j <= i) {
                DP[i] += DP[i-j];
                DP[i] %= MOD;
            }
        }
    }   
    
    //DP[i] = number of ways to make the change `i`
    cout << DP[X];    
}
/*
25/8/2021
11:33 pm
*/
