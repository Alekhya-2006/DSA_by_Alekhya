/*
    Sum of Numbers Divisible by 3
   
    This program takes an integer 'n' as input and calculates 
    the sum of all numbers from 1 to n that are divisible by 3.
*/

#include <iostream>
using namespace std;

int main() {
    int n;  // Variable to store user input (limit)
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;  // Variable to store sum of numbers divisible by 3

    // Loop from 1 to n
    for(int i = 1; i <= n; i++) {
        // Check if number is divisible by 3
        if(i % 3 == 0) {
            sum += i;  // Add to sum
        }
    }

    // Display the result
    cout << "Sum is " << sum;
    
    return 0;
}