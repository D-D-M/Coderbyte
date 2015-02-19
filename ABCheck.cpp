/*
Have the function ABCheck(str) take the str parameter being passed and return the string true if 
the characters a and b are separated by exactly 3 places anywhere in the string at least once 
(ie. "lane borrowed" would result in true because there is exactly three characters between a and b). 
Otherwise return the string false. 
*/

// My name is David Meyer
// 

#include <iostream>
using namespace std;

string ABCheck(string str) { 
	int len = str.length();
	int spacing = 4;
	char check;
	int j;
	for (int i = 0; i < len-spacing; i++) { // Don't need to check the last 3 characters
		if (str[i] == 'a') {
			// Get the third character
			int lettersfound = 0;
			j = i + spacing;
			if (str[j] == 'b')
				return "true";
		}
	}
	str = "false";
	return str;         
}

int main() { 
	cout << ABCheck(gets(stdin));
	return 0;
}           

