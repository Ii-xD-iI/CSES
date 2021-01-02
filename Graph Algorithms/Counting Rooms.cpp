#include "bits/stdc++.h"
 
using namespace std;

#define MAXN     1e3+7


int n,m;
vector<vector<char>> v(MAXN,vector<char> (MAXN));//map of a building
int connectedcmp{};//number of rooms 
vector<int> dx{0,0,-1,1} , dy{1,-1,0,0}; // to avoid hardcoding (order of the elements is important)
vector<vector<bool>> vis(MAXN, vector<bool>(MAXN));//visited array 

void floodfill(int x, int y); // floodfill prototype

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin>>n>>m;
    for(int i {};i<n;++i) {
        for(int j{};j<m;++j) {
            cin>>v[i][j];
        }
    }//IO stuff

    for(int i {};i<n;++i) {
        for(int j{};j<m;++j) {
            if( (not vis[i][j]) and (v[i][j] != '#') ){//if(cell not visited and is not a wall'#')
                floodfill(i,j);//floodfill
                ++connectedcmp;//increment if iteration over a connected component is finished
            }
        }
    }
    cout << connectedcmp << '\n'; //return the number of connected components
    return 0;
}

void floodfill(int x, int y) {
    if((x>=n) or (x<0) or (y >= m) or (y<0) ) {return ;}//if floodfill cross the limits of the map then break
    if((v[x][y] == '#') or (vis[x][y])) {return ;}//if that cell is a wall or is already visited then break

    vis[x][y]=1;//mark the cell visited
    
    for(int k=0;k < 4; ++k) {
        // check bounds for x + dx[k] and y + dy[k]
        floodfill(x+dx[k] , y+dy[k]);
    }
}
