//problem: https://codeforces.com/contest/515/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
     long long  a,b,c;
    cin>>a>>b>>c;

    long long  min = abs(a) + abs(b);
     ///long long  v = abs(c-min);

     if (c>=min &&  (c-min)%2==0) {
         cout<<"Yes"<<endl;
     }else {
         cout<<"No"<<endl;
     }
    
}
