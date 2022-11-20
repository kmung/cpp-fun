/*
Practice program: FizzBuzz!
Last modified: 05/25/2020
*/

#include <iostream>

int main(int argc, char const *argv[]) {

  // run the loop from 1 to 100
  for(int i = 1; i <= 100; i++) {
    if(i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << "\n";
    }
  }

  return 0;
}
