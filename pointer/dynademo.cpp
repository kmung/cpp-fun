// FILE: dynademo.cpp
// This is a small demo program showing how a dynamic array is used.
// This code is obtained from my textbook
// Just for practice and to learn pointers
// I do not own any of this code
#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

// PROTOTYPES for functions used by this demo program
void allocate_doubles(double*& p, size_t& n);
// POSTCONDITION: The user has been programmed for a size n, and this size has been read.
// The pointer p has been set to point to a new dynamic array containing n doubles.
// NOTE: If there is insufficient dynamic memoery, then bad_alloc is thrown.

void fill_array(double data[], size_t n);
// Precondition: data is an array with at least n components.
// Postcondition: The user has been prompted to type ne doubles, and these
// numbers have been read and placed in the first n components of the array.

double average(const double data[], size_t n);
// Preconditon: data is an array with at least n components, and n > 0.
// Postcondition: The value returned is the average of data[0]..data[n-1].

void compare(const double data[], size_t n, double value);
// Precondition: data is an array with at least n components.
// Postcondition: The values data[0] through data[n-1] have been printed with a
// message saying whether they are above, below, or equal to value.

int main() {
  double *numbers;  // Will print to the first component of an array
  size_t array_size;
  double mean_value;

  //Allocate an array of doubles to hold the user's input
  cout << "\n" << endl;
  cout << "This program will compute the avaerage of some numbers. The\n";
  cout << "numbers will be stored in an array of doubles that I allocate.\n";
  allocate_doubles(numbers, array_size);

  // Read the user's input and compute the average.
  fill_array(numbers, array_size);
  mean_value = average(numbers, array_size);

  // Print the output.
  cout << "\n" << endl;
  cout << "The average is: " << mean_value << endl;
  compare(numbers, array_size, mean_value);
  cout << "\n" << "This was a mean program." << "\n" << endl;

  return EXIT_SUCCESS;
}

void allocate_doubles(double*& p, size_t& n) {
  cout << "How many doubles should I allocate?" << endl;
  cout << "Please type a positive integer answer: ";
  cin >> n;
  p = new double[n];
}

void fill_array(double data[], size_t n) {
  size_t i;
  cout << "Please type " << n << " double number: " << endl;

  // Read the n numbers one at a time.
  for (i = 0; i < n; ++i) {
    cin >> data[i];
  }
}

void compare(const double data[], size_t n, double value) {
  size_t i;

  for (i = 0; i < n; ++i) {
    cout << data[i];
    if (data[i] < value) {
      cout << " is less than ";
    } else if (data[i] > value) {
      cout << " is more than ";
    } else {
      cout << " is equal to ";
    }
    cout << value << endl;
  }
}

double average(const double data[], size_t n) {
  size_t i; // An array index
  double sum = 0; // The sum of data[0] through data[n - 1]

  assert(n > 0);

  // Add up the n numbers and return the average.
  for (i = 0; i < n; ++i) {
    sum += data[i];
  }
  return (sum/n);
}
