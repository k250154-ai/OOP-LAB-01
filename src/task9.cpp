#include <iostream>

int main() {
    int arr[5];
    int sum = 0;

    // Taking input for the array
    std::cout << "Enter 5 integer values for the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    // Printing the sum
    std::cout << "The sum of the array elements is: " << sum << std::endl;

    // Displaying the elements in reverse order
    std::cout << "The elements in reverse order are: ";
    for (int i = 4; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
