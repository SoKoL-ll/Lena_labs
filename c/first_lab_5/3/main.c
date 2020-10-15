#include <stdio.h>
#include <math.h>
struct dot{
    double x;
    double y;
};

int main() {
    struct dot first, second;
    scanf("%lf%lf", &first.x, &first.y);
    scanf("%lf%lf", &second.x, &second.y);

    if (first.x == 0) {
        printf("first dot lies on the OX axis");
    } else if (first.y == 0) {
        printf("first dot lies on the OY axis");
    } else if (second.x == 0) {
        printf("second dot lies on the OX axis");
    } else if (second.y == 0) {
        printf("second dot lies on the OY axis");
    } else if ((first.x > 0 && first.y > 0 &&  second.x > 0 && second.y > 0) ||
        (first.x > 0 && first.y < 0 &&  second.x > 0 && second.y < 0) ||
        (first.x < 0 && first.y > 0 &&  second.x < 0 && second.y > 0) ||
        (first.x < 0 && first.y < 0 &&  second.x < 0 && second.y < 0)) {
        printf("%f", sqrt(pow((second.x - first.x), 2) + pow((second.y - first.y), 2)));
    } else {
        double a = sqrt(pow(second.x, 2) + pow(second.y, 2));
        double b = sqrt(pow(first.x, 2) + pow(first.y, 2));
        if (a > b) {
            printf("%f", a);
        } else {
            printf("%f", b);
        }
    }
    return 0;
}
