#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define INF   2e9+1
// #define int      long long
#define MAXN     27//size of freq till Z
#define endl     cout<<'\n'
 
void IO(string Bessie);
 
int32_t main(){
    IO("");//div7
 
    string s;cin>>s;
    const int n = len(s);    
    vector<int> freq(MAXN+3);
 
    for(int i{};i<n;++i) {
        ++freq[((int)s[i])-64];
    }
    if(n%2==0) {
        for(int i {};i<len(freq);++i) {
            if(freq[i]%2 != 0) {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
 
        string half="";
 
        for(int j=1;j<=len(freq)-1;++j) {
            if(freq[j] == 0) continue;
            // cout << freq[j] << '\n';
            for(int i=1;i<=freq[j]/2;++i) {
                half += (char)j+64;
            }
        }
    
        cout << half;
        reverse(all(half));
        cout << half << '\n';
    }
    elif(n%2 != 0) {
        int mid=-1;
        bool ye = false;
 
        for(int i {};i<len(freq);++i) {
            if(freq[i]%2 == 0 or freq[i] == 0) continue;
            if(freq[i]%2 == 1 and (not ye)) {
                ye = true;
                mid = i;
 
            }
            else{
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
        string half = "";
 
        for(int j=1;j<=len(freq)-1;++j) {
            if(freq[j] == 0) continue;
 
            for(int i=1;i<=floor(freq[j]/2);++i) {
                half += (char)j+64;
            }
        } 
 
        cout << half;
        if(mid != -1);
        cout << ((char)(mid+64));
        reverse(all(half));
        cout << half << '\n';
    
    }
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
1/7/2021 m/d/yyyy
4:15 pm
*/
