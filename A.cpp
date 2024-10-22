#include <bits/stdc++.h>
using namespace std;


int MaxSum(int n, int k, int x) {
    
    if (x + 1 < k || k > n) {
        return -1;
    } else {
        
        int sum = (k * (k - 1)) / 2;
        
        sum += (k == x ? x - 1 : x) * (n - k);
        return sum;
    }
}

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;  
        int sum = MaxSum(n, k, x);
        
   
        cout << sum << endl;
    }
    
    return 0;
}
