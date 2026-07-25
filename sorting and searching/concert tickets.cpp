#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m ,x;
    cin>>n>>m;
    multiset<int> tickets;
    vector<int> ppl(m);
    for(int i=0;i<n;i++){
        cin>>x;
        tickets.insert(x);
    }
     for(int i=0;i<m;i++){
        cin>>ppl[i];
    } 

    for(int i=0;i<m;i++){
        auto it = tickets.upper_bound(ppl[i]);
        if(it !=tickets.begin()){
            auto result = prev(it);
            cout<<*result<<"\n";
            tickets.erase(result);
        }else{
            cout<<-1<<"\n";
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}