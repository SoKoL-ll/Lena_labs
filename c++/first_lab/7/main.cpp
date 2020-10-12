#include <iostream>
#include <iomanip>

using namespace std;
const double eps = 1.e-5;
long long fact(long long a) {
    long long ans = 1;
    for (int i = 1; i <= a; i++) {
        ans *= i;
    }
    return ans;
}

long long step(long long a, long long b) {
    long long ans = a;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}
int main() {
    long long x;
    long long n = 1;
    double ans = 1.0;
    cin >> x;

    while (ans > eps) {
        ans += (double)step(-1, n) * (double)step(x, 2 * n)/(double)fact(2*n);
        n++;
    }

    cout << fixed << setprecision (5) << ans;
    return 0;
}