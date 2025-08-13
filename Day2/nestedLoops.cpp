// Nested Loops - Loop inside Loop
// This program prints a rectangle of stars (3 rows × 5 columns)

#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows to print

    // Outer loop → Controls the number of rows
    for (int i = 1; i <= n; i++) {

        int m = 5; // Number of stars (columns) in each row

        // Inner loop → Prints stars for the current row
        for (int j = 1; j <= m; j++) {
            cout << "*"; // Print star without moving to next line
        }

        cout << endl; // Move to the next row after printing 'm' stars
    }

    return 0;
}

/*
    Output:
    *****
    *****
    *****

    Explanation:
    1. Outer loop (i = 1 to 3) runs 3 times → Each time represents a new row.
    2. Inside each outer loop run, the inner loop (j = 1 to 5) runs 5 times.
    3. In each inner loop run, a '*' is printed without a newline → This makes a row of stars.
    4. After inner loop finishes, 'endl' moves to the next line → So the next row starts fresh.
*/