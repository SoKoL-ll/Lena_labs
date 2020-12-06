#include <iostream>
#include <algorithm>

using namespace std;

const int INF = -1e9;

void swap(int *a, int *b, int first, int second) {
    int x = a[first];
    a[first] = b[second];
    b[second] = x;
}
int main() {

    int a[5], b[5], help = INF, first_index, second_index;

    for (int & i : a) {
        cin >> i;
    }

    for (int & i : b) {
        cin >> i;
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] > help) {
            first_index = i;
            help = a[i];
        }
    }

    help = INF;
    for (int i = 0; i < 5; i++) {
        if (b[i] >= help) {
            second_index = i;
            help = b[i];
        }
    }

    swap(a, b, first_index, second_index);

    for (int & i : a) {
        cout << i << ' ';
    }

    cout << endl;
    for (int & i : b) {
        cout << i << ' ';
    }

    cout << endl;
    return 0;
}