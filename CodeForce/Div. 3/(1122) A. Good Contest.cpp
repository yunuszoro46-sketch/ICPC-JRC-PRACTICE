//Problem : https://codeforces.com/contest/2266/problem/A

#include <bits/stdc++.h>
using namespace std;
void  solve () {
    long long n;
    cin >> n;
    long long a,b,c;
    cin >> a >> b >> c;
    cout << n - min({a, b, c}) << endl;
}
int main() {
    int n;
    cin >> n;
   while (n--) {
       solve();
   }
    return 0;
}
