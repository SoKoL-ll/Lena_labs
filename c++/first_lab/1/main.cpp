#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    if (n > -5 && m != 0) {
        cout << 5 / m - n / 5 << endl;
    } else if (n <= -5) {
        cout << 3 * m + n * n << endl;
    } else {
        cout << 2 * m * n << endl;
    }
    return 0;
}
