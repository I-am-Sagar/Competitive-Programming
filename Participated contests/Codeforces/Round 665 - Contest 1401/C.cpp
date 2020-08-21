// GCD of Inversion Pairs
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

    return 0;
}


/* ------------------------------ FAILED ATTEMPT ---------------------------- */
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a%b);
// }

// int minimum = INT_MAX;
// bool merge(vector<int> &a, vector<int> &temp, int left, int mid, int right) {
//     int i, j, k;
//     bool possible = true;
//     i = left; j = mid; k = left; 
//     while ((i <= mid-1) && (j <= right)) {
//         if (a[i] <= a[j])
//             temp[k++] = a[i++];
//         else {
//             temp[k++] = a[j++];
//             for (int x = 0; x <= (mid - i); x++) {
//                 if (gcd(a[i+x], a[j]) != minimum) {
//                     possible = false;
//                     break;
//                 }
//             }
//         }
//     }
//     while (i <= mid - 1)
//         temp[k++] = a[i++];
//     while (j <= right)
//         temp[k++] = a[j++];
//     for (i = left; i <= right; i++)
//         a[i] = temp[i];
//     return possible;
// }

// bool merge_sort(vector<int> &a, vector<int> &temp, int left, int right) {
//     int mid;
//     bool possible = true;
//     if (right > left) {
//         mid = left + (right-left)/2;
//         possible &= merge_sort(a, temp, left, mid);
//         possible &= merge_sort(a, temp, mid+1, right);
//         // Merge two parts
//         possible &= merge(a, temp, left, mid+1, right);
//     }
//     return possible;
// }

// bool swap_inversions_gcd(vector<int> a, int n) {
//     vector<int> temp(n, 0);
//     return merge_sort(a, temp, 0, n-1);
// }

// int main() { fastio;
//     int t; cin >> t; 
//     while (t--) {
//         int n; cin >> n;
//         vector<int> a(n, 0);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] < minimum)
//                 minimum = a[i];
//         }
        
//         bool possible = swap_inversions_gcd(a, n);
//         if (possible)
//             cout << "YES" << endl;
//         else 
//             cout << "NO" << endl;
//     }
//     return 0;
// }