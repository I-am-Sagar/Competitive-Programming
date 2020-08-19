// Difference Array
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
int sum[1100][1100];
int diff[1100][1100];

// void print_diff(int n, int m) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cout << diff[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void print_sum(int n, int m) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main() { fastio;
    int n, m; cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q; cin >> q;
    while (q--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        diff[x1][y1] += 1;
        diff[x1][y2+1] -= 1;
        diff[x2+1][y1] -= 1;
        diff[x2+1][y2+1] += 1;      
        // print_diff(n, m);
        // cout << endl;  
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + diff[i][j];
        }
    }
    // print_sum(n, m);
    // cout << endl;

    for (int i = 0; i < n; i++) {
        string output = "";
        for (int j = 0; j < m; j++) {
            if (sum[i+1][j+1]%2 == 0) { 
                // The bit will remain as it is
                output += arr[i][j];
            } else {
                // The bit will flip
                if ((arr[i][j] - '0') == 0) {
                    output += '1';
                } else {
                    output += '0';
                }
            }
        }
        cout << output << endl;
    }

    return 0;
}