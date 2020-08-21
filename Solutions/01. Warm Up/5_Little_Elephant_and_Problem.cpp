// 5 - Sorting

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) 
            count++;
    }
    
    if (count == 0 || count == 2)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}