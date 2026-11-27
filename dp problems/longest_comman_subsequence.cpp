#include<bits/stdc++.h>
using namespace std;
int n , m;
vector<int> a , b;
vector<vector<int>> dp;;
int rec(int i , int j){
    if(i>=n || j>=m) {
       return 0;
    };
    if(dp[i][j] !=-1) return dp[i][j];

    if(a[i] == b[j]){;
       return dp[i][j] = 1+rec(i+1,j+1) ;
    }
    return dp[i][j] = max({rec(i+1,j) , rec(i , j+1) , rec(i+1 , j+1)});
}
void solve(){
    cin>>n>>m;
    a.resize(n);
    b.resize(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    dp.resize(n+1 , vector<int>(m+1 , -1));
    cout<<rec(0,0)<<'\n';
    
     vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i++;
            j++;
        } else if (rec(i + 1, j) >= rec(i, j + 1)) {
            i++;
        } else {
            j++;
        }
    }

    for (int x : ans) cout << x << " ";
    cout << '\n';
   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}