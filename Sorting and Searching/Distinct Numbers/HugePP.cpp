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
    int a;cin>>a;
    set<int>k;for(int i{};i<a;++i){int x;cin>>x;k.insert(x);}cout << k.size() << endl;

    return 0;
}
/*
12:53 PM
9/1/2020
*/
