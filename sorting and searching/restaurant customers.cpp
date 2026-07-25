#include <bits/stdc++.h>
using namespace std;
inline bool comparator(auto a , auto b){
    {
        if(a.second < b.second) return true; 

        return false;
    }
}
void solve() {
    int n ,a,b;
    cin>>n;
    vector<pair<int , char>> entries(2*n);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        entries[2*i] = {a , 'I'};
        entries[2*i+1] = {b,'O'};
    }
    sort(entries.begin(),entries.end());
    int mx=0  , curmax = 0;
    for(auto [time , e] : entries){
        if(e == 'I'){
            curmax++;
        }else{
            mx = max(curmax , mx);
            curmax--;
        }
    }
    cout<<mx<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}