#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1.e-5;

static int
fact (int n) {
    return (n < 2) ? 1 : n * fact(n - 1);
}

int main() {
    double x;
    int step = 3;
    scanf("%lf", &x);
    double ans = x;

    while (ans > eps) {
        ans += pow(x, step)/fact(step);
	step += 2;
    }

    printf("%f", ans);
    return 0;
}
