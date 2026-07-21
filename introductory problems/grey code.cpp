#include<bits/stdc++.h>
using namespace std;
/* string binary(int num , int n){ 
    string bistr="";
    while(num){
        int rem = num%2;
        num=num/2;
        bistr = to_string(rem) + bistr;
    }
    int len = bistr.length();
    while(len<n){
        bistr = "0" + bistr;
        len++;
    }
    return bistr;
} */
int main(){
    int n;
    cin>>n;
    /* string str(n,'0');
    cout<<str<<endl;
     for(int i=1;i<pow(2,n);i++){ 
        string bistr = binary(i,n);
        cout<<bistr<<" ";
        for(int i=n-1;i>=1;i--){
            str[i] = (bistr[i]==bistr[i-1])?'0':'1';
        }
        str[0]=bistr[0];
        cout<<str<<endl;
    }  */
   for(int i=0;i<pow(2,n);i++){
    int gray = i ^ (i>>1);
    cout<<bitset<32>(gray).to_string().substr(32-n,n)<<endl;
   }
}