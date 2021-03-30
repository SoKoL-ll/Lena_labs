#include "ComplexNumber.h"
#include <iostream>
#include <cmath>

using namespace std;

ComplexNumber::~ComplexNumber() {
    cout << "Destructor triggered" << endl;
}

void ComplexNumber::setImaginaryPart(double imaginary) {
    cout << "Set Imaginary Part worked" << endl;
    this->imaginaryPart = imaginary;
}

void ComplexNumber::setValidPart(double valid) {
    cout << "Set Valid Part worked" << endl;
    this->validPart = valid;

}

double ComplexNumber::getImaginaryPart() const {
    cout << "Get Imaginary Part worked" << endl;
    return imaginaryPart;
}

double ComplexNumber::getValidPart() const {
    cout << "Get Valid Part worked" << endl;
    return validPart;
}

bool operator<=(const ComplexNumber &first, const ComplexNumber &second) {
    cout << "Operator <= worked" << endl;
    return ((first == second) || (first < second));
}

bool operator>=(const ComplexNumber &first, const ComplexNumber &second) {
    cout << "Operator >= worked" << endl;
    return ((first == second) || (first > second));
}

bool operator==(const ComplexNumber &first, const ComplexNumber &second) {
    return (first.validPart == second.validPart && first.imaginaryPart == second.imaginaryPart);
}

bool operator<(const ComplexNumber &first, const ComplexNumber &second) {
    return (ComplexNumber::theNumberModule(first) < ComplexNumber::theNumberModule(second));
}

bool operator>(const ComplexNumber &first, const ComplexNumber &second) {
    return (!(first < second));
}

ComplexNumber operator/(const ComplexNumber& first, const ComplexNumber& second) {
    cout << "Operator / worked" << endl;
    double valid = (first.validPart * second.validPart + first.imaginaryPart * second.imaginaryPart)
            / (second.validPart * second.validPart + second.imaginaryPart * second.imaginaryPart);
    double imaginary = (first.imaginaryPart * second.validPart - first.validPart * second.imaginaryPart)
            / (second.validPart * second.validPart + second.imaginaryPart * second.imaginaryPart);
    return ComplexNumber(valid, imaginary);
}

ComplexNumber operator!(const ComplexNumber &first) {
    cout << "Operator ! worked" << endl;
    return ComplexNumber(first.validPart, first.imaginaryPart * -1);
}

void ComplexNumber::setValidPartAndImaginaryPart() {
    cout << "Set Valid Part and Imaginary Part worked" << endl;
    cout << "Enter valid number" << endl;
    cin >> validPart;
    cout << "Enter imaginary number" << endl;
    cin >> imaginaryPart;
}

void ComplexNumber::outputComplexNumber() const {
    cout << "Output Complex Number worked" << endl;
    cout << "Valid value: " << this->validPart << endl;
    cout << "Imaginary value: " << this->imaginaryPart << endl;
}

double ComplexNumber::theNumberModule(const ComplexNumber& complexNumber) {
    return sqrt(complexNumber.validPart * complexNumber.validPart
    + complexNumber.imaginaryPart * complexNumber.imaginaryPart);
}




