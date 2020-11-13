#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    (n > -5 && m != 0) ?  cout << 5 / m - n / 5 << endl : (n <= -5) ? cout << 3 * m + n * n << endl
        : cout << 2 * m * n << endl;
    return 0;
}
