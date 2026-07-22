#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ,x;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    cout<<st.size();
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}