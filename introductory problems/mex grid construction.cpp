#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> grid(n , vector<int>(n));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i ^ j) << (j == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}