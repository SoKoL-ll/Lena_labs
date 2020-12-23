#include <stdio.h>

const double eps = 1.e-5;
double x;
double ans;
void rec(double now, int n) {
    if (ans > eps) {
        now *= (x * x) / (n * n - n);
        ans += now;
        rec(now, n + 2);
    }
}
int main() {;
    scanf("%lf", &x);

    ans = x;
    rec(ans, 3);
    printf("%f", ans);
    return 0;
}