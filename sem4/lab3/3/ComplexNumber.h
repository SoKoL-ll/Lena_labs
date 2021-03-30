#ifndef KATYA_COMPLEXNUMBER_H
#define KATYA_COMPLEXNUMBER_H

#include <iostream>

using namespace std;
class ComplexNumber {
private:
    double validPart, imaginaryPart;

public:
    ComplexNumber(double validPart, double imaginaryPart) {
        cout << "The constructor with the parameters worked" << endl;
        this->validPart = validPart;
        this->imaginaryPart = imaginaryPart;
    }

    ComplexNumber() {
        cout << "The constructor without the parameters worked" << endl;
        this->imaginaryPart = 0.0;
        this->validPart = 0.0;
    }

    ComplexNumber(const ComplexNumber &complexNumber) {
        cout << "The copy constructor worked" << endl;
        this->validPart = complexNumber.validPart;
        this->imaginaryPart = complexNumber.imaginaryPart;
    }

    virtual ~ComplexNumber();

private:
    static double theNumberModule(const ComplexNumber& complexNumber);

public:
    friend ComplexNumber operator/(const ComplexNumber& first, const ComplexNumber& second);

    friend ComplexNumber operator!(const ComplexNumber& first);

    friend bool operator>=(const ComplexNumber &first, const ComplexNumber &second);

    friend bool operator<=(const ComplexNumber &first, const ComplexNumber &second);

    friend bool operator==(const ComplexNumber &first, const ComplexNumber &second);

    friend bool operator<(const ComplexNumber &first, const ComplexNumber &second);

    friend bool operator>(const ComplexNumber &first, const ComplexNumber &second);

    double getValidPart() const;

    double getImaginaryPart() const;

    void setValidPart(double validPart);

    void setImaginaryPart(double imaginaryPart);

    void setValidPartAndImaginaryPart();

    void outputComplexNumber() const;
};


#endif //KATYA_COMPLEXNUMBER_H
