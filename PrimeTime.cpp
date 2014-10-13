/*
Have the function PrimeTime(num) take the num parameter being passed and return the string true if the 
parameter is a prime number, otherwise return the string false. The range will be between 1 and 2^16. 
*/

#include <iostream>
using namespace std;

string PrimeTime(int num) { 
  // Between 1 and 2^16 means that the number will fit in a 4-byte int.
  int limit = num/2; // Don't need to check numbers bigger than half the original number
  for (int i = 2; i < limit; i++) {
    if (num % i == 0)
      return "false";
  }
  return "true"; 
}

int main() { 
  cout << PrimeTime(gets(stdin));
  return 0;
}           
