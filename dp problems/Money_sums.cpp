#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    cin>>n;
    vector<int> coins;
    coins.resize(n , -1);
    for(int i=0;i<n;i++) cin>>coins[i];
    int sum = accumulate(coins.begin() , coins.end() , 0);
    vector<int> dp(sum+1 , 0);
    dp[0] = 1;
    
    for(int i=0;i<n;i++){
        vector<int> temp = dp;
        for(int j=1;j<=sum;j++){
            if(j>=coins[i] && dp[j-coins[i]] == 1){
                temp[j] = 1;
            }
        }
        dp = temp;
    }
    vector<int> res;
    for(int i=1;i<sum+1;i++){
        if(dp[i]==1){
            res.push_back(i);
        }
    }
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}