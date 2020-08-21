// 3 - Simple Observation
#include <bits/stdc++.h>
using namespace std;

// void reverse(string &s) {
//     int start = 0, end = s.length() - 1;
//     while (start < end) {
//         swap(s[start], s[end]);
//         start++; end--;
//     }
// }

int main() {
    string time;
    cin >> time;

    // Solution 1 - By actually computing the palindromic time
    // string hours = time.substr(0, 2); // substr(start_index, length_of_substr);
    // string minutes = time.substr(3, 2);
    // reverse(hours);
    
    // if (stoi(minutes) < stoi(hours) && stoi(hours) < 60) {
    //     minutes = hours;
    //     reverse(hours);
    //     cout << hours << ":" << minutes;
    // } else {
    //     if (hours == "32")
    //         hours = "00";
    //     else if (hours[0] >= '5') {
    //         hours[0] = '0'; hours[1]++;
    //     } else 
    //         hours[0]++;
        
    //     minutes = hours;
    //     reverse(hours);
    //     cout << hours << ":" << minutes;
    // }
    // cout << endl;

    // Solution 2 - By using the array of palindromic time
    vector<string> palindromic_times = {
        "00:00","01:10","02:20","03:30","04:40","05:50",
        "10:01","11:11","12:21","13:31","14:41","15:51",
        "20:02","21:12","22:22","23:32"
    };

    string output = "0";
    for (int i = 0; i < palindromic_times.size(); i++) {
        if (palindromic_times[i] > time) {
            output = palindromic_times[i];
            break;
        }
    }

    if (output != "0")
        cout << output << endl;
    else 
        cout << "00:00" << endl;

    return 0;
}