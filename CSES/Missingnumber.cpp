#include<iostream>
using namespace std;
int main(){
     long long  n;
     cin>>n;
    int a;
    long long sum =0;
    long long total=0;

    for(int i=0;i<=n;i++){
      total+=i;
    }

    for(int i=0;i<n-1;i++){
       cin>>a;
       sum+=a;
    }

    cout<<total-sum<<endl;



   }


