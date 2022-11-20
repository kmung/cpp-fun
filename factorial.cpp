// Author: Khawm Mung
// A simple recursion program to calculate the factorial of n-th number.
// Date: 11/14/2022
#include <iostream> // provides cout
#include <cstdio>
#include <cassert> // provides cassert
#include <cmath>

// defining a positive long long data type
// this gives a range from 0 to 18,446,744,073,709,551,615
typedef unsigned long long UINT64;

using namespace std;

UINT64 factorial(UINT64 n) {
    UINT64 fac = 1;
   // n = (UINT64)n;
    if (n > 1) {
        fac = n * factorial(n-1);
    }
    return fac;
}

UINT64 fibanocci(UINT64 n) {
    UINT64 fib = 1;
    if (n == 0) {
        fib = 0;
    } else if (n > 2) {
        fib = fibanocci(n - 1) + fibanocci(n - 2);
    }
    return (fib);
}

int main() {
    UINT64 userNum = 0;

    cout << "This program computes the factorial of n-th number." << endl;
    cout << "Enter a number to calculate its factorial" << endl;

    cin >> userNum;

   // assert(userNum > -1);

    if (userNum >= 0) {
        cout << "The factorial of " << userNum << " is " << factorial(userNum) << "." << endl;
        cout << "The fibonacci summation at " << userNum << " is " << fibanocci(userNum) << "." << endl;
    } else {
        cout << "Error: cannot calculate the factorial of a negative number." << endl;
    }

    return EXIT_SUCCESS;
}
