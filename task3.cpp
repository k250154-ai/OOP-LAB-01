#include <iostream>
using namespace std;

int main() {
    int i;
    float f;
    double d;
    char c;
    bool b;

    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;
    cout << "Enter a double: ";
    cin >> d;
    cout << "Enter a character: ";
    cin >> c;

    cout << "Enter a boolean (0 for false, 1 for true): ";
    cin >> b;
    cout << "\nYou entered:\n";
    cout << "Integer: " << i << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << b << endl;

    return 0;
}
