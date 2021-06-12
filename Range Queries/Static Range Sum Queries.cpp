using namespace std;
#include <bits/stdc++.h>
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define len(x) (int)(x).size()
#define ceil(x,y) (x + y-1)/y
#define int long long
 
int32_t main() {
	cin.tie(nullptr)->sync_with_stdio(false);
 
	int n,m;cin>>n>>m;
	vector<int> v(n+1);
	for(int i =1; i <= n; ++i) cin>>v[i], v[i] += v[i-1];
 
 
	while(m--) {
		int a,b;cin>>a>>b; 
		cout << abs(v[a-1] - v[b]) << '\n';
	}	 
}
// taskkill /IM "3.exe" /F
/*
5/13/2021
*/
