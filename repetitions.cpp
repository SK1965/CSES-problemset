#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int max_rep=0;
    for(int i=0;i<n;i++){
        int count=1;
        while(s[i]==s[i+1]){
            count++;
            i++;
        }
        max_rep=max(max_rep,count);
    }
    cout<<max_rep<<endl;
}