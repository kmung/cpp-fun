// Practice program obtained from my textbook
// This program implements queue data structure
// A program to test whether an input line is a plaindrome.
// The program ignores spaces, punctuation, and the difference between
// upper- and lowercase letters.

#include <cassert> // provides assert
#include <cctype> // provides isalpha, toupper
#include <cstdlib> // provides EXIT_SUCCESS
#include <iostream> // provides cout, cin, peek
#include <queue> // provides the queue template class
#include <stack> // provides the stack template class
using namespace std;

int main() {
  queue<char> q;
  stack<char> s;
  char letter;
  int mismatch = 0;
  
  cout << "Enter a line and I will see if it's a plaindrome: " << endl;

  while (cin.peek() != '\n') {
    cin >> letter;
    if (isalpha(letter)) {
      q.push(toupper(letter));
      s.push(toupper(letter));
    }
  }

  while ((!q.empty()) && (!s.empty())) {
    if (q.front() != s.top()) {
      ++mismatch;
    }
    q.pop();
    s.pop();
  }

  if (mismatch == 0) {
    cout << "That is a palindrome." << endl;
  } else {
    cout << "That is not a palindrome." << endl;
  }
  return EXIT_SUCCESS;
}
