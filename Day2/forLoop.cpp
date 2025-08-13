// For Loop  
// Syntax - for(initialisation; condition; updation){  
//               // work
//          }   

#include <iostream>  
using namespace std;
int main() {
    int n; 

    cout << "n = ";  
    cin >> n;        

    // for loop to print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";  // Print the current value of i followed by a space
    }

    cout << endl;  // Print a newline after the loop finishes

    return 0;  // Indicate that the program ended successfully
}
