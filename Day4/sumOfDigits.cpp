#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int digitSum = 0;
    while(n >0) {
        int lastDig = n % 10;
        n /= 10;

        digitSum += lastDig;
    }
    return digitSum;
}


int main() {
    cout << "Sum of Digits = " << sumOfDigits(34562) << endl;
    return 0;
}