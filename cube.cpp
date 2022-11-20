// Practice code
// to practice inline function
// Calculate the cube of a number

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

inline double cube (const double num) {
	return num * num * num;
}

int main() {
	double value = 0;
	cout << "Enter a value: " << endl;
	cin >> value;
	cout << "\n" << value << endl;

	cout << "The cube of the value you've entered is ";
	cout << cube(value) << endl;

	return 0;
}
