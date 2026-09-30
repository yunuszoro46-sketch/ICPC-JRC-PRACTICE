//Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <iostream>
using namespace std;

void print() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            cout << " "; 
        }
        cout << i;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    print();
    return 0;
}
