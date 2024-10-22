#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;  
        string s;
        cin >> s;  
        
        bool key = false;  
        
        
        for (int j = 0; j < n; j++) {
            if (s[j] == '0') {
                key = true;
                break;  
            }
        }
        if (key) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
