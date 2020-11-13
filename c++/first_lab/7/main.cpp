#include <iostream>
#include <iomanip>

using namespace std;
const double eps = 1.e-5;
double res = 1.0;
long long x;

long long fact(long long a) {
    long long result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}

long long step(long long a, long long b) {
    long long ans = a;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

double rec(double ans, int n) {
    if (ans > eps) {
        return (rec(ans + (double)step(-1, n) * (double)step(x, 2 * n)/(double)fact(2*n), n + 1));
    }
    return ans;
}
int main() {
    cin >> x;

    cout << fixed << setprecision (5) << rec(1.0, 1);
    return 0;
}