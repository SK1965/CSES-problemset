#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n;

int soln(int  r , int c , vector<string>& grid , vector<vector<int>>& dp){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c] =='*') return 0;
    if(r==0 && c==0) return 1;
    if(dp[r][c]!=-1) return dp[r][c];
    dp[r][c] = soln(r-1 , c , grid , dp)%MOD;
    dp[r][c] = (dp[r][c] + soln(r , c-1 , grid , dp))%MOD;
    return dp[r][c];
}
void solve(){
    cin>>n;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    vector<vector<int>> dp(n , vector<int>(n,-1));
    cout<<soln(n-1,n-1,grid ,dp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}