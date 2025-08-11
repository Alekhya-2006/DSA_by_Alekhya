
// This program explains basic data types with examples

#include <iostream> 
using namespace std; 

// 'main()' is where the program starts running
int main() {
    // DATA TYPES 

    // 1. INTEGER (int)
    
    // Used to store whole numbers (positive, negative, or zero).
    // Size: Usually 4 bytes in most systems.
    int age = 18; 
    cout << "Age (int): " << age << endl;


    // 2. FLOAT (float)

    // Used to store decimal numbers (fractional values) with single precision.
    // Size: Usually 4 bytes.
    float price = 45.5; 
    cout << "Price (float): " << price << endl;

    // 3. DOUBLE (double)

    // Used to store decimal numbers with double precision (more accurate than float).
    // Size: Usually 8 bytes.
    double pi = 3.1415926535;
    cout << "Pi value (double): " << pi << endl;

    // 4. CHARACTER (char)

    // Used to store a single letter, number, or symbol.
    // Size: Usually 1 byte.
    char grade = 'A'; 
    cout << "Grade (char): " << grade << endl;

    
    // 5. BOOLEAN (bool)

    //  Stores only two values: true (1) or false (0).
    // Size: Usually 1 byte.
    bool isPassed = true; // Example: storing pass/fail status
    cout << "Passed? (bool): " << isPassed << endl; 

    
    return 0;
}