#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
}

int main() {
    int arr[] = {5, 7, 5};
    bool isValidHaiku = true;

    for (int i = 0; i < 3; i++) {
        string s;
        getline(cin >> ws, s); 
        
        int count = 0;
        for (char u : s) {
            if (isvowel(u)) {
                count++;
            }
        }
        
        if (count != arr[i]) {
            isValidHaiku = false;
        }
    }

    if (isValidHaiku) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
