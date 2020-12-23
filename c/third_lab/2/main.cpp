#include <iostream>
#include <algorithm>

using namespace std;

const int INF = -1e9;

int reformat_matrix(int **a, int n, int m, int cnt) {

    bool del[m];
    int new_m = m;
    for (int i = 0; i < m; i++) {
        del[i] = false;
    }

    for (int j = 0; j < m; j++) {
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] < 0) {
                counter++;
            }
            if (counter == cnt) {
                del[j] = true;
                new_m--;
                break;
            }
        }
    }

    int pos = 0;

    for (int i = 0; i < m; i++) {
        if (!del[i]) {
            for (int j = 0; j < n; j++) {
                a[j][pos] = a[j][i];
            }
            pos++;
        }
    }

    return new_m;
}

int main() {

    int **a, **b;
    a = new int*[5];
    b = new int*[7];


    for (int i = 0; i < 5; i++) {
        a[i] = new int[7];
        for (int j = 0; j < 7; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 7; i++) {
        b[i] = new int[7];
        for (int j = 0; j < 7; j++) {
            cin >>b[i][j];
        }
    }
    int m = reformat_matrix(a, 5, 7, 2);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < 5; i++)
        delete[] a[i];

    delete[] a;

    m = reformat_matrix(b, 7, 7, 3);

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < 7; i++)
        delete[] b[i];

    delete[] b;
    return 0;
}