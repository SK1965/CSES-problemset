#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b > n || ((a==0 || b==0) && a+b!=0)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    for(int i=1;i<=n;i++) cout<<i<<" ";
    cout<<endl;
    int tie = n-(a+b);
    if(tie==n){
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
        return;
    }
    if(tie==0){
        for(int i=a+1;i<=n;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=a;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    int m =n-tie;
    for(int i=a+1;i<=m;i++){
        cout<<i<<" ";
    }
    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }
    for(int i=m+1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}