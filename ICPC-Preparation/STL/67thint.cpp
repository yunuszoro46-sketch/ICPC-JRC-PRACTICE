// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        
        long long  sum=0;        
        vector<int>v(7);
        for(int i=0;i<7;i++){
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        for(int i=0;i<6;i++){
            sum+=v[i];
        }
         long long temp = (-1)*sum;
         long long total = temp + v[6];
         cout<<total<<"\n";
    }

    return 0;
}
