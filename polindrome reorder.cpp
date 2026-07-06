#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.length();

    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        freq[s[i]-'A']++;
    }
    string ans(n,' ');
    int i=0,j=n-1;
    for(int k=0;k<26;k++){
        while(freq[k]>=2){
            ans[i]=char(k+'A');
            ans[j]=char(k+'A');
            i++;
            j--;
            freq[k]-=2;
        }
    }
    bool odd=false;
    for(int k=0;k<26;k++){
        if(freq[k]){
            if(odd){
                cout<<"NO SOLUTION"<<endl;
                return;
            }
            ans[n/2]=char(k+'A');
            odd=true;
        }
    }
    cout<<ans<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}