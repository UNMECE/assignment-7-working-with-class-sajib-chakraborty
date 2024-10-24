#include "Magnetic_Field.h"
#include <cmath>
#include <iostream>  // C++ I/O library

Magnetic_Field::Magnetic_Field() {
    B = new double[3]{0.0, 0.0, 0.0};
}

Magnetic_Field::Magnetic_Field(double Bx, double By, double Bz) {
    B = new double[3]{Bx, By, Bz};
}

Magnetic_Field::~Magnetic_Field() {
    delete[] B;
}

double Magnetic_Field::calculateMagnitude() const {
    return sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
}

void Magnetic_Field::unitVector() const {
    double magnitude = calculateMagnitude();
    if (magnitude != 0) {
        double Bx_unit = B[0] / magnitude;
        double By_unit = B[1] / magnitude;
        double Bz_unit = B[2] / magnitude;
        std::cout << "Unit vector: (" << Bx_unit << ", " << By_unit << ", " << Bz_unit << ")\n";
    }
}

void Magnetic_Field::setB(double Bx, double By, double Bz) {
    B[0] = Bx;
    B[1] = By;
    B[2] = Bz;
}

double Magnetic_Field::getBx() const { return B[0]; }
double Magnetic_Field::getBy() const { return B[1]; }
double Magnetic_Field::getBz() const { return B[2]; }
