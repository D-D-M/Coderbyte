/*
Have the function AlphabetSoup(str) take the str string parameter being passed and return the string 
with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols 
will not be included in the string. 
*/

// My name is Jonas

#include <iostream>
using namespace std;

void swap(string &str, int pos1, int pos2) {
	char temp = str[pos1];
	str[pos1] = str[pos2];
	str[pos2] = temp;
}
string AlphabetSoup(string str) { 
	int len = str.length();
	// Bubble sort
	bool atLeastOneSwap;
	// char last = str[len-1];
	do {
		atLeastOneSwap = false;
		for (int j = 0; j < len-1; j++) {
			if (str[j] > str[j+1]) {
				swap(str, j, j+1);
				atLeastOneSwap = true;
			}
		}
	} while (atLeastOneSwap == true);
	return str; 
}

int main() { 
	cout << AlphabetSoup(gets(stdin));
	return 0;
}           
