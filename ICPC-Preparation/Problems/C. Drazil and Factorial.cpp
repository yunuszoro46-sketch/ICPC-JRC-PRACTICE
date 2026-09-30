//Problem:https://codeforces.com/problemset/problem/515/C
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string a;
    cin >> a;

    string result = "";

    for (char c : a) {
        if (c == '2')
           result += "2";
        else if (c == '3')
             result += "3";
        else if (c == '4')
            result += "322";
        else if (c == '5')
            result += "5";
        else if (c == '6')
            result += "53";
        else if (c == '7')
            result += "7";
        else if (c == '8')
            result += "7222";
        else if (c == '9')
            result += "7332";
    }
    
    sort(result.rbegin(), result.rend());

    cout << result << "\n";

    return 0;
}
