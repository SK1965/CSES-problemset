#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n;
    cin>>n;

    long long totaldig=0 ,dig = 1  , count = 9 , start = 1;

    while(n > totaldig + (dig * count)){
        totaldig += (dig * count);
        start+=count;
        count*=10;
        dig++;
    }
    long long left = n -totaldig-1;
    long long num =  start+(left/dig);
    long long ind= left%dig;
    cout<<to_string(num)[ind]<<"\n";
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