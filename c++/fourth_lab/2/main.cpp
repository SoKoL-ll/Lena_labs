#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string s, s_mod = "mod", ans, help;

    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '%') {
            ans += s_mod;
            continue;
        }

        if (s[i] == 't' && s[i + 1] == 'a' && s[i + 2] == 'n') {
            int j = i + 3;
            while (s[j] != ')') {
                help += s[j];
                j++;
            }
            help += ")";
            ans.append("sin");
            ans.append(help);
            ans.append("/");
            ans.append("cos");
            ans.append(help);
            help.clear();
            i = j + 1;
            continue;
        }

        ans += s[i];
    }

    cout << ans << endl;
    return 0;
}