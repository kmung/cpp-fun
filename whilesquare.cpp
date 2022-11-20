/*
Practice program prints the squares from 0 to 10 using a while loop.
Last modified: 05/25/2020
*/

#include <iostream>

int main(int argc, char const *argv[]) {

  int i, square = 0;

  while (i < 11) {
    square = i * i;
    std::cout << i << " " << square << "\n";
    i++;
  }

  return 0;
}
