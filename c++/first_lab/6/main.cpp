#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    string s = to_string(n);
    reverse(s.begin(), s.end());

    cout << atoi(s.c_str()) << endl;
    return 0;
}