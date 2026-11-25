#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int n,m;
vector<int> arr;
vector<vector<int>> dp;
int rec(int i ,int prev){
    if(prev<1 || prev>m) return 0;
    if(i==n) return 1;
    
    if(arr[i] !=0){
        if(abs(arr[i] - prev)>1) return 0;
        return rec(i+1 , arr[i]);
    }
    if(dp[i][prev] !=-1) return dp[i][prev];
    int ways = 0;
    for(int j=-1;j<=1;j++){
        ways = (ways+ rec(i+1 , prev+j))%MOD;
    }
    return dp[i][prev] = ways;
}
void solve(){
    cin>>n>>m;
    arr.resize(n);
    dp.resize(n , vector<int>(m+1,-1));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
        int ans = 0;
    if (arr[0] != 0) {
        ans = rec(1, arr[0]);
    } else {
        for (int val = 1; val <= m; val++) {
            ans = (ans + rec(1, val)) % MOD;
        }
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}