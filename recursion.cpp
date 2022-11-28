/*
	Patrick Ging
	Professor Zamanksy
	Lab 13
	recursion.cpp
*/

#include <iostream>
#include <cctype>
#include "recursion.h"

/*
	PrintRange(int left, int right)

	Returns a string with all int in range
	[left,right]	
*/
std::string printRange(int left, int right) {
	if(left == right) {
		// base case
		return std::to_string(left);
	} else {
		return std::to_string(left) + " " + printRange(left+1,right);
	}
}

/*
	int sumRange(int left, int right);

	returns sum of all num from left to right inclusive

	eg sumRange(1,3) 6
*/
int sumRange(int left, int right) {
	if (left == right) {
		return left;
	} else {
		return left + sumRange(left+1,right);
	}
}

/*
	sumArray()

	returns the sum of the array recursively
*/
int sumArray(int *arr, int size) {
	if(size == 0) {
		return 0; // base case
	} else{
		return *(arr + size-1) + sumArray(arr,size-1);
	}
}

/*
	Recursively returns if the stirng is full alphanumeric
*/
bool isAlphanumeric(std::string s) {


	if (s.length() == 0 ) {
		return true;  // doesn't alter the actual val of the exp
	} else {
		return isAlphanumeric(s.substr(1)) && std::isalnum(s[0]); 
	}
}

/*
	Resurvively tells whether or not a str is nested parenthesis
	eg
	() (()) ""

	not )( ))))

*/
bool nestedParens(std::string s) {
	if(s.length() == 0) {
		return true;
	} else if (s.length() % 2 != 0) {
		return false;
	} else {
		return nestedParens(s.substr(1,s.length()-2)) && s[0] == '(' && s[s.length()-1] == ')';
 	}

}

