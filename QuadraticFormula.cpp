#include <iostream>
#include <cmath>

/*This is a practice program.
Author: Khawm Mung
Date: 05/13/2020
*/

int main() {

  //delcaring and instantiating variables
  double a, b, c = 0; //coefficients
  double root1, root2 = 0; //for positive and negative roots

  std::cout << "\n\tThis is a quadratic calculator.\n";

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  if (((b*b) - (4*a*c)) > 0) {
  root1 = (-b + std::sqrt((b*b) - 4*a*c))/(2*a);
  root2 = (-b - std::sqrt((b*b) - 4*a*c))/(2*a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  } else {
  std::cout << "Cannot calculate the roots of given coefficients.\n";
  }

  // std::cout << "Thank you for using this calculator. ";
  // std::cout << "Maybe next time graphics
  // user interface will be implemented\n";

  return 0;
}
