#include <iostream>
using namespace std; 
int main() {

    char ch;
    // Ask the user to enter a character
    cout << "Enter the character : ";
    cin >> ch; // Take character input

    // Check if the character is lowercase
    if(ch >= 'a' && ch <= 'z') { 
        cout << "Lower Case";
    }
    // Check if the character is uppercase
    else if(ch >= 'A' && ch <= 'Z') { 
        cout << "Upper Case";
    }
    // If not in a–z or A–Z range, it is not an alphabet
    else {
        cout << "Not a Alphabet";
    }

    return 0; 
}