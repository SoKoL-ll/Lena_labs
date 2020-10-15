#include <stdio.h>
#include <math.h>

int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    (k > 0) ? printf("%e", (double) k / m) : (k <= 0 && m < 0)
    ? printf("%d", abs(m + k)) : printf("%d", k * m);
    return 0;
}
