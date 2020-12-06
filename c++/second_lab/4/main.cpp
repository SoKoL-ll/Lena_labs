#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int main() {

    int **a, n;
    bool f = true;

    cin >> n;
    a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                f = false;
                break;
            }
        }
        if (!f) {
            break;
        }
    }

    (f) ? cout << "The matrix is symmetric\n" : cout << "The matrix is antisymmetric\n";

    for (int i = 0; i < n; i++) {
        delete []a[i];
    }
    return 0;
}