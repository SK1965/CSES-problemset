#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n , x;
int soln(int i ,int val , vector<int>&coins , vector<vector<int>>& dp){
    if(val == 0) return 1;
    if(i==n || val < 0){
        return 0;
    }
    if(dp[i][val] !=-1) return dp[i][val];
    
    return dp[i][val] = (soln(i , val - coins[i] , coins , dp) +
                         soln(i+1 , val  , coins,dp))%MOD;
}
void solve(){
    cin>>n>>x;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
   // vector<vector<int>> dp(n ,vector<int>(x+1 , -1) );
   // cout<<soln(0,x ,coin , dp);
   vector<int> dp(x+1 , 0);
   dp[0] = 1;
   for(int i=0;i<n;i++){
      for(int j=coin[i];j<=x;j++){
        dp[j] = (dp[j] + dp[j - coin[i]])%MOD; 
      }
   }
   cout<<dp[x]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}