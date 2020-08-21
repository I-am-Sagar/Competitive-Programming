// 8 - Easy Brute Force
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = 0, val = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // cout << i << " " << j << endl;
            val = 0;
            for (int k = i; k <= j; k++) {
                val = val^a[k];
                // cout << a[k] << " ";
            }
            // cout << endl;
            // cout << val << endl;
            if (val > max)
                max = val;
        }
    }
    cout << max << endl;

    return 0;
}