#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int **a, *help;

    a = new int* [10];
    help = new int [10];

    for (int i = 0; i < 10; i++) {
        a[i] = new int[10];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> a[i][j];
            if (i == j) {
                help[i] = a[i][j];
            }
        }
    }

    sort(help, help + 10);
    for (int i = 0; i < 10; i++) {
        a[i][i] = help[i];
    }

    delete [] help;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }


    for (int i = 0; i < 10; i++) {
        delete []a[i];
    }
    return 0;
}