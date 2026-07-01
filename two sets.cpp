#include<bits/stdc++.h>
using namespace std;
#define int long long
void findset(int n){
    vector<int> a,b;
    int target=n*(n+1)/4;
    for(int i=n;i>=1;i--){
        if(target>=i){
            a.push_back(i);
            target-=i;
        }else{
            b.push_back(i);
        }
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<b.size()<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
}
signed main(){
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    if(sum%2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    findset(n);
}