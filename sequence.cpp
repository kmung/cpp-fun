#include <cctype>
#include <iostream>
#include <cstdlib>
#include "sequence1.h"
using namespace std;
//using namespace main_savitch_3;

void print_menu() {
  cout << endl;
  cout << "The following choices are available: " << endl;
  cout << " ! Activate the start() function" << endl;
  cout << " + Activate the advance() function" << endl;
  cout << " ? Print the result from the is_item() function" << endl;
  cout << " C Print the result from the current() function" << endl;
  cout << " P Print a copy of the entire sequence" << endl;
  cout << " S Print the result from the size() function" << endl;
  cout << " I Insert a new number with the insert(...) function" << endl;
  cout << " A Attach a new number with the attach(...) function" << endl;
  cout << " R Insert the remove_current() function" << endl;
  cout << " Q Quit this test program" << endl;
}

char get_user_command() {
  char command;

  cout << "Enter choice: ";
  cin >> command;

  return command;
}

void show_sequence(sequence display) {
  for (display.start(); display.is_item(); display.advance()) {
    cout << display.current() << endl;
  }
}

double get_number() {
  double result;

  cout << "Please enter a real number for the sequence: ";
  cin >> result;
  cout << result << " has been read." << endl;
  return result;
}

int main() {
  sequence test;
  char choice;

  cout << "I have initialized an empty sequence of real numbers." << endl;

  do {
    print_menu();
    choice = toupper(get_user_command());
    switch (choice) {
      case '!':
      test.start();
      break;
      case '+':
      test.advance();
      break;
      case '?':
      if (test.is_item()) {
        cout << "There is an item." << endl;
      } else {
        cout << "There is no current item." << endl;
      }
      break;
      case 'C':
      if (test.is_item()) {
        cout << "Current item is: " <<test.current() << endl;
      } else {
        cout << "There is no current item." << endl;
      }
      break;
      case 'P':
      show_sequence(test);
      break;
      case 'S':
      cout << "Size is " << test.size() << '.' << endl;
      break;
      case 'I':
      test.insert(get_number());
      break;
      case 'A':
      test.attach(get_number());
      break;
      case 'R':
      test.remove_current();
      cout << "The current item has been removed." << endl;
      break;
      case 'Q':
      cout << "Ridicule is the best test of truth." << endl;
      break;
      default:
      cout << choice << " is invalid." << endl;
    }
  }
  while ((choice != 'Q'));

  return EXIT_SUCCESS;
}
