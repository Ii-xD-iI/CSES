#include <bits/stdc++.h>
#define int long long 
#define all(x) begin(x),end(x)
#define endl "\n"
using namespace std;
 
signed main(){
 
    int t; cin >> t;
    int sum{0};
    for(int i {1}; i<t; i++){
        int x; cin >> x;
        sum += x;
    }
    cout << (int)((t*(t+1))>>1)-sum << endl;
    return 0;
}
/*
2020-08-10 
21:58:27
*/
