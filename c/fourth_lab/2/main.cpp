#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string s, ans, help;
    char last, first_word = ' ', last_word = ' ';

    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            ans += s[i];
            break;
        }
        if (s[i] == ' ') {
            ans += s[i];
        } else {
            first_word = s[i];
            i++;
            help = "";
            if (s[i] == ' ') {
                ans += (first_word);
                ans += s[i];
                continue;
            }
            while (s[i + 1] != ' ' && s[i + 1] != '.') {
                help += s[i];
                i++;
            }

            last_word = s[i];
            ans += (last_word +  help + first_word);
        }
    }

    cout << ans << endl;
    return 0;
}