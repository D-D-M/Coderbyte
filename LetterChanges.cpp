/*
Have the function LetterChanges(str) take the str parameter being passed and modify it 
using the following algorithm. Replace every letter in the string with the letter following 
it in the alphabet (ie. c becomes d, z becomes a). Then capitalize every vowel in this new 
string (a, e, i, o, u) and finally return this modified string. 
*/

#include <iostream>
using namespace std;

string LetterChanges(string str) { 
	int len = str.length();
	int distance = ('a' - 'A');
	char alphabet[26];
	alphabet[0] = 'a';
	for (int i = 1; i < 26; i++)
	alphabet[i] = alphabet[i-1] + 1;
	
	for (int i = 0; i < len; i++) {
	if (isalpha(str[i])) {    
		if (str[i] == 'z') {
			str[i] == 'a';
		}  
		else {
		str[i] = str[i] + 1;
		}
		char c = str[i];
		if (c == 'a' || c == 'e' || c == 'i' ||
			c == 'o' || c == 'u') {
		str[i] -= distance;
		}
		
	}
	}
	return str;     
}

int main() {
	cout << LetterChanges(gets(stdin));
	return 0;
}           
