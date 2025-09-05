#include <iostream>
#include <cmath> 

int main() {
    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    int number;
    std::cin >> number;

    // Number is negative
    if (number < 0) {
        std::cout << "The program doesn't accept negative numbers" << std::endl;
    }
    // Number is between 0 and 100
    else if (number <= 100) {
        if (number % 4 == 0) {
            std::cout << "The given number (" << number << ") is divisible by 4" << std::endl;
        } else {
            std::cout << "The given number (" << number << ") is not divisible by 4" << std::endl;
        }
      
        std::cout << "Quotient: " << (number / 4) << " and Remainder: " << (number % 4) << std::endl;
    }
    // Number is greater than 100
    else {
        std::cout << "The entered number is greater than 100 and square root of the number is " << sqrt(number) << std::endl;
    }

    return 0;
}