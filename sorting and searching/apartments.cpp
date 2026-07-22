#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ,m ,k ,x;
    cin>>n>>m>>k;
    vector<int> apartments(n) ;
    vector<int> aplicants(m);
    for(int i=0;i<n;i++){
        cin>>apartments[i];
    }
    for(int i=0;i<m;i++){
        cin>>aplicants[i];
    }
    sort(apartments.begin() , apartments.end());
    sort(aplicants.begin() , aplicants.end());
    
    int j=0;
    int cnt=0;
    for(int i=0;i<m;i++){
        while(j<n &&abs(apartments[j] - aplicants[i]) >k){
            if(apartments[j] > aplicants[i]){
                break;
            }
            j++;
        }
        if(j>=n) break;
        if(abs(apartments[j] - aplicants[i])<=k){
            cnt++;
            j++;
        } 
    }
    cout<<cnt<<endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}