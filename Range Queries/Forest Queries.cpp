using namespace std;
#include "bits/stdc++.h"
 
const int NAX = 1e3+1;
 
int main() {cin.tie(nullptr)->sync_with_stdio(false);
 
	int n, q; cin >> n >> q;
 
	vector<vector<int>> forest (NAX, vector<int> (NAX));
 
	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j) { char c; cin >> c;
			forest[i][j] = (c == '*');
		}
	
	vector<vector<int>> prefx(NAX, vector<int> (NAX));
	for(int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j) 
			prefx[i][j] += (forest[i][j] + prefx[i-1][j] + prefx[i][j-1] - prefx[i-1][j-1]);
 
	while (q --> 0) {int y1, x1, y2, x2;
		cin >> x1 >> y1 >> x2 >> y2;
 
		cout << prefx [x2] [y2] - 
				prefx [x1 - 1] [y2] - 
				prefx [x2] [y1 - 1] + 
				prefx[x1 - 1] [y1 - 1] << '\n'; 
	}
	return 0;
}
