// 7 - Simple Observation
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n%2 == 1)
        cout << -1 << endl;
    else {
        vector<int> a(n, 0); 
        int odd = 1, even = 2;
        for (int i = 0; i < n; i+=2) {
            a[i] = even; 
            even += 2;    
        }
        for (int i = 1; i <= n; i+=2) {
            a[i] = odd;
            odd += 2;
        }
        
        // Print the array
        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}