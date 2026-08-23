// Competitive programming template
// Author: yunuszoro46-sketch
// Usage: compile with -O2 -std=gnu++17

#include <bits/stdc++.h>
using namespace std;

// Debugging macro (prints to cerr)
#ifdef LOCAL
#define dbg(...) do { cerr << "[" << #__VA_ARGS__ << "] = "; debug_out(__VA_ARGS__); } while (0)
#else
#define dbg(...) do { } while (0)
#endif

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Example modular arithmetic helpers
long long modpow(long long a, long long e, long long mod) {
    long long r = 1;
    while (e) {
        if (e & 1) r = (__int128)r * a % mod;
        a = (__int128)a * a % mod;
        e >>= 1;
    }
    return r;
}

int main() {
    fast_io();

    // Read input and solve here
    int T = 1;
    // cin >> T;
    while (T--) {
        // solution
    }
    return 0;
}
