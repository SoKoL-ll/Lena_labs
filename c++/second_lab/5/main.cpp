#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main() {

    int ***a, n, m, p, color;
    bool f = true;

    cin >> n >> m >> p;
    a = new int **[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int *[m];
        for (int j = 0; j < m; j++) {
            a[i][j] = new int[p];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cin >> a[i][j][k];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        color = -1;
        f = true;
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                if (color == -1) {
                    color = a[i][j][k];
                } else {
                    if (color != a[i][j][k]) {
                        f = false;
                        break;
                    }
                }
            }
            if (!f) {
                break;
            }
        }
        if (f) {
            break;
        }
    }
    if (f) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                delete []a[i][j];
            }
            delete []a[i];
        }
        return cout << "YES\n", 0;
    }

    for (int j = 0; j < m; j++) {
        color = -1;
        f = true;
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < p; k++) {
                if (color == -1) {
                    color = a[i][j][k];
                } else {
                    if (color != a[i][j][k]) {
                        f = false;
                        break;
                    }
                }
            }
            if (!f) {
                break;
            }
        }
        if (f) {
            break;
        }
    }
    if (f) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                delete []a[i][j];
            }
            delete []a[i];
        }
        return cout << "YES\n", 0;
    }

    for (int k = 0; k < p; k++) {
        color = -1;
        f = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (color == -1) {
                    color = a[i][j][k];
                } else {
                    if (color != a[i][j][k]) {
                        f = false;
                        break;
                    }
                }
            }
            if (!f) {
                break;
            }
        }
        if (f) {
            break;
        }
    }
    if (f) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                delete []a[i][j];
            }
            delete []a[i];
        }
        return cout << "YES\n", 0;
    }

    cout << "NO" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            delete []a[i][j];
        }
        delete []a[i];
    }

    return 0;
}