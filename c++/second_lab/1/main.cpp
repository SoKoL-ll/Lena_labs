#include <iostream>

using namespace std;



int main() {


    int *a, *b, sum = 0, cnt = 0;
    bool f = false;


    a = new int[30];
    b = new int[15];

    for (int i = 0; i < 30; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 15; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 15; j++) {
            if (a[i] == b[j]) {
                f = true;
                break;
            }
        }
        if (!f) {
            sum += a[i];
            cnt++;
        }
    }

    delete [] a;
    delete [] b;

    cout << sum / cnt << endl;

    return 0;
}