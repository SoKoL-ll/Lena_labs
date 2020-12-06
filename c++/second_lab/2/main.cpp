#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int main() {


    int *a, n, x, y, ans = INF, index;

    cout << "Enter the size of the array\n";
    cin >> n;
    a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x >> y;

    for (int i = x - 1; i < y; i++) {
        if (a[i] > 0 && a[i] < ans) {
            ans = a[i];
            index = i;
        }
    }

    if (ans == INF) {
        return cout << "Missing elements > 0\n", 0;
    }

    int *b;
    b = new int[n - 1];
    cout << index << endl;
    for (int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    memcpy(b, a, (n - 1) * sizeof(int));

    delete [] a;
    for (int i = 0; i < n - 1; i++) {
        cout << b[i] << ' ';
    }
    cout << endl;

    delete [] b;
    return 0;
}