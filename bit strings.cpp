#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n;
    int val = 1;
    cin>>n;
    for(int i=1;i<=n;i++){
        val = (val*2)%mod;
    }
    cout<<val<<endl;
}