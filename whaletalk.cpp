/*
Practice program
Last updated: 06/16/20
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main() {
  //whale talk

  string input = "I love you.";
  vector<char> vowels;
  vector<char> result;

  cout << "The phrase I love you in whale talk is: " << endl;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
          result.push_back(input[i]);

          if (input[i] == 'e' || input[i] == 'u') {
            result.push_back(input[i]);
        }
      }
    }
  }

  for (int k = 0; k < result.size(); k++) {
    cout << result[k];
  }
  cout << "\n";

  return 0;
}
