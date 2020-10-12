#include <iostream>
#include <cmath>

using namespace std;

int main() {


    for (int n = 10; n < 100; n++) {
        if ((n % 10 + n / 10) * 2 == ((n % 10) * (n / 10))) {
            cout << n << endl;
        }
    }

    return 0;
}