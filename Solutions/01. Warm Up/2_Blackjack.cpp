// 2 - Simple Observation
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int main() { fastio;
    int n; cin >> n;
    int target = n - 10;
    int ans = 0;
    switch (target) {
        case 1 ... 9:
            ans = 4;
            break;
        
        case 10:
            ans = 15;
            break;

        case 11:
            ans = 4;
            break;
            
        default:
            ans = 0;
            break;
    }
    cout << ans << endl;
    return 0;
}