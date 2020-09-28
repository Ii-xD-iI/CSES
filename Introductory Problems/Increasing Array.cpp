#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int n; cin>>n; 
    vector<int> v(n);
    long long sum{};
    for(int i {};i<n;++i)cin>>v[i];
    for(int i=1;i<n;i++){
    	if(v[i]<v[i-1]){
    		sum+=(v[i-1]-v[i]);
    		v[i]=v[i-1];//updates here
    	}
    }
    cout << sum << endl;
    return 0;
}
//TASKKILL /F /IM main.exe
/*
9:50 PM
9/28/2020
*/
//=================================================//
/*
Hab to update the prev element if prev prev was smaller
make it non decreasing 
yea teast case was a bit misleading

consider 10 5 1 input
answer is 14

foshy orz 
*/
//=================================================//
