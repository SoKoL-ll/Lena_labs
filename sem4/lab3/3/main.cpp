#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main() {

    int x;
    string menu = "What do you want to do with a complex numbers?\n"
                  "1 - Divide two numbers\n"
                  "2 - Get the conjugate of a complex number\n"
                  "3 - <= output for two complex numbers modulo\n"
                  "4 - >= output for two complex numbers modulo\n"
                  "0 - End the program\n";
    do {
        cout << menu;
        cin >> x;
        ComplexNumber first, second;
        switch (x) {
            case 1:
                cout << "Enter first number" << endl;
                first.setValidPartAndImaginaryPart();
                cout << "Enter second number" << endl;
                second.setValidPartAndImaginaryPart();
                cout << "Result: " << endl;
                (first / second).outputComplexNumber();
                break;
            case 2:
                cout << "Enter first number" << endl;
                first.setValidPartAndImaginaryPart();
                cout << "Result: " << endl;
                (!first).outputComplexNumber();
            case 3:
                cout << "Enter first number" << endl;
                first.setValidPartAndImaginaryPart();
                cout << "Enter second number" << endl;
                second.setValidPartAndImaginaryPart();
                cout << "Result: ";
                if (first <= second) {
                    cout << "True" << endl;
                } else {
                    cout << "False" << endl;
                }
            case 4:
                cout << "Enter first number" << endl;
                first.setValidPartAndImaginaryPart();
                cout << "Enter second number" << endl;
                second.setValidPartAndImaginaryPart();
                cout << "Result: ";
                if (first >= second) {
                    cout << "True" << endl;
                } else {
                    cout << "False" << endl;
                }
            case 0:
                exit(0);
                break;
            default:
                cout << "Error output number, please write number between 0..4" << endl;
                break;
        }
    } while (true);
}
