#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1.e-4;

static int
fact (int n) {
    return (n < 2) ? 1 : n * fact(n - 1);
}

int main() {
    double x;
    int n = 1;
    scanf("%lf", &x);
    double ans = 1;

    while (ans > eps) {
       ans += ((2 * n + 1)/fact(n)) * pow(x, 2 * n);
       n++;
    }

    printf("%f", ans);
    return 0;
}
