#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>  timings(n);
    for(auto& [a,b] : timings){
        cin>>a>>b;
    }
    sort(timings.begin() , timings.end() );

    // (2,8) , (3,4) , (4,6) , (9,12) , (8,12) 
    int s = timings[0].first , e = timings[0].second;
    int cnt = 1;
    for(int i=1;i<n;i++){
        int cs = timings[i].first , ce = timings[i].second;
        if(cs >= e){
            cnt++;
            e = ce;
        }else{
            e  = min(e,ce);
        }
    }
    cout<<cnt<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}