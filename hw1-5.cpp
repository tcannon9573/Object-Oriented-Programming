#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string userInput;
    std::getline(std::cin, userInput);

    // Loop through string, starting at 1 with an increment of 2
    for (int i = 1; i < userInput.length(); i += 2) {
        std::cout << userInput[i];
    }

    std::cout << std::endl;
    return 0;
}