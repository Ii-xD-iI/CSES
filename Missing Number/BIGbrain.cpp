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
    Ints n;cin>>n;
    Ints sum{};
    for(int i {1};i<n;i++){Ints x;cin>>x;sum += x;}
    cout << (Ints)((n*(n+1))/2)-sum << endl;
    return 0;
}
/*
12:34 PM
9/1/2020 mm/dd/yyy
*/
