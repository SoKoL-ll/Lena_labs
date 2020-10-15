#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);

    double D = ((pow(M_E, -1/6) * sqrt(a * a + log(b)) - tan(a))/2
            * pow(cos(pow(a, 3)), 2)) * pow(10, 6);
    printf("%lf", D);
    return 0;
}
