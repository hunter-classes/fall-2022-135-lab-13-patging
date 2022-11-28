/*
    Patrick Ging
    Professor Zamanksy
    Lab 13
    main.cpp
*/

#include <iostream>
#include "recursion.h"

int main() {

    std::cout << "Range from -1 to 10\n";
	std::cout << printRange(-1,10) << std::endl;
	
    std::cout << "Sum from 0 to 3\n";
    std::cout << std::to_string(sumRange(0, 3)) << std::endl;

    // credit professors site
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    std::cout << "Sum of array [12,17,-5,3,7,-15,27,5,13,-21]" << std::endl;
    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43

    std::cout << "Is Hello alphanumeric " << isAlphanumeric("Hello") << std::endl;    
    std::cout << "Is Patrick alphanumeric " << isAlphanumeric("Patrick") << std::endl;    
    std::cout << "Is Pat_Rick alphanumeric " << isAlphanumeric("Pat_Rick") << std::endl;    

    std::cout << "Is (()) nestedParens " << nestedParens("(())") << std::endl;    
    std::cout << "Is )) alphanumeric " << nestedParens("))") << std::endl;    

    delete[] arr; 

	return 0;
}