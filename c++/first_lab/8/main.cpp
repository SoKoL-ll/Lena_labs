#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const double eps = 1.e-4;

long long step(long long a, long long b) {
    long long ans = a;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}
int main() {
    long long x, a;
    long long n = 2;
    cin >> x >> a;
    double ans = log(x), now = (double)a/(double)(2*x + a);
    double intermediate = now;

    while (now > eps) {
        now = (double)(step(a, 2 * n - 1))/(double)((2 * n - 1) * step(2 * x + a, 2 * n - 1));
        intermediate += now;
        n++;
    }

    cout << fixed << setprecision (5) << ans + 2 * intermediate;
    return 0;
}