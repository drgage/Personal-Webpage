/*
    kryptonite isn't superman's only weakness
    calculate the number of beans in the jar
*/

#include <iostream>
using namespace std;

// My constants
const int OUNCES_PER_POUND = 16;
const int BEANS_PER_OUNCE  = 20;
const int JAR_POUNDS       = 2;

// calculate how many beans are in 1 lb
// ** use of magic numbers in this case would be:
// const int BEANS_PER_POUND = 20 * 16;
// ^^ DO NOT DO! ^^
const int BEANS_PER_POUND  = BEANS_PER_OUNCE * OUNCES_PER_POUND;

int main(void) {
   
    // includes jar weight and weight of beans
    int total_pounds = 0;
    
    // ask user for the weight of the jar (with the beans)
    cout << "Please enter the total weight in pounds: ";
    cin >> total_pounds;
    
    // calculate how much the beans weigh
    int bean_pounds = total_pounds - JAR_POUNDS;
    
    // calculate number of beans (based on weight), and print out
    cout << "Total number of beans: " << bean_pounds * BEANS_PER_POUND;
    
    return 0;
}
