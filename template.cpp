// https://github.com/I-am-Sagar/05-Competitive-Programming

/* ----------------------------- All Header Files ------------------------------- */
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <limits>
#include <ctime>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* --------------------- #define Shortcuts and typedef Constants ---------------- */
#define endl "\n"
#define INF (int)1e9
#define MOD 1000000007
#define PI 3.141592653589793238
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* --------------------------------- Debugging Utility -------------------------- */
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
    cerr << names[idx] << ": " << a;
    debug_out(names, idx+1, LINE_NUM, args...);
}
#define debug(...) debug_out(split_string(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else 
#define debug(...)
#endif

/* ------------------------------- Timing Utility ------------------------------- */
#ifdef TIME
template <typename F, typename... Args>
double calc_time (F func, Args&&... args) {
    auto start = clock(); func(std::forward<Args>(args)...); auto end = clock();
    return double(end-start)/double(CLOCKS_PER_SEC);
}
#define START_TIMER cerr << "\tTimer | " << calc_time( [&]() { {}
#define STOP_TIMER } ) << " seconds" << endl
#else
#define START_TIMER
#define STOP_TIMER
#endif

/* ------------------------------------- Main Code ------------------------------ */
int main() { fastio;

    return 0;
}

/* LEARNING POINT:


*/