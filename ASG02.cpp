#include "ASG02.h"
#include <iostream>

// Definition of intComplexNum class methods

intComplexNum::intComplexNum(int realpart, int imgpart) : realpart(realpart), imgpart(imgpart) {}

intComplexNum intComplexNum::operator+(const intComplexNum& other) {
    intComplexNum result(realpart + other.realpart, imgpart + other.imgpart);
    return result;
}

intComplexNum intComplexNum::operator-(const intComplexNum& other) {
    intComplexNum result(realpart - other.realpart, imgpart - other.imgpart);
    return result;
}

intComplexNum intComplexNum::operator/(const intComplexNum& other) {
    intComplexNum result(realpart / other.realpart, imgpart / other.imgpart);
    return result;
}

intComplexNum intComplexNum::operator*(const intComplexNum& other) {
    intComplexNum result(realpart * other.realpart, imgpart * other.imgpart);
    return result;
}

void intComplexNum::print() const {
    std::cout << realpart << " + " << imgpart << "i" << std::endl;
}


// Definition of FloatComplexNum class methods

FloatComplexNum::FloatComplexNum(float realPart, float imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

FloatComplexNum FloatComplexNum::operator+(const FloatComplexNum& other) const {
    FloatComplexNum result(real + other.real, imaginary + other.imaginary);
    return result;
}

FloatComplexNum FloatComplexNum::operator-(const FloatComplexNum& other) const {
    FloatComplexNum result(real - other.real, imaginary - other.imaginary);
    return result;
}

FloatComplexNum FloatComplexNum::operator*(const FloatComplexNum& other) const {
    FloatComplexNum result(real * other.real, imaginary * other.imaginary);
    return result;
}

FloatComplexNum FloatComplexNum::operator/(const FloatComplexNum& other) const {
    FloatComplexNum result(real / other.real, imaginary / other.imaginary);
    return result;
}

void FloatComplexNum::print() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}


// Main program

int main(int argc, char* argv[]) {
    // Check if there are enough command-line arguments
    if (argc < 10) {
        std::cout << "Insufficient command-line arguments!" << std::endl;
        return 1;
    }

    // Parse command-line arguments
    int intReal1 = std::atoi(argv[1]);
    int intImg1 = std::atoi(argv[2]);
    int intReal2 = std::atoi(argv[3]);
    int intImg2 = std::atoi(argv[4]);
    float floatReal1 = std::atof(argv[5]);
    float floatImg1 = std::atof(argv[6]);
    float floatReal2 = std::atof(argv[7]);
    float floatImg2 = std::atof(argv[8]);

    // Create objects
    intComplexNum intComplex1(intReal1, intImg1);
    intComplexNum intComplex2(intReal2, intImg2);
    FloatComplexNum floatComplex1(floatReal1, floatImg1);
    FloatComplexNum floatComplex2(floatReal2, floatImg2);

    // Perform operations
    intComplexNum intAddResult = intComplex1 + intComplex2;
    intComplexNum intSubtractResult = intComplex1 - intComplex2;
    intComplexNum intMultiplyResult = intComplex1 * intComplex2;
    intComplexNum intDivideResult = intComplex1 / intComplex2;

    FloatComplexNum floatAddResult = floatComplex1 + floatComplex2;
    FloatComplexNum floatSubtractResult = floatComplex1 - floatComplex2;
    FloatComplexNum floatMultiplyResult = floatComplex1 * floatComplex2;
    FloatComplexNum floatDivideResult = floatComplex1 / floatComplex2;

    // Print results
    std::cout << "Integer Complex Number Addition: ";
    intAddResult.print();
    std::cout << "Integer Complex Number Subtraction: ";
    intSubtractResult.print();
    std::cout << "Integer Complex Number Multiplication: ";
    intMultiplyResult.print();
    std::cout << "Integer Complex Number Division: ";
    intDivideResult.print();

    std::cout << "Float Complex Number Addition: ";
    floatAddResult.print();
    std::cout << "Float Complex Number Subtraction: ";
    floatSubtractResult.print();
    std::cout << "Float Complex Number Multiplication: ";
    floatMultiplyResult.print();
    std::cout << "Float Complex Number Division: ";
    floatDivideResult.print();

    return 0;
}
