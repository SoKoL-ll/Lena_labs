#include <iostream>

using namespace std;

int main() {
    double ans = 0;
    for (int i = 1; i <= 10; i++) {
        double sum = 0;
        for (int j = 1; j <= 20; j++) {
            sum += 1.0/(double)(i + j * j);
        }
        if (ans == 0) {
            ans = sum;
        } else {
            ans *= sum;
        }
    }

    cout << ans << endl;
    return 0;
}
