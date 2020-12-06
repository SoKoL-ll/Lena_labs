#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int main() {

    int a[7][6];

    for (int i = 0; i < 6; i++) {
        for (auto & j : a) {
            cin >> j[i];
        }
    }

    for (auto & i : a) {
        sort(i, i + 6);
        reverse(i, i + 6);
    }

    for (int i = 0; i < 6; i++) {
        for (auto & j : a) {
            cout << j[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}