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
        string help;
        for (char i : s) {
            if (i != ' ') {
                help += i;
            } else {
                if (!help.empty()) {
                    int n = atoi(help.c_str());
                    (n % 2) ? cout << n << ' ' : cout << n * 2 << ' ';
                    help.clear();
                }
            }
        }
        if (!help.empty()) {
            int n = atoi(help.c_str());
            (n % 2) ? cout << n << ' ' : cout << n * 2 << ' ';
        }
        cout << endl;
    }

    fclose(stdin);
    fclose(stdout);
}