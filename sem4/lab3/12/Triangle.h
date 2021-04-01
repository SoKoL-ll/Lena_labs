//
// Created by llSoK on 01.04.2021.
//

#ifndef LENA_TRIANGLE_H
#define LENA_TRIANGLE_H


class Triangle {
private:
    double firstSide{}, secondSide{}, angle{};
public:
    Triangle();

    Triangle(Triangle const &triangle);

    void setFirstSide(double firstSide);

    void setSecondSide(double secondSide);

    void setAngle(double angle);

    double getFirstSide() const;

    double getSecondSide() const;

    double getThirdSide() const;

    virtual ~Triangle();

    Triangle(double firstSide, double secondSide, double angle);
};


#endif //LENA_TRIANGLE_H
