#include <iostream>

void square(int number) {
    std::cout << "The square of " << number << " is: " << number * number << std::endl;
}

int main() {
    int userInput;
    std::cout << "Enter an integer to find its square: ";
    std::cin >> userInput;
    square(userInput);
    return 0;
}
