#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "Enter the side: ";
    double side;
    std::cin >> side;

    // Used M_PI constant from cmath for pi value

    const double PI = M_PI;



    // Calculate the area using the given formula

    double area = (6.0 * pow(side, 2)) / (4.0 * tan(PI / 6.0));

    // Display result with two decimal places

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The area of the hexagon is " << area << std::endl;

    return 0;
}