#include <iostream>
#include <iomanip>

using namespace std;
const double eps = 1.e-5;
long long x;

double ans = 1;
void rec(double now, int n) {
    if (ans > eps) {
        now *= -((double) (x * x) / (2 * n * (2 * (n - 1))));
        ans += now;
        rec(now, n + 1);
    }
}
int main() {
    cin >> x;
    ans -= (double)(x * x) / 2;
    rec(ans, 2);
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}