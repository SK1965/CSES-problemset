#include<bits/stdc++.h>
using namespace std;
long long ways(long long n){
    long long ans=0;
    long long total=(n*n*(n*n-1))/2;
    long long attack = 4*(n-1)*(n-2);
    ans=total-attack;
    return ans;
}
int main(){
    long long n;
    cin>>n;
    long long i=1;
    while(i<=n){
        long long ans=ways(i);
        cout<<ans<<endl;
        i++;
    }
}