#include "bits/stdc++.h"
#define len(X) (int)(X).size()
// #define int long long
#define elif else if
#define all(X) X.begin( ), X.end()
using namespace std;
const int MAXN = 1e3+7,INF = 2e9+7;
const long long int INFLL = 1e18+7;

void IO(string Bessie);

int n,m;
vector<vector<char>> v(MAXN, vector<char> (MAXN));
vector<vector<bool>> visited(MAXN, vector<bool> (MAXN));
vector<int> dx{-1,1,0,0}, dy{0,0,-1,1};//directions
string PrevPath= "UDLR"; //come from    
vector<vector<int>> Prev(MAXN,vector<int>(MAXN));
pair<int,int> A,B;


int32_t main() {
    IO("");//perimeter

    cin>>n>>m;
    for(int i {};i<n;++i) {
        for(int j{};j<m;++j) {
            cin>>v[i][j];
            if(v[i][j] == 'A') A.first =i, A.second = j;
            elif(v[i][j] == 'B') B.first=i, B.second = j;
        }
    }
    // cout << "A :" << A.first << ' ' << A.second << '\n' << "B :" << B.first << ' ' << B.second << '\n';
//--------------------------------bfs--------------------------------------
    queue<pair<int,int>> bfs;
    bfs.push(A);
    visited[A.first][A.second] = true;
    //------------debug-------------
    // for(int i {};i<n;++i) {
        // for(int j{};j<m;++j) {
            // cout << visited[i][j] << " \n"[j+1 == m];
        // }
    // }
    //------------------------------

    // cout << bfs.front().first << ' ' << bfs.front().second << '\n';
    while(not bfs.empty()) {
        pair<int,int> Curr = bfs.front();
        // cout << Curr.first << ' ' << Curr.second << '\n'; curr work

        for(int i {};i<4;++i) {
            pair<int,int> Adj;
            Adj = make_pair( Curr.first +dx[i] , Curr.second+dy[i] );
            // ------------bound check--------------
            if(Adj.first < 0 or Adj.first >= n) continue;
            if(Adj.second < 0 or Adj.second >= m) continue;
            //--------------------------------------
            if(visited[Adj.first][Adj.second] or v[Adj.first][Adj.second] == '#') continue;//already visited or wall

            visited[Adj.first][Adj.second] = true;
            Prev[Adj.first][Adj.second] = i;
            bfs.push(Adj);
        }
        
        bfs.pop();
    }

    if(visited[B.first][B.second]) {
        pair<int,int> Tracker = make_pair(B.first, B.second);
        vector<int> ID;//pb indices and reverse
        while(Tracker != A) {
                int step = Prev[Tracker.first][Tracker.second];
                ID.push_back(step);
                
                Tracker = make_pair(Tracker.first - dx[step] , Tracker.second - dy[step]);//retrieving 
        }
        reverse(all(ID));

        cout << "YES\n" << len(ID) << '\n';
        for(int i {};i<len(ID);++i) {
            cout << PrevPath[ID[i]];
        }
        cout << '\n';
        return 0;
    }

    cout << "NO\n";
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
5 8
# # # # # # # #
# . A # . . . #
# . # # . # B #
# . . . . . . #
# # # # # # # #
*/

/*
1/30/2021 m/dd/yyyy
*/
