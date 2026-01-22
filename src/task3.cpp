#include <iostream>

int main() {
    int i;
    float f;
    double d;
    char c;
    bool b;

    std::cout << "Enter an integer: ";
    std::cin >> i;
    std::cout << "Enter a float: ";
    std::cin >> f;
    std::cout << "Enter a double: ";
    std::cin >> d;
    std::cout << "Enter a character: ";
    std::cin >> c;
    std::cout << "Enter a boolean (1 for true, 0 for false): ";
    std::cin >> b;

    std::cout << "\nYou entered the following values:" << std::endl;
    std::cout << "Integer: " << i << std::endl;
    std::cout << "Float: " << f << std::endl;
    std::cout << "Double: " << d << std::endl;
    std::cout << "Character: " << c << std::endl;
    std::cout << "Boolean: " << b << std::endl;

    return 0;
}
