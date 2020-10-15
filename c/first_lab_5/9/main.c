#include <stdio.h>

int main() {
    int n, ans = 0, x;
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int last = x % 10, first, x1 = x;
        do {
            first = x % 10;
            x /= 10;
        }while (x > 0);
        if (last == first) {
            ans += x1;
        }
    }

    printf("%d", ans);
    return 0;
}
