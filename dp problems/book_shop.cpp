#include<bits/stdc++.h>
using namespace std;

int n ,x;
int soln(int i , int j , vector<int>& h , vector<int>& s, vector<vector<int>>& dp){
    if(i<0 || j<0 || i>=n || j>x) return 0;
    if(dp[i][j] !=-1) return dp[i][j];
    if(j>= h[i]){
        dp[i][j]  = max(dp[i][j]  , s[i] + soln(i+1 , j + h[i] , h , s , dp));
        cout<<dp[i][j]<<endl;
    }
    dp[i][j] = max(dp[i][j] , soln(i+1 , j , h,s,dp));
    return dp[i][j];
    
}
void solve(){
    cin>>n>>x;
    vector<int> prices(n) , pages(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    vector<vector<int>> dp(n , vector<int>(x+1 , 0));
   // cout<<soln(0,0,prices,pages,dp);
    for(int j=1;j<=x;j++){
        if(j>=prices[0])
        dp[0][j] = max(dp[0][j-1] , pages[0]);
        else dp[0][j] = dp[0][j-1];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=x;j++){
            if(j>=prices[i]){
                dp[i][j] = max({dp[i][j-1] , dp[i-1][j] , pages[i] + dp[i-1][j-prices[i]]});
            }
            else{
                dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
            }
        }
    }
   
    cout<<dp[n-1][x];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


