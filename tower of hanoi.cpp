#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n , char from , char to , char aux){
    if(n==1){
        cout<<from<<" "<<to<<endl;
        return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout<<from<<" "<<to<<endl;
    towerOfHanoi(n-1,aux,to,from);
}
void solve(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    towerOfHanoi(n,'1','3','2');
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}