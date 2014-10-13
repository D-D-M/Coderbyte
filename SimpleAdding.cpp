/*
Have the function SimpleAdding(num) add up all the numbers from 1 to num. For the test cases, 
the parameter num will be any number from 1 to 1000.
*/
#include <iostream>
using namespace std;

int SimpleAdding(int num) { 
	/*
	// The time-consuming way to do it
	int sum = 0;
	for (int i = 1; i <= num; i++)
		sum += i;
	
	num = sum;
	
	return num; 
	*/

	// The mathematical way to do it
	return num*(num+1)/2;
}

int main() {
	cout << SimpleAdding(gets(stdin));
	return 0;
}           
