#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n) , pos(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }

    int ans=1;
    for(int i=1;i<=n;i++){
        if(pos[i]<pos[i-1]) ans++;
    }
    cout<<ans<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}