#include <iostream>

int main() {
    std::cout << "Enter an integer between 0 and 1000000: ";
    int number;
    std::cin >> number;

    // Calculate initial sum of digits
    int sum = 0;
    int tempNumber = number;
    while (tempNumber > 0) {
        sum += tempNumber % 10;
        tempNumber /= 10;
    }

    std::cout << "The sum of the digits is " << sum << "." << std::endl;

    // Repeat the sum until the result is a single digit
    int finalDigit = sum;
    while (finalDigit > 9) {
        int newSum = 0;
        tempNumber = finalDigit;
        while (tempNumber > 0) {
            newSum += tempNumber % 10;
            tempNumber /= 10;
        }
        finalDigit = newSum;
    }

    std::cout << "The final single digit is " << finalDigit << "." << std::endl;

    return 0;
}