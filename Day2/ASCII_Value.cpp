#include <iostream>
using namespace std;

int main() {
    char ch; 

   
    cout << "Enter the character: ";
    cin >> ch; // Take input from user

    // Convert the character to its ASCII value
    int ASCII = ch; // Implicitly converts 'ch' to its integer ASCII code

    // Display the ASCII value
    cout << ASCII;

    return 0; 
}