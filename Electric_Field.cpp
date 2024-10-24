#include "Electric_Field.h"
#include <cmath>

Electric_Field::Electric_Field() {
    E = new double[3]{0.0, 0.0, 0.0};
}

Electric_Field::Electric_Field(double Ex, double Ey, double Ez) {
    E = new double[3]{Ex, Ey, Ez};
}

Electric_Field::~Electric_Field() {
    delete[] E;
}

double Electric_Field::calculateMagnitude() const {  // Matches header file
    return sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);
}

double Electric_Field::innerProduct() const {
    return E[0] * E[0] + E[1] * E[1] + E[2] * E[2];
}

void Electric_Field::setE(double Ex, double Ey, double Ez) {
    E[0] = Ex;
    E[1] = Ey;
    E[2] = Ez;
}

double Electric_Field::getEx() const { return E[0]; }
double Electric_Field::getEy() const { return E[1]; }
double Electric_Field::getEz() const { return E[2]; }

