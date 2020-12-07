#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;

int main() {
    string s;
    freopen("file.in", "r", stdin);
    freopen("file.out", "w", stdout);
    while (getline(cin, s)) {
        string ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                int j = i;
                string help;
                bool f = true;
                while (s[j] != ' ' && j < s.size()) {
                    if (s[j] > 64 && s[j] < 91) {
                        help += s[j];
                    } else {
                        f = false;
                    }
                    j++;
                }
                if (f) {
                    ans += help;
                }
                i += j - 1;
            } else {
                ans += ' ';
            }
        }
        cout << ans << endl;
    }

    fclose(stdin);
    fclose(stdout);
}