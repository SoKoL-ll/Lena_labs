#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string a, b, c;

    cout << "Enter position white king" << endl;
    cin >> a;

    cout << "Enter position first black figure" << endl;
    cin >> b;

    cout << "Enter position second black figure" << endl;
    cin >> c;

    pair<int, int> white, first_black, second_black, ans1, ans2;

    white = make_pair(a[0] - 'a', a[1] - '1');
    first_black = make_pair(b[0] - 'a', b[1] - '1');
    second_black = make_pair(c[0] - 'a', c[1] - '1');

    ans1 = make_pair(white.first - first_black.first, white.second - first_black.second);
    ans2 = make_pair(white.first - second_black.first, white.second - second_black.second);

    if ((ans1.first > 0 && ans2.first > 0 && ans1.second > 0 && ans2.second > 0) ||
        (ans1.first < 0 && ans2.first < 0 && ans1.second < 0 && ans2.second < 0) ||
        (ans1.first < 0 && ans2.first < 0 && ans1.second > 0 && ans2.second > 0) ||
        (ans1.first > 0 && ans2.first > 0 && ans1.second < 0 && ans2.second < 0)) {
        if (min(abs(ans1.first), abs(ans2.first)) + 1 == max(abs(ans1.first), abs(ans2.first))) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        if (abs(ans1.first) == abs(ans1.second)) {
            if (first_black.first == 7 || first_black.second == 7) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else if (abs(ans2.first) == abs(ans2.second)) {
            if (second_black.first == 7 || second_black.second == 7) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }


    }

    return 0;
}