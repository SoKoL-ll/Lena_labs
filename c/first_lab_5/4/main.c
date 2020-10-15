#include <stdio.h>

int main() {
    double a;
    int n;
    scanf("%lf%d", &a, &n);

    double ans = a;

    for (int i = 1; i <= n; i++) {
        ans *= (a - i * n);
    }

    printf("%f", ans);
    return 0;
}
