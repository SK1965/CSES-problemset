#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if((a+b)%3==0 && min(a,b)*2>=max(a,b)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
  return 0;  
}