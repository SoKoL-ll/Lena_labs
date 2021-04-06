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

    void outputTriangle() const;

    void setTriangle();

    double getHeightFromTheLargestAngle() const;
    virtual ~Triangle();

    friend bool operator==(const Triangle &first, const Triangle &second);

    friend bool operator^(const Triangle &first, const Triangle &second);

    Triangle(double firstSide, double secondSide, double angle);
};

