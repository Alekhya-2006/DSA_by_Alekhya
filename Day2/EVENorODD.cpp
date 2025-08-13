#include <iostream> 
using namespace std;

int main() {
    int num; 

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> num; 

    // Check if the number is even or odd
    if(num % 2 == 0) { // If remainder after dividing by 2 is 0 → Even
        cout << num << " is Even";
    } else { // Otherwise → Odd
        cout << num << " is Odd";
    }

    return 0; 
}
