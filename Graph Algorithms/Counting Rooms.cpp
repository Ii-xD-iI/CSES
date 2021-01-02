#include "bits/stdc++.h"
 
using namespace std;

#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define bignum   1e9+1
// #define int      long long
#define MAXN     1e3+7


int n,m;
vector<vector<char>> v(MAXN,vector<char> (MAXN));
int connectedcmp;
vector<int> dx{0,0,-1,1} , dy{0,0,-1,1};
vector<vector<bool>> vis(MAXN, vector<bool>(MAXN));

void floodfill(int x, int y);

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);;
    
    cin>>n>>m;
    for(int i {};i<n;++i) {
        for(int j{};j<m;++j) {
            cin>>v[i][j];
        }
    }

    for(int i {};i<n;++i) {
        for(int j{};j<m;++j) {
            if( (not vis[i][j]) and (v[i][j] != '#') ){
                floodfill(i,j);
                ++connectedcmp;
            }
        }
    }
    cout << connectedcmp << '\n'; 
    return 0;
}

void floodfill(int x, int y) {
    if((x>=n) or (x<0) or (y >= m) or (y<0) ) {return ;}
    if((v[x][y] == '#') or (vis[x][y])) {return ;}

    vis[x][y]=1;
    
    floodfill(x+1 ,y);
    floodfill(x-1 ,y);
    floodfill(x, y+1);
    floodfill(x, y-1);
}
