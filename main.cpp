#include <iostream>
#include <cmath>  
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    std::cout << "Calculating the volume of a sphere: " << std::endl;
    double V, R;
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> R;
    V = (4.0 / 3.0) * M_PI * std::pow(R, 3); 

    std::cout << "The volume of the sphere is: " << V << std::endl;
    return 0;
}
