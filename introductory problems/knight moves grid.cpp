#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> directions = {
    {-2, -1}, {-2, 1}, 
    {-1, -2}, {-1, 2}, 
    {1, -2},  {1, 2}, 
    {2, -1},  {2, 1}
};
void solve() {
    int n;
    cin>>n;
    
    vector<vector<int>> dist(n,vector<int>(n,-1));
    queue<pair<int ,int>> q;
    q.push({0,0});
    dist[0][0] = 0;
    while(!q.empty()){
        auto [r,c] = q.front();
        q.pop();
        
        for(auto& [dr,dc]:directions){
            int nr = r+dr , nc = c+dc;
            if(nr>=0 && nc>=0 && nr<n && nc<n && dist[nr][nc] ==-1){
                dist[nr][nc] = 1+ dist[r][c];
                q.push({nr,nc});
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}