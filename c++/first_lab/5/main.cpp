#include <iostream>
#include <cmath>

using namespace std;

int x, y, z;

int main() {
    int time1, time2, time3;

    while (true) {
        cin >> time1 >> time2 >> time3;
        if (time1 < 0 || time2 < 0 || time3 < 0) {
            break;
        }
        x += time1;
        y = max(x, y) + time2;
        z = max(y, z) + time3;
    }

    cout << z << endl;
    return 0;
}