#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int INF = -1e9;


int sum_of_one_argument(const int *a) {
    int ans = 0;
    for (int i = 0; i < 30; i++) {
        ans += a[i];
    }
    return ans;
}

int sum_of_two_argument(const int *a, const int *b) {
    int ans = 0;
    for (int i = 0; i < 30; i++) {
        ans += (a[i] * b[i]);
    }
    return ans;
}

int main() {

    int x[30], y[30];

    for (int & i : x) {
        cin >> i;
    }
    for (int & i : y) {
        cin >> i;
    }

    double ans = (30 * sum_of_two_argument(x, y) - sum_of_one_argument(x) * sum_of_one_argument(y)) /
                 sqrt((30 * sum_of_two_argument(x, x) - sum_of_one_argument(x) * sum_of_one_argument(x)) *
                      (30 * sum_of_two_argument(y, y) - sum_of_one_argument(y) * sum_of_one_argument(y)));

    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}