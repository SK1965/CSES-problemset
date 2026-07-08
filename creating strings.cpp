#include<bits/stdc++.h>
using namespace std;
/* ----------: brutforce method :---------
void partition(string s, int i, set<string> &st){
    if(i == s.length()){
        st.insert(s);
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        partition(s,i+1,st);
        swap(s[i],s[j]);
    }
} */

/* ------: custom next permutations solution :------ */
bool custom_next_permutation(string &s){
    int n = s.length();
    int i=n-2;
    while(i>=0 && s[i]>=s[i+1]){
        i--;
    }
    if(i<0){
        sort(s.begin() , s.end());
        return false;
    }
    for(int j=n-1;j>i;j--){
        if(s[j]>s[i]){
            swap(s[i],s[j]);
            break;
        }
    }
    reverse(s.begin()+i+1,s.end());
    return true;
}

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    sort(s.begin(),s.end());
    /* ----------: brutforce method :---------*/
    /* set<string> st;
    partition(s,0,st);
    cout<<st.size()<<endl;
    for(auto it:st){
        cout<<it<<endl;
    } */
   vector<string> permutations;
    /* -----: prebuilt library function :------  */
    /*  do{
        permutations.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<permutations.size()<<endl;
    for(auto it:permutations){
        cout<<it<<endl;
    } */
   /* ------: custom next permutations solution :------ */
     do{
        permutations.push_back(s);
    }while(custom_next_permutation(s));
    cout<<permutations.size()<<endl;
    for(auto it:permutations){
        cout<<it<<endl;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}