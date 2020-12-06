#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int main() {

    int **a;
    a = new int* [7];
    for (int i = 0; i < 7; i++) {
        a[i] = new int[6];
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> a[j][i];
        }
    }

    for (int i = 0; i < 7; i++) {
        sort(a[i], a[i] + 6);
        reverse(a[i], a[i] + 6);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < 7; i++) {
        delete []a[i];
    }
    return 0;
}