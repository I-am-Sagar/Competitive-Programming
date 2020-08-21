// 4 - Based on frequency of characters in string
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    string s; cin >> s;

    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }

    bool possible = true;
    for (auto i = m.begin(); i != m.end(); i++) {
        if ((i->second)%k != 0) {
            possible = false; break;
        }
    }

    if (!possible) {
        cout << -1 << endl;
    } else {
        string frame = "";
        for (auto i = m.begin(); i != m.end(); i++) {
            for (int j = 0; j < i->second/k; j++) { // Trickiest step! 
                frame += i->first;
            }
        }
        string ans = "";
        for (int i = 0; i < k; i++) 
            ans += frame;
        cout << ans << endl;
    }

    return 0;
}