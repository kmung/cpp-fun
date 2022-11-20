/*
This is a practice program that emulates the Rock, Paper, Scissors, Spock, Lizards
game.
Last updated: 05/19/2020
*/

#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  //live long and prosper

  srand (time(NULL));
  int computer = rand() % 5+1; /*a random number generated that could be a 1, 2, 3,
  4 or 5 */

  int user = 0;

  std::cout << "\t\nYou'll be playing against the computer in this game!\n";

  std::cout << "=====================\n";
  std::cout << "Rock, Paper, Scissors, Lizards, Spock!\n";
  std::cout << "=====================\n";
  std::cout << "Choose the corresponding number of your choice.\n";

  std::cout << "(1) is Rock\n";
  std::cout << "(2) is Paper\n";
  std::cout << "(3) is Scissors\n";
  std::cout << "(4) is Lizard\n";
  std::cout << "(5) is Spock\n";

  std::cout << "Shoot!\n";
  std::cin >> user;

  std::cout << computer << "\n";

  if (computer == 1 && user == 1) {
    std::cout << "Tie!\n";
  } else if (computer == 2 && user == 2) {
    std::cout << "Tie!\n";
  } else if (computer == 3 && user == 3) {
    std::cout << "Tie!\n";
  } else if (computer == 4 && user == 4) {
    std::cout << "Tie!\n";
  } else if (computer == 5 && user == 5) {
    std::cout << "Tie!\n";
  } else if (computer == 1 && user == 2) {
    std::cout << "You win!\n";
  } else if (computer == 1 && user == 3) {
    std::cout << "Computer wins!\n";
  } else if (computer == 2 && user == 1) {
    std::cout << "Computer wins!\n";
  } else if (computer == 2 && user == 3) {
    std::cout << "You win!\n";
  } else if (computer == 3 && user == 1) {
    std::cout << "You win!\n";
  } else if (computer == 3 && user == 2) {
    std::cout << "Computer wins!\n";
  } else if (computer == 1 && user == 4) {
    std::cout << "Computer wins!\n";
  } else if (computer == 4 && user == 1) {
    std::cout << "You win!\n";
  } else if (computer == 4 && user == 5) {
    std::cout << "Computer wins!\n";
  } else if (computer == 5 && user == 4) {
    std::cout << "You win!\n";
  } else if (computer == 5 && user == 3) {
    std::cout << "Computer wins!\n";
  } else if (computer == 3 && user == 5) {
    std::cout << "You win!\n";
  } else if (computer == 3 && user == 4) {
    std::cout << "Computer wins!\n";
  } else if (computer == 4 && user == 3) {
    std::cout << "You win!\n";
  } else if (computer == 4 && user == 2) {
    std::cout << "Computer wins!\n";
  } else if (computer == 2 && user == 4) {
    std::cout << "You win!\n";
  } else if (computer == 2 && user == 5) {
    std::cout << "Computer wins!\n";
  } else if (computer == 5 && user == 2) {
    std::cout << "You win!\n";
  } else if (computer == 5 && user == 1) {
    std::cout << "Computer wins!\n";
  } else { //computer == 1 && user == 5
    std::cout << "You win!\n";
  }

  return 0;
}
