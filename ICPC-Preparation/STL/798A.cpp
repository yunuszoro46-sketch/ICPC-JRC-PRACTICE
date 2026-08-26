#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int n =s.size();
    int mismatch =0;
    int 
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            mismatch++;
        }
    }
    if(mismatch==1){
        cout<<"YES"<<endl;
    }else if(mismatch==0 && n%2!=0){
         cout<<"YES"<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
    
}
