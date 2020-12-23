#include <iostream>
#include <algorithm>

using namespace std;

int main() {


    int *a, n, x, y, cnt = 0, index;

    cout << "Enter the size of the array\n";
    cin >> n;
    a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            cnt++;
            if (cnt == 2) {
                index = i;
                break;
            }
        }
    }

    if (cnt < 2) {
        return cout << "Incorrect input \n", 0;
    }

    int *b;
    b = new int[n + 1];
    for (int i = 0, j = 0; i < n; i++, j++) {
        b[j] = a[i];
        if (i == index) {
            j++;
            b[j] = 100;
        }
    }

    delete [] a;
    for (int i = 0; i < n + 1; i++) {
        cout << b[i] << ' ';
    }
    cout << endl;

    delete [] b;
    return 0;
}