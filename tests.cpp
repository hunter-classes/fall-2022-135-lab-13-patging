/*
	Patrick Ging
	Professor Zamanksy
	Lab 12
	tests.cpp
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "recursion.h"

TEST_CASE("printRange") {
	CHECK(printRange(0,2) == "0 1 2");
	CHECK(printRange(1,3) == "1 2 3");
	CHECK(printRange(-2,2) == "-2 -1 0 1 2");
}

TEST_CASE("Sum Range") {
	CHECK(sumRange(0,3) == 6);
	CHECK(sumRange(-100,100) == 0);
	CHECK(sumRange(-1,3 == 5));
}

TEST_CASE("Sum Array") {
	//credit professors site
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

    CHECK(sumArray(arr,size) == 43);
    CHECK(sumArray(arr,5) == 34);

}

TEST_CASE("isAlphaNumeric") {
	CHECK(isAlphanumeric("hey"));
	CHECK(isAlphanumeric("PATRICK"));
	CHECK(isAlphanumeric("12344"));

	CHECK(!isAlphanumeric("hey__"));
	CHECK(!isAlphanumeric(" "));
	CHECK(!isAlphanumeric("202_AAA"));

}

TEST_CASE("nestedParens") {
	CHECK(nestedParens("()"));
	CHECK(nestedParens("(())"));
	CHECK(nestedParens("((()))"));

	CHECK(!nestedParens("((()))))"));
	CHECK(!nestedParens(")))"));
	CHECK(!nestedParens("(()))"));

}