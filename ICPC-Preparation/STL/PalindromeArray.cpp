#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

       vector<int>v(t);
       for(int i=0;i<v.size();i++){
           cin>>v[i];
       }
       vector <int> temp = v;
       reverse(temp.begin(),temp.end());
       if(v==temp){
        cout<<"YES"<<endl;
       }else{
         cout<<"NO"<<endl;
       }

    }

