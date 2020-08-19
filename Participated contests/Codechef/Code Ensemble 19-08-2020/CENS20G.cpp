// Easy Implementation Problem - Kindof Manhattan Distance
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define INF (int)1e9
#define MOD 1000000007
#define PI 3.141592653589793238
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long int int64;

#ifdef DEBUG
template <class T1, class T2> 
ostream& operator<<(ostream &out, const pair<T1, T2> &p) {
    out << '(' << p.first << ", " << p.second << ')'; return out;
}
template <class T, class = typename T::value_type, class = typename enable_if<!is_same<T, string>::value>::type>
ostream& operator<<(ostream &out, const T &v) {
    out << '['; for (auto &x: v) {out << x << ", ";} if(!v.empty()) {out << "\b\b";} out << ']'; return out;
}
vector<string> split_string(string s) {
    s += ','; vector<string> res;
    while (!s.empty()) { res.push_back(s.substr(0, s.find(','))); s = s.substr(s.find(',')+1);}
    return res;
}
#define not_used __attribute__ ((unused)) 
void debug_out(not_used vector<string> names, not_used int idx, not_used int LINE_NUM) { cerr << endl; } 
template<class T, class... Ts> 
void debug_out(vector<string> names, int idx, int LINE_NUM, T&&a, Ts&&... args) {
    if (idx > 0) cerr << "   "; else cerr << "\tLine(" << LINE_NUM << ")| ";
    cerr << names[idx] << ": " << a; debug_out(names, idx+1, LINE_NUM, args...);
}
#define debug(...) debug_out(split_string(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else 
#define debug(...)
#endif

// Solution code starts from here
int main() { fastio;
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int x1, y1; cin >> x1 >> y1;

        // Preprocessing
        int r = 0, l = 0, u = 0, d = 0; 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R')
                r++;
            else if (s[i] == 'L')
                l++;
            else if (s[i] == 'U')
                u++;
            else if (s[i] == 'D')
                d++;
        }

        int q; cin >> q;
        while (q--) {
            int x2, y2; cin >> x2 >> y2;
            int dx = x2 - x1, dy = y2 - y1, steps = 0;
            bool x = false, y = false;
            if ((dx <= 0 && dx >= -l) || (dx >= 0 && dx <= r)) {
                x = true;
            } 
            if ((dy <= 0 && dy >= -d) || (dy >= 0 && dy <= u)) {
                y = true;
            }

            if (x & y) {
                cout << "YES " << abs(dx) + abs(dy) << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}