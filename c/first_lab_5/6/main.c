#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    do {
        if (n % 10 == 3) {
            printf("YES");
            exit(0);
        }
        n /= 10;
    } while (n > 0);

    printf("NO");
    return 0;
}
