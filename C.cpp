#include <bits/stdc++.h>
using namespace std;

void processArray(int n, vector<int>& a) {
    for (int i = 0; i < n; i++) {
        a[i] = n - a[i] + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        processArray(n, a);
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
