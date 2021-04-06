#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {

    int number;
    string s = "What do you want to do with triangle? \n"
                  "1 - Compare two triangles for equality \n"
                  "2 - Compare the similarity of triangles \n"
                  "3 - Print the height coming out of the largest angle \n"
                  "4 - Print unknown side \n"
                  "0 - End the program\n";
    do {
        cout << s;
        cin >> number;
        Triangle first, second;
        switch (number) {
            case 1:
                cout << "Enter first triangle" << endl;
                first.setTriangle();
                cout << "Enter second triangle" << endl;
                second.setTriangle();
                if (first == second) {
                    cout << "The triangles are equal" << endl;
                } else {
                    cout << "The triangles are not equal" << endl;
                }
                break;
            case 2:
                cout << "Enter first triangle" << endl;
                first.setTriangle();
                cout << "Enter second triangle" << endl;
                second.setTriangle();
                if (first ^ second) {
                    cout << "The triangles are similarity" << endl;
                } else {
                    cout << "The triangles are not similarity" << endl;
                }
                break;
            case 3:
                cout << "Enter triangle" << endl;
                first.setTriangle();
                cout << "the height coming out of the largest angle: " << first.getHeightFromTheLargestAngle() << endl;
                break;
            case 4:
                cout << "Enter triangle" << endl;
                first.setTriangle();
                cout << "Unknown side: " << first.getThirdSide() << endl;
                break;
            case 0:
                exit(0);
            default:
                cout << "Error output number, please write number between 0..4" << endl;
                break;
        }
    } while (0 == 0);
}
