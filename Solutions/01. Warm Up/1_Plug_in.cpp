// 1 - Simple Array Traversal
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int main() { fastio;
    string s; cin >> s;

    vector<char> output; output.push_back(s[0]);
    for (int i = 1; i < s.length(); i++) {
        int n = output.size();
        if (n > 0 && s[i] == output[n-1]) {
            output.pop_back();
        } else {
            output.push_back(s[i]);
        }
    } 

    // Printing output
    for (char a : output)
        cout << a;
    cout << endl;

    return 0;
}