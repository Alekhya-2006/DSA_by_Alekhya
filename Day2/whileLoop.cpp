#include <iostream>
using namespace std;

int main() {
    int count = 1;  // Initialize count variable to 1

    // Loop to print numbers from 1 to 5
    while(count <= 5) {
        cout << count << " ";  // Print the current value of count followed by a space
        count++;               // Increment count by 1
    }
    
    cout << endl;  // Print a newline after the loop finishes
    return 0;      
}


// Output:
// 1 2 3 4 5