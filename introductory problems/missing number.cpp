#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=0;
    long long n_sum = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<n_sum-sum<<endl;
    
    
}