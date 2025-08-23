#include <iostream>
using namespace std;

// sum of two numbers
double sum(double a, double b) {   // parameters
    double s = a + b;
    return s;
}

// Minimum of 2 numbers
int minOfTwo(int a, int b) {
    if(a<b){
        return a;
    }else{
        return b;
    }
}


int main() {
    cout << "Sum of two numbers is " << sum(3.987, 6.9) << endl; // Arguments

    cout << "Minimum is " << minOfTwo(5, 3) << endl;
    return 0;
}