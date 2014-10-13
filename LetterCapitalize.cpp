/*
Have the function LetterCapitalize(str) take the str parameter being passed and capitalize the 
first letter of each word. Words will be separated by only one space. 
*/

#include <iostream>
using namespace std;

string LetterCapitalize(string str) { 
	int len = str.length();
	int distance = 'a' - 'A'; // distance between lower cases and upper cases
	
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && isalpha(str[i])) {
			str[i] -= distance;
		} 
		while (!isspace(str[i]) && i < len) {
			++i;
		}      
	}
	return str;            
}

int main() { 
	cout << LetterCapitalize(gets(stdin));
	return 0;
		
}         