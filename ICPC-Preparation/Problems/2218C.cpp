#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        int small_elem = i;
        int median_elem = n + 2 * i - 1;
        int large_elem = n + 2 * i;
        
        cout << small_elem << " " << median_elem << " " << large_elem << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
