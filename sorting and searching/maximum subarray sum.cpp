#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int max_sum =a[0] , current_sum =a[0];
    for(int i=1;i<n;i++) {
        if(current_sum < 0) current_sum = 0;
        current_sum += a[i];
        max_sum = max(max_sum , current_sum);
    
    }
    cout<<max_sum<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}