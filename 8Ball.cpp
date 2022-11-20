#include <iostream>
#include <cstdlib>
/*This is another practice program implementing the random number generator function

Last updated: 05/17/20
*/

int main() {
  //big code

  std::cout << "MAGIC 8-BALL:\n";

  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer << "\n";

  if (answer == 0) {
    std::cout << "It is certain.\n";
  } else if (answer == 1) {
    std::cout << "Maybe.\n";
  } else if (answer == 2) {
    std::cout << "Make your own decisions.\n";
  } else if (answer == 3) {
    std::cout << "Are you really going to trust this ball?\n";
  } else if (answer == 4) {
    std::cout << "Shoulda listen to yo parents.\n";
  } else if (answer == 5) {
    std::cout << "Take a second to realize your asking life choices from an inamate object.\n";
  } else if (answer == 6) {
    std::cout << "U have the power in u.\n";
  } else if (answer == 7) {
    std::cout << "Just do it\n";
  } else if (answer == 8) {
    std::cout << "Keep going.\n";
  } else if (answer == 9) {
    std::cout << "A rubber duck.\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }

  return 0;
}
