#include <iostream> 
using namespace std; 
int main() {
    int age;
    // Ask the user to enter their age
    cout << "Enter age :";
    cin >> age; // Take age input from user

    // Check if the user is eligible to vote
    if(age >= 18) {
        // If age is 18 or above, user can vote
        cout << "You can vote\n";
    } else {
        // If age is below 18, user cannot vote
        cout << "You can't vote\n";
    }

    return 0; 
}