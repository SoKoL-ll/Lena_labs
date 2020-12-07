#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string s;

    getline(cin, s);
    int ans = 0, cnt = 0;
    for (char i : s) {
        if (i == ' ') {
            if (cnt >= 5) {
                ans++;
            }
            cnt = 0;
        } else {
            cnt++;
        }
        
        if (i == '.') {
            break;
        }
    }

    if (cnt - 1 >= 5) {
        ans++;
    }

    cout << ans << endl;


    return 0;
}