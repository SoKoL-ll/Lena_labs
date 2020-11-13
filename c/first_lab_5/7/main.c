#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1.e-5;
double x;
static int
fact (int n) {
    return (n < 2) ? 1 : n * fact(n - 1);
}
double rec(double ans, int step) {
    if (ans > step) {
        return (rec(ans + pow(x, step)/fact(step), step + 2));
    }
    return ans;
}
int main() {;
    scanf("%lf", &x);

    printf("%f", rec(x, 3));
    return 0;
}