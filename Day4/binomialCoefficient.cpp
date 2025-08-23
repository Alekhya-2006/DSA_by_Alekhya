#include <iostream>
using namespace std;

int factorialN(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int nCr(int n, int r) {

    int a = factorialN(n);
    int b = factorialN(r);
    int c = factorialN(n-r);

    return a/(b*c);
}
int main() {

    int n = 8, r = 2;
    
    cout << "value of Binomial coefficient is " << nCr(n, r) << endl;
    return 0;
}
// Output:
// value of Binomial coefficient is 28