// FirstName_LastName_Prob3_Assignment1.cpp
#include <iostream>
#include <cmath> // Required for the sqrt function

int main() {
    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    int number;
    std::cin >> number;

    // Case 1: Number is negative
    if (number < 0) {
        std::cout << "The program doesn't accept negative numbers" << std::endl;
    }
    // Case 2: Number is between 0 and 100
    else if (number <= 100) {
        if (number % 4 == 0) {
            std::cout << "The given number (" << number << ") is divisible by 4" << std::endl;
        } else {
            std::cout << "The given number (" << number << ") is not divisible by 4" << std::endl;
        }
        // Also display quotient and remainder
        std::cout << "Quotient: " << (number / 4) << " and Remainder: " << (number % 4) << std::endl;
    }
    // Case 3: Number is greater than 100
    else {
        std::cout << "The entered number is greater than 100 and square root of the number is " << sqrt(number) << std::endl;
    }

    return 0;
}