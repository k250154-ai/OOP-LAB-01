
#include <iostream>
using namespace std;

void square(int a) {
 cout << "the square is" << a*a<< endl;
}

int main() {
  
  int num;
    cout << "Enter number: ";
    cin >> num;

  square(num);

  return 0;
}
