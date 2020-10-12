#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b;
    cin >> a >> b;

    cout << (pow(sin(a), 3) + 2 * pow(cos(b), 2))/(sqrt((2,5 * a + 3 * b + sqrt(2))) * log(b)) << endl;
    return 0;
}
