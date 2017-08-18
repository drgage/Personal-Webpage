/**
 * lab2.cpp
 *
 * <#Name(s)#>
 * <#Uniqname(s)#>
 *
 * EECS 183: Lab 2
 *
 * <#description#>
 */

#include <iostream>
using namespace std;

/**
 * Note: You will not implement this function in Lab 2
 *
 * Requires: month, day, year may represent a date
 * Modifies: nothing
 * Effects: returns 'true' if the date is in the limits
 *          of the Gregorian calendar otherwise returns 'false'
 */
bool isGregorianDate(int month, int day, int year);

/**
 * Note: You will not implement this function in Lab 2
 *
 * Requires: year is a Gregorian year
 * Modifies: nothing
 * Effects: Returns 'true' if the year is a leap year
 *          otherwise returns 'false'
 */
bool isLeapYear(int year);

void test_isGregorianDate();
void test_isLeapYear();

int main() {

    // TODO
    // Once you have completed the testing functions
    // call test_isGregorianDate() and test_isLeapYear()
    // such that the tests actually get run
    
    return 0;
}


void test_isGregorianDate() {
    cout << "Testing -- isGregorianDate()" << endl;
    
    // TODO
    // add code that will test isGregorianDate()
    // you will need multiple test cases that test all possibilities

    cout << "Finished testing -- isGregorianDate()" << endl << endl;

}


void test_isLeapYear() {
    cout << "Testing -- isLeapYear()" << endl;
    
    // TODO
    // add code that will test isLeapYear()
    // you will need multiple test cases that test all possibilities
    
    cout << "Finished testing -- isLeapYear()" << endl;

}

// DO NOT ALTER THE CODE BELOW THIS LINE IN ANY WAY
// WRITE YOUR CODE IN THE FUNCTIONS ABOVE

#if defined(DEBUG) || defined(_DEBUG)
bool isGregorianDate(int month, int day, int year) {
    
    // this (incorrect) implementation returns false to avoid compile error
    // you DO NOT need to implement this function in Lab 2
    return false;
}


bool isLeapYear(int year) {
    
    // this (incorrect) implementation returns false to avoid compile error
    // you DO NOT need to implement this function in Lab 2
    return false;
}
#endif