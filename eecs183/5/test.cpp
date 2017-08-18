/**
 * test.cpp
 *
 * EECS 183, Winter 2017
 * Lab 4: loops exercises
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the assignment here#>
 */

#include "loops.h"

#include <iostream>
using namespace std;

void test_print_rectangle();

int main() {
    
    // TODO
    // Once you have completed the testing functions
    // call them such that the tests actually get run
    test_print_rectangle();

    return 0;
}

void test_print_rectangle() {
    cout << "Testing print_rectangle()" << endl;
    print_rectangle(8, 8);
    
}

// TODO
// Implement your other test_functions