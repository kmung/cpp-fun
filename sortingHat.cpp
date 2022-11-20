#include <iostream>
/*
Another practice program that takes user input and calculate the values.
Utlizes the string type data.
Last updated: 05/17/2020
*/

int main() {
  //big code
  int gryffindor, hufflepuff, ravenclaw, slytherin = 0;

  int answer1, answer2, answer3, answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n";

  //Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
  std::cout << "\t(1) The Good\n";
  std::cout << "\t(2) The Great\n";
  std::cout << "\t(3) The Wise\n";
  std::cout << "\t(4) The Bold\n";
  std::cin >> answer1;

  if (answer1 == 1) {
    hufflepuff = hufflepuff + 1;
  } else if (answer1 == 2) {
    slytherin = slytherin +1;
  } else if (answer1 == 3) {
    ravenclaw = ravenclaw + 1;
  } else if (answer1 == 4) {
    gryffindor = gryffindor + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  //Question 2
  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "\t(1) Dawn\n";
  std::cout << "\t(2) Dusk\n";
  std::cin >> answer2;

  if(answer2 == 1) {
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;
  } else if (answer2 == 2) {
    hufflepuff = hufflepuff + 1;
    slytherin = slytherin + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  //Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "\t(1) The violin\n";
  std::cout << "\t(2) The trumpet\n";
  std::cout << "\t(3) The piano\n";
  std::cout << "\t(4) The drum\n";
  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin = slytherin + 1;
  } else if (answer3 == 2) {
    hufflepuff = hufflepuff + 1;
  } else if (answer3 == 3) {
    ravenclaw = ravenclaw + 1;
  } else if (answer3 == 4) {
    gryffindor = gryffindor + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  //Question 4
  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "\t(1) The wide, sunny grass lane\n";
  std::cout << "\t(2) The narrow, dark, lantern-hit alley\n";
  std::cout << "\t(3) The twisting, leaf-strewn path through woods\n";
  std::cout << "\t(4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff = hufflepuff + 1;
  } else if (answer4 == 2) {
    slytherin = slytherin + 1;
  } else if (answer4 == 3) {
    gryffindor = gryffindor + 1;
  } else if (answer4 == 4) {
    ravenclaw = ravenclaw + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

  return 0;
}
