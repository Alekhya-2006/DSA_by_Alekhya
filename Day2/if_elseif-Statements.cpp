#include <iostream> 
using namespace std;

int main() {
    int marks; 

 
    cout << "Enter your marks: ";
    cin >> marks; 

    // Check grade based on marks
    if(marks >= 90) {
        // Marks 90 or above → Grade A
        cout << "Grade-A";
    } else if(marks >= 70 && marks < 90) {
        // Marks between 70 and 89 → Grade B
        cout << "Grade-B";
    } else if(marks >= 40 && marks < 70) {
        // Marks between 40 and 69 → Grade C
        cout << "Grade-C";
    } else {
        // Marks below 40 → Fail
        cout << "Fail";
    }

    return 0;
}