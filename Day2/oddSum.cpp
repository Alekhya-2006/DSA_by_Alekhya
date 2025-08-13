// Sum of all odd numbers from 1 to n.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int oddSum = 0;

    for(int i= 1; i <= n; i++) {
        if(i%2 != 0) {
            oddSum += i;  
        }
    }

    cout << "The sum of odd numbers is " << 
    oddSum << endl;
    return 0;
}