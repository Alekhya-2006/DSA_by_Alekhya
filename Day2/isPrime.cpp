#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a number : ";
    cin >> n;

    // Assume the number is prime initially
    bool isPrime = true;

    // Loop from 2 to n-1 to check if n is divisible by any number in this range
    for(int i = 2; i <= n-1; i++) {  // best condition : i*i <= n;
        // If n is divisible by i, then n is not prime
        if(n % i == 0) {
            isPrime = false;  // Mark as not prime
            break;            // Exit the loop early since we found a divisor
        }
    }

    // After the loop, check the value of isPrime
    if(isPrime == true) {
        cout << "Prime number\n";      // n is prime
    } else {
        cout << " Non Prime Number\n";  // n is not prime
    } 

    return 0;
}