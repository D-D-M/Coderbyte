/*
Have the function VowelCount(str) take the str string parameter being passed and return the number of vowels 
the string contains (ie. "All cows eat grass" would return 5). Do not count y as a vowel for this challenge. 
*/

#include <iostream>
using namespace std;

bool isVowel(const char &v) {
  if (v == 'A' || v == 'a' || v == 'E' || v == 'e' ||
      v == 'I' || v == 'i' || v == 'O' || v == 'o' ||
      v == 'U' || v == 'u') {
    return true;
  }
  return false;
}
int VowelCount(string str) { 
  int count = 0;
  for (int i = 0; i < str.length(); i++) {
    if (isVowel(str[i]))
      count++;
  }
  return count; 
            
}

int main() { 
  cout << VowelCount(gets(stdin));
  return 0;
    
}           

