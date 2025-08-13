#include <iostream> 
using namespace std; 

int main() {

    int n = 10; 
    int i = 1; 

    //  do-while loop
    // The do-while loop executes the block of code first, then checks the condition.
    // This ensures the loop runs at least once, even if the condition is false initially.
    do {
        cout << i << " "; // Print the current value of 'i' followed by a space
        i++;               // Increment 'i' by 1 to move to the next number
    } while (i <= 10);     // Condition: Repeat loop as long as 'i' is less than or equal to 10

    //  After the loop ends, print a newline for cleaner output
    cout << endl;

    return 0;
}

/*
OUTPUT:
1 2 3 4 5 6 7 8 9 10

EXPLANATION:
- The loop starts with i = 1.
- It prints the value of i, then increments i by 1.
- This continues until i becomes 11, at which point the condition (i <= 10) becomes false, and the loop stops.
- do-while ensures the printing happens before the condition is checked.
*/
