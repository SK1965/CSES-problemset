#include<bits/stdc++.h>
using namespace std;
int to_int(string s){
    int n=0;
    int p=0;
    for(int i=s.size();i>=0;i--){
        n+=pow(s[i] , p);
        p++;
    }
    return n;
}
int soln(int n , vector<int>& dp){
    if(n<=0) return 0;
    string s = to_string(n);
    int dig = *max_element(s.begin(), s.end()) - '0';
    return 1+soln(n-dig ,dp);
}
void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1 , -1);
    cout<<soln(n ,dp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}