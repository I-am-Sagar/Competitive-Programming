// 6 - Basic Recursion Understanding
#include <bits/stdc++.h>
using namespace std;

// void my_sort (int n) {
//     if (n == 1)
//         return;
//     my_sort(n-1);
//     swap(arr[n-1], arr[n]);
// }

int main() {
    int n; cin >> n;
    
    if (n == 1)
        cout << 1 << endl;
    else {
        cout << n << " ";
        for (int i = 1; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}