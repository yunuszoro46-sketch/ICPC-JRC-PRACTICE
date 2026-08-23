#include<iostream>
using namespace std;
int main(){
   int n,x;
   cin>>n>>x;
   long long arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int left = 0 ; long long current_sum=0;int count = 0;
  for(int right = 0 ; right < n ; right ++) {
    current_sum+=arr[right];
    while(current_sum>x && left<=right){
         current_sum-=arr[left];
         left++;
    }
    if(current_sum==x){
      count++;
    }
  }
  cout<<count;
}
