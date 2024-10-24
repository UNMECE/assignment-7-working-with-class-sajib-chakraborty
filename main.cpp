#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

int main()
{

    Electric_Field E_default;
    Electric_Field E_components(1e5, 10.9, 1.7e2);

    std::cout << "Magnitude of E_default: " << E_default.calculateMagnitude() << std::endl;
    std::cout << "Magnitude of E_components: " << E_components.calculateMagnitude() << std::endl;
    std::cout << "Inner Product: " << E_components.innerProduct() << std::endl;


    Magnetic_Field B_default;
    Magnetic_Field B_components(20000, 1.5, 5000);

    std::cout << "Magnitude of B_default: " << B_default.calculateMagnitude() << std::endl;
    std::cout << "Magnitude of B_components: " << B_components.calculateMagnitude() << std::endl;

    std::cout << "Unit Vector of B_components: " << std::endl;
    B_components.unitVector();

    return 0;
}

