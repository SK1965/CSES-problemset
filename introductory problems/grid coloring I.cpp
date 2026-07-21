#include <bits/stdc++.h>
using namespace std;

char chars[] ={'A' , 'B' , 'C' , 'D'}; 
void replace(int r , int c , vector<string>& grid){
    int n=grid.size() , m= grid[0].size();
    // r-1 ,c ; r, c-1; r,c;
    char cur = grid[r][c];
    char prev = (c-1 < 0) ? 'X' : grid[r][c-1];
    char top = (r-1 < 0) ? 'X' : grid[r-1][c];
    
    for(auto& opt : chars){
        if(opt!=cur && opt!= prev && opt!= top){
            grid[r][c] = opt;
            break;
        }
    }
}
void solve() {
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            replace(i,j,grid);
        }
    }
    for(int i=0;i<n;i++){
        cout<<grid[i]<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}