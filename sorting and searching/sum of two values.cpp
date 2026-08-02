#include <bits/stdc++.h>
using namespace std;
#define long long int
void solve() {
    int n , x;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto& it : arr){
        cin>>it;
    }

    map<int ,int> numap;
    for(int i=0;i<n;i++){
        int num2 = x - arr[i];
        if(numap[num2]){
            cout<<numap[num2]<<" "<<i+1<<"\n";
            return;
        }
        numap[arr[i]] = i+1;
    }
    cout<<"IMPOSSIBLE \n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}