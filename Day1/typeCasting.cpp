// Type Casting and Type conversion- Converting data from one type to another.

// Type Casting(Explicit) - Big data type to Small data type
// Type Conversion(Impicit) - Small data type to Big data type

#include <iostream>
using namespace std;

int main() {
    // Type Conversion
    char grade = 'A'; // ASCII value of 'A' is 65

    int value = grade;
    cout << value << endl;  // Output: 65

    // Type Casting
    double price = 98.87;
    
    int newPrice = (int)price;
    cout << newPrice << endl; // Output: 98 (since in integer data type there will not be any decimal numbers)

    return 0;
}