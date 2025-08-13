/*
    Factorial of a Number (1 to 10)
    
    This program takes an integer 'n' between 1 and 10 as input 
    and calculates its factorial using a for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int n;  // Variable to store the input number
    cout << "Enter a number (1-10): ";
    cin >> n;

    int factorial = 1;  // Variable to store factorial result
    
    // Loop to calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    // Display the factorial
    cout << "Factorial of " << n << " is " << factorial;

    return 0;
}