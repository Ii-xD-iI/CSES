using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define len(x) (int)(x).size()
#define ceil(x,y) (x + y-1)/y
void IO(string Bessie);

#define int long long

int32_t main() {
    IO("");//

    vector<int> prep(1000005);

    for(int i = 1; i < len(prep); ++i) {
        for(int j = i; j < len(prep); j+=i) {
            ++prep[j];
        }
    }

    int n,x;cin>>n; 
    while(n--) {
        cin>>x; 
        cout << prep[x] << '\n';
    } 


    cerr << "\nTime Elapsed: [" << 1e3*clock()/CLOCKS_PER_SEC << " ms]\n";
}

void IO(string Bessie = "") { 
    cin.tie(nullptr)->sync_with_stdio(false); 
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
     }
}
// taskkill /IM "A.exe" /F
/*
6/9/2021
*/
