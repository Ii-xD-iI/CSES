#include "bits/stdc++.h"
 
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
int main () {
    GS;
    int n;cin>>n;
    vector <int> a(n);
    for(int i {};i<n;i++) cin>>a[i];
    sort(all(a));
	vector <int>c;
	c.push_back(a[0]);
	for(int i {1};i<n;i++){
		if(a[i]!= a[i-1]) c.push_back(a[i]);
	}
    cout << c.size()<< endl;
 
    
    return 0;
}
/*
2020-08-31 
20:59:58
*/
