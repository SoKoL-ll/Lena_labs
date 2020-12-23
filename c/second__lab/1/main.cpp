#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int *a, *help, left = 0, right = 26;

    a = new int[27];
    help = new int[27];

    for (int i = 0; i < 27; i++) {
        cin >> a[i];
        help[i] = a[i];
    }

    sort(help, help + 27);
    for (int i = 0; i < 27; i++) {
        if (i % 2) {
            a[right] = help[i];
            right--;
        } else {
            a[left] = help[i];
            left++;
        }
    }

    for (int i = 0; i < 27; i++) {
        cout << a[i] << ' ';
    }

    delete [] a;
    delete [] help;

    return 0;
}