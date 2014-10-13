/*
Have the function SimpleSymbols(str) take the str parameter being passed and determine if it 
is an acceptable sequence by either returning the string true or false. The str parameter will
be composed of + and = symbols with several letters between them (ie. ++d+===+c++==a) and for 
the string to be true each letter must be surrounded by a + symbol. So the string above 
would be false. The string will not be empty and will have at least one letter. 
*/

#include <iostream>
using namespace std;

string SimpleSymbols(string str) { 
	bool preceding = false;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (isalpha(str[i])) {
			if (preceding == false) {
				return "false";
			}
			if (i < len-1) {
				if (str[i+1] != '+')
					return "false";
				else
					i++;
			}
			else
				return "false";
		}
		else if (str[i] == '+') {
			preceding = true;
		}
		else {
			preceding = false;
		}
		
	}
	str = "true";
	return str; 
						
}

int main() { 
	cout << SimpleSymbols(gets(stdin));
	return 0;
		
}           
