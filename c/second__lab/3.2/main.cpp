#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const int INF = 1e9;
int main() {

    int sn = 0, so = 0;

    int **y;
    y = new int* [9];
    for (int i = 0; i < 7; i++) {
        y[i] = new int[12];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> y[i][j];
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i % 2) {
            for (int j = 0; j < 12; j++) {
                if (y[i][j] > 0) {
                    sn += y[i][j];
                }
            }
        } else {
            for (int j = 0; j < 12; j++) {
                if (y[i][j] < 0) {
                    so += y[i][j];
                }
            }
        }
    }

    if (sn == so) {
        return cout << "Division by zero" << endl, 0;
    }
    cout << fixed << setprecision(5) << (sn + so) / (sn - so) << endl;

    for (int i = 0; i < 9; i++) {
        delete []y[i];
    }
    return 0;
}