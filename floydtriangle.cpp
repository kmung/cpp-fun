/*
This is a practice program. Floyd's triangle.
Khawm Mung
Last updated: 05/19/20
*/

#include <iostream>
using namespace std;

int main() {
  /* code */

  int rows, i, j, k = 0;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= i; ++j) {
    cout << k + j << " ";
    }
    ++k;
    cout << endl;
  }

  return 0;
}
