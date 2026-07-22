#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> arr , int x , int g){
    int n= arr.size();
    int i=0 , j=n-1;
    while(i<=j){
        if(arr[i]+arr[j]<=x){
            g--;
            i++ , j--;
        }
        else{
            g--;
            j--;
        }
        if(g<0) return false;
    }
    return true;
}
void solve() {
    int n , x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    int low =1 , high= n;
    while(low<high){
        int mid = low + (high-low)/2;
        if(ispossible(arr,x,mid)){
            high = mid;
        }else{
            low = mid+1;
        }
    }
    cout<<high<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}