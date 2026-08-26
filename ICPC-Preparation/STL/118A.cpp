 #include<bits/stdc++.h>
 using namespace std;
 bool isvowel(char c){
   return(c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i' );

 }
 int main(){
   string s,a;
        cin>>s;
        for(auto u:s){
           char c = tolower(u);
            if(isvowel(c)==0){
               a+='.';
               a+=c;
            }
        }
        cout<<a<<endl;
 }
