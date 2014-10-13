/*
Have the function TimeConvert(num) take the num parameter being passed and return the number of hours and 
minutes the parameter converts to (ie. if num = 63 then the output should be 1:3). Separate the number of 
hours and minutes with a colon. 
*/

#include <iostream>
#include <sstream>
using namespace std;

string TimeConvert(int num) { 
	int hours = num/60;
	int minutes = num%60;
	//string time;
	//time = to_string(hours) + ":" + to_string(minutes);
	stringstream time;
	time << hours << ":" << minutes;
	return time.str(); 
}

int main() { 
	cout << TimeConvert(gets(stdin));
	return 0;
		
}           
