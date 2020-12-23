#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double first(double x) {
    return (2 * x * (x * x + 1));
}

double second(double x) {
    return log(x * x + 1);
}

double integral(double (*f)(double x), double a, double b) {
    double delta_x = (b - a) / 30;
    double cnt = a;
    double ans = 0;
    for (int i = 1; i < 30; i++) {
        cnt += delta_x;
        ans += f(cnt);
    }

    return (delta_x * (ans + f(b)));

}
int main() {


    double (*first_function)(double x);
    first_function = first;

    double (*second_function)(double x);
    second_function = second;

    cout << "Integral first function: " << fixed << setprecision(5) << integral(first_function, -1, 4) << endl;
    cout << "Integral second function: " << fixed << setprecision(5) << integral(second_function, 1, 4) << endl;

    return 0;
}