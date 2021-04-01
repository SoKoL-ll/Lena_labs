//
// Created by llSoK on 01.04.2021.
//

#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double firstSide, double secondSide, double angle) : firstSide(firstSide), secondSide(secondSide),
                                                                        angle(angle) {}

Triangle::~Triangle() {

}

double Triangle::getFirstSide() const {
    return firstSide;
}

double Triangle::getSecondSide() const {
    return secondSide;
}

void Triangle::setFirstSide(double firstSide) {
    Triangle::firstSide = firstSide;
}

void Triangle::setSecondSide(double secondSide) {
    Triangle::secondSide = secondSide;
}

void Triangle::setAngle(double angle) {
    Triangle::angle = angle;
}

Triangle::Triangle() = default;

Triangle::Triangle(Triangle const &triangle) {
this->firstSide = triangle.firstSide;
this->secondSide = triangle.secondSide;
this->angle = triangle.angle;
}

double Triangle::getThirdSide() const {
    return (sqrt(firstSide * firstSide + secondSide * secondSide - 2 * firstSide * secondSide * cos(angle)));
}
