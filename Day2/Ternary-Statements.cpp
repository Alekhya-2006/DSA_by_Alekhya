// Ternary statement - Shortest way to write if-else statement.
// Syntax - condition ? expression_if_true : expression_if_false;

#include <iostream> 
using namespace std; 

int main() {

    int n; 

    cout << "Enter the number: ";
    cin >> n; 

    // If true → print "Positive"
    // If false → print "Negative"
    cout << (n >= 0 ? "Positive" : "Negative") << endl;

    return 0; 
}