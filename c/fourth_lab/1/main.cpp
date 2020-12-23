#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    string s;

    cin >> s;

    int s_int = 0;

    for (char i : s) {
        s_int += i - '0';
        s_int *= 10;
    }

    s_int /= 10;
    if (s_int > 255) {
        cout << s << " can't be represented in <unsigned short int> int format" << endl;
    } else {
        cout << s << " it is possible to present in the <unsigned short int> format" << endl;
    }
    return 0;
}