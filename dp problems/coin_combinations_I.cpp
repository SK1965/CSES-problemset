#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n;
int soln(int x ,vector<int>& coin , vector<int>& dp){
    if(x<0) return 0;
    if(x == 0) return 1;
    if(dp[x] !=-1) return dp[x];
    int ways = 0;
    for(int i=0;i<n;i++){
        ways=(ways+soln(x-coin[i] , coin , dp))%MOD;
    }
    return dp[x] = ways;
}
void solve(){
    int x;
    cin>>n>>x;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    vector<int> dp(x+1,-1);
    cout<<soln(x , coin , dp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}