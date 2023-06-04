

class intComplexNum {
private:
    int realpart;
    int imgpart;

public:
    intComplexNum(int realpart, int imgpart); // Initializer 
    intComplexNum operator+(const intComplexNum& other);
    intComplexNum operator-(const intComplexNum& other);
    intComplexNum operator/(const intComplexNum& other);
    intComplexNum operator*(const intComplexNum& other);
    void print() const;
};

class FloatComplexNum {
private:
    float real;
    float imaginary;

public:
    FloatComplexNum(float realPart, float imaginaryPart); // Initializer 
    FloatComplexNum operator+(const FloatComplexNum& other) const;
    FloatComplexNum operator-(const FloatComplexNum& other) const;
    FloatComplexNum operator*(const FloatComplexNum& other) const;
    FloatComplexNum operator/(const FloatComplexNum& other) const;
    void print() const;
};
