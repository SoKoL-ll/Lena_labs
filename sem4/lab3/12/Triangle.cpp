#include "Triangle.h"
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

Triangle::Triangle(double firstSide, double secondSide, double angle) : firstSide(firstSide), secondSide(secondSide),
                                                                        angle(angle) {
    cerr << "Triangle constructor with arguments" << endl;
}

Triangle::~Triangle() {
    cerr << "Destructor triggered" << endl;
}

double Triangle::getFirstSide() const {
    cerr << "Get first side" << endl;
    return firstSide;
}

double Triangle::getSecondSide() const {
    cerr << "Get second side" << endl;
    return secondSide;
}

void Triangle::setFirstSide(double firstSide) {
    cerr << "Set first side" << endl;
    Triangle::firstSide = firstSide;
}

void Triangle::setSecondSide(double secondSide) {
    cerr << "Set second side" << endl;
    Triangle::secondSide = secondSide;
}

void Triangle::setAngle(double angle) {
    cerr << "Set angle" << endl;
    Triangle::angle = angle;
}

Triangle::Triangle() = default;

Triangle::Triangle(Triangle const &triangle) {
    cerr << "Triangle constructor with copy" << endl;
    this->firstSide = triangle.firstSide;
    this->secondSide = triangle.secondSide;
    this->angle = triangle.angle;
}

double Triangle::getThirdSide() const {
    cerr << "Get third side" << endl;
    return (sqrt(firstSide * firstSide + secondSide * secondSide - 2 * firstSide * secondSide * cos(angle)));
}

bool operator==(const Triangle &first, const Triangle &second) {
    cerr << "Operator ==" << endl;
    return (first.firstSide == second.firstSide
            && first.secondSide == second.secondSide && first.angle == second.angle);
}

double min(double a, double b) {
    if (a > b) {
        return b;
    } else
        return a;
}

double Triangle::getHeightFromTheLargestAngle() const {
    cerr << "Get height from the largest angle" << endl;
    return ((this->firstSide * this->secondSide * sin(this->angle))
            / min(this->firstSide, min(this->secondSide, getThirdSide())));
}

bool operator^(const Triangle &first, const Triangle &second) {
    cerr << "Operator ^" << endl;
    return (first.angle == second.angle &&
            ((first.firstSide / second.firstSide) == (first.secondSide / second.secondSide)));
}

void Triangle::outputTriangle() const {
    cerr << "Output triangle" << endl;
    cout << "First side: " << this->firstSide << endl;
    cout << "Second side: " << this->secondSide << endl;
    cout << "the angle between them: " << this->angle << endl;
}

void Triangle::setTriangle() {
    cerr << "Set triangle" << endl;
    cout << "Enter first side: " << endl;
    cin >> firstSide;
    cout << "Enter second side: " << endl;
    cin >> secondSide;
    cout << "Enter the angle between them: " << endl;
    cin >> angle;
}
