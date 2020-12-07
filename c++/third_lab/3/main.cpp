#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>

using namespace std;

const int INF = -1e9;

double first(double x) {
    return (2 * x  * (x * x + 1));
}

double second(double x) {
    return ((pow(M_E, 2 * x)/(2 * x)));
}

double integral(double (*f)(double x), double a, double b) {
    double delta_x = (b - a) / 30;
    double cnt = a;
    double ans = f(cnt);
    for (int i = 1; i < 30; i++) {
        cnt += delta_x;
        if (!(i % 3)) {
            ans += 2 * f(cnt);
        } else {
            ans += 3 * f(cnt);
        }
    }

    return (((3 * (b - a))/(8 * 30)) * (ans + f(b)));

}
int main() {


    double (*first_function)(double x);
    first_function = first;

    double (*second_function)(double x);
    second_function = second;

    cout << "Integral first function: " << fixed << setprecision(5) << integral(first_function, -1, 4) << endl;
    cout << "Integral second function: " << fixed << setprecision(5) << integral(second_function, 0.5, 3.5) << endl;

    return 0;
}