#include <iostream>

int main() {
    int arr[3][3];

    // Taking input for the 2-D array
    std::cout << "Enter 9 integer values for the 3x3 array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> arr[i][j];
        }
    }

    // Calculating and printing the sum of each row
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += arr[i][j];
        }
        std::cout << "The sum of row " << i + 1 << " is: " << sum << std::endl;
    }

    return 0;
}
