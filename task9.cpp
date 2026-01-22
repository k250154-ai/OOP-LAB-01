#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;

    cout << "Elements in reverse order: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
