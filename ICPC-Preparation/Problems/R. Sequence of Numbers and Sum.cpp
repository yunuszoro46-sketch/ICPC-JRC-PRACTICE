//problem : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,y;

       while ( cin>>x>>y) {
           if (x <= 0 || y <= 0) {
               break;
           }

           int start = min(x, y);
           int end = max(x, y);
           int sum = 0 ;
           for (int i=start;i<=end;i++) {
                  cout<<i<<" ";
                  sum += i;
               }
           cout << "sum =" << sum << "\n";

               }

           }


