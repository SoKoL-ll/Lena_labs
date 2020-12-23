#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main() {

    int ***a, n, m, l, avtomat = 0, exam = 0;
    bool f = true;

    n = 25, m = 7, l = 8;
    a = new int **[l];
    for (int i = 0; i < l; i++) {
        a[i] = new int *[n];
        for (int j = 0; j < n; j++) {
            a[i][j] = new int[m];
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> a[i][j][k];
            }
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < n; j++) {
            int cnt_4 = 0, cnt_3 = 0;
            for (int k = 0; k < m; k++) {
                if (a[i][j][k] == 4) {
                    cnt_3++;
                    cnt_4++;
                }
                if (a[i][j][k] == 3) {
                    cnt_3++;
                }
            }
            if (cnt_4 == m) {
                avtomat++;
            } else {
                if (cnt_3 == m) {
                    exam++;
                }
            }
        }
    }

    cout << "Автомат получат" << avtomat << " учеников" << endl;
    cout << "На экзамен допущены" << exam << " учеников" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            delete []a[i][j];
        }
        delete []a[i];
    }

    return 0;
}