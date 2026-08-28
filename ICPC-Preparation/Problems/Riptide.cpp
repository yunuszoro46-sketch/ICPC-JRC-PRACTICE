#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        vector<int> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }

      
        sort(v.begin(), v.end());

        
        if (v[0] == v[1] || v[1] == v[2]) {
            cout << 0 << "\n";
        } else {
            
            int count = min(v[1] - v[0], v[2] - v[1]);
            cout << count << "\n";
        }
    }

    return 0;
}
