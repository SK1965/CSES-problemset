#include<bits/stdc++.h>
using namespace std;
#define int long long
int track(int pos ,int curent ,int sum , vector<int> &apples){
    if(pos == apples.size()){
        return abs((sum-curent)-curent);
    }
    return min(track(pos+1,curent+apples[pos],sum , apples) , 
              track(pos+1,curent,sum,apples));
}
signed main(){
    int n;
    cin>>n;
    vector<int> apples(n);
    int sum=0;
    for(auto &it:apples){
        cin>>it;
        sum+=it;
    }
    cout<<track(0,0,sum,apples)<<endl;
    
}