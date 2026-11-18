#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int solve(int n, vector<int> dp){
    if(n==0) return 1;
    //if(dp[i] !=-1) return dp[i];
    int ways = 0;
    for(int i=1; i<=6;i++){
       if(n-i >=0){
           ways+=solve(n-i , dp);
       }
    }
    return ways;
}
void solve(){
    int n;
    cin>>n; 
    vector<int> dp(n+1 , 0);
    //cout<<solve(n , dp);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        int ways = 0;
        for(int j=1;j<=6;j++){
            if(i-j<0) break;
            ways = (ways + dp[i-j]) % MOD;
        }
        dp[i] = ways%MOD;
    }
    cout<<dp[n]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

/* 
1
1+1 2
1+1+1 2+1 1+2 3
4  3 1   2  2  1 3 */
