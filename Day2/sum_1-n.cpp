// Program to calculate the sum of numbers from 1 to n

#include <iostream>   
using namespace std;  

int main() {
    int n;          
    
    cout << "Enter a number: "; 
    cin >> n;                   
    
    int sum = 0;     // Initialize sum variable to 0, to accumulate the total
    
    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;    // Add current value of i to sum (sum = sum + i)
    }
    
    // Output the final calculated sum
    cout << "Sum is " << sum << endl;
    
    return 0;  
}