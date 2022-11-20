// Khawm Mung
// Palindrome checker for integers specifically
// Algorithm practice from LeetCode
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <cassert> // provides assert
using namespace std;

// palindrome integer checker function
bool isPalindrome(int x) {
    bool rc = false;
    
    if (x >= 0 && x < 10) { // single digits are default palindromes
        rc = true;
    } else if (x > 0) { // check that the integer must be positive
        // negative numbers by default are not palindromes
        int num = 0; // setting a temp variable
        
        while (x > num) { // run the loop until x is equal or bigger than num
            /* When the length is an odd number, we can get rid of the middle digit by num/10
            // For example when the input is 12321, at the end of the while loop we get x = 12, num = 123,
            // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
            */
            num = (num*10) + (x%10); 
            x /= 10; // x= x/10
        }
        if (x == num || x == num/10) {
            rc = true;
        }
    }
    return (rc);   
}

int main(int argc, char const *argv[]) {
    int x = 0;

    cout << "Enter an integer: " << endl;
    cin >> x;
    if (x % 10 == 0) {//num has to be a non decimal value
        if (isPalindrome(x)) {
            cout << "Your number, " << x << " is a palindrome." << endl;
        } else {
          cout << "Your number, " << x << " is not a palindrome." << endl;
        }
    } else {
      cout << "You've enterd a non decimal value. Start again." << endl;
    }
    return EXIT_SUCCESS;
}