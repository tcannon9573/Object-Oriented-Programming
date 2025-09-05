#include <iostream>
#include <cmath>

int main() {
    std::cout << "Enter an integrer number to see if the number is divisble by 4 or not: ";
    int number;
    std::cin >> number;

    //negative number
    if (number < 0) {
        std::cout << "The program doesn't accept negative numbers" <<std::endl;    
    }

    //Number is from 0 to 100
    else if (number <= 100) {
        if (number % 4 == 0) {
            std::cout << "The given number (" << number << ") is divisble by 4" << std::endl;

        } else {
            std::cout << "The given number (" << number << ") is not divisible by 4" << std::endl;

        }
        //greater than 100
        {
        else {
            std::cout << "The number is larger than 100 and the square root of the number is " << sqrt(number) << std::endl;

        }
        return 0;


    }
}



