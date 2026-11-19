#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(x + 1, INF));

    for (int i = 0; i < n; i++) {
        dp[i][0] = 0;
    }

    for (int j = 1; j <= x; j++) {
        if (j >= coins[0] && dp[0][j - coins[0]] != INF) {
            dp[0][j] = 1 + dp[0][j - coins[0]];
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= x; j++) {
            int not_take = dp[i - 1][j];
            int take = INF;
            if (j >= coins[i] && dp[i][j - coins[i]] != INF) {
                take = 1 + dp[i][j - coins[i]];
            }
            dp[i][j] = min(take, not_take);
        }
    }

    cout << (dp[n - 1][x] == INF ? -1 : dp[n - 1][x]) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
