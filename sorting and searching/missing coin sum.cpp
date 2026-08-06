#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int cursum =0;
    for(int i=0;i<n;i++){
        if(cursum+1<a[i]) {
            cout<<cursum+1<<"\n";
            return;
        }
        cursum+=a[i];
    }
    cout<<cursum+1<<"\n";

}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}