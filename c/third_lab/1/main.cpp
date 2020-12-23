#include <iostream>
#include <algorithm>

using namespace std;

const int INF = -1e9;

double average(const int *a, int size) {

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum / size;
}
int main() {

    int a[8][6], b[18];

    for (auto & i : a) {
        for (int & j : i) {
            cin >> j;
        }
    }

    for (int & i : b) {
        cin >> i;
    }

    int result = 0;
    double average_b = average(b, 18);

    for (auto & i : a) {
        double x = average(i, 6);
        if (x > average_b) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}