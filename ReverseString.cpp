/*
Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order. 
*/

#include <iostream>
using namespace std;

string FirstReverse(string str) { 
	int start = 0;
	int end = str.length() - 1;
	char tmp;
	if (!str.empty()) {
	while (start < end) {
		tmp = str[start];
		str[start++] = str[end];
		str[end--] = tmp;
	}
	}
	return str;
}

int main() { 
	cout << FirstReverse(gets(stdin));
	return 0;
	
}           
