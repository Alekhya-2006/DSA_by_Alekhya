// Operators
// Logical Operators - OR(||), AND(&&), NOT(!)
// OR - If one or more of the given conditions is true, answer is true
// AND - If one or more of the given conditions is false, answer is false
// NOT - If given condition is true, outcome false and given condition is false, outcome will be true.

#include <iostream>
using namespace std;

int main() {
   
    int a = 12, b= 7;
    // NOT Logical Operator
    cout << !(a < b) << endl; // here the condition is false, but we added not operator 
                              // so the output will be true -> 1
    
    // OR Logical  Operator              
    cout << (a < b) || (a == b); // Not a single condition in true, 
                              // so the output will be false -> 0

    cout << (a > b) || (a == b);  // One of the given condition is true,
                                // so the output will be true -> 1

    // AND Logical Operator                            
    cout << (a > b) && (a == b);   // One of the condition is false,
                                // so the output will be false -> 0

    cout << (a > b) && (a != b);   // both the conditions are true,
                                // so the output will be true -> 1                         
    
    
    return 0;
}