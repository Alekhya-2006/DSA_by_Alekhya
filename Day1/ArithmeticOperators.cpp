// Operators
// Arithmetic Operators - These include +, -, *, /, %


#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 6;

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << ((float)a/b) << endl;  // type conversion
    cout << "modulo = " << (a%b) << endl; // Modulo means the remainder after division
  
    return 0;
}

// Output:
// sum = 21
// difference = 9
// product = 90
// division = 2.5
// modulo = 3