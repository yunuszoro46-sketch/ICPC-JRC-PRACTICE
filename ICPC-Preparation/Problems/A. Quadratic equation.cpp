//problem: https://codeforces.com/contest/531/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
      int a,b,c;
      cin>>a>>b>>c;
      float root1,root2;
      int disc = b*b-4*a*c;
      int deno = 2*a;
      root1 = (-b+sqrt(disc))/(2*a);
      root2 = (-b-sqrt(disc))/(2*a);
      if (disc==0) {
          cout<<root2<<endl;
      }else {
            cout<< min(root1,root2)<<" "<<max(root1,root2) << endl;
      }
      return 0;

}
