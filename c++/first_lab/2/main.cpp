#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b;
    cin >> a >> b;

    if (b < 0 || sqrt((2.5 * a + 3 * b + sqrt(2))) == 0) {
        cout << "Противоречит ОДЗ" << endl;
    } else {
        cout << (pow(sin(a), 3) + 2 * pow(cos(b), 2)) / (sqrt((2.5 * a + 3 * b + sqrt(2))) * log(b)) << endl;
    }
    return 0;
}
