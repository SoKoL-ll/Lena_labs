#include <stdio.h>

int main() {
    int w, pr, sum, cnt = 0;
    scanf("%d%d%d", &w, &pr, &sum);

    while (w < sum) {
        w *= (1 + (double)pr/100);
        cnt += 1;
    }

    printf("%d", cnt);
    return 0;
}
