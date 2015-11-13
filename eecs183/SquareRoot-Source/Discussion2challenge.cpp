//
//  main.cpp
//  Discussion Challenge Problems
//
//  Created by Leah Bar-On Simmons on 1/19/15.
//  Copyright (c) 2015 Leah Bar-On Simmons. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Discussion Project:
//OUR TASK:
//          create a program that asks for a number, and prints the square root
//          of this number if its square root is a whole number/integer
//          otherwise, tells the user it will round the result, and then
//          prints this 'nearest' integer
//                      (rounded up or down, according to value)
//Notes:
//   1) we will assume .5 and lower round down, and anything above .5 rounds up
//   2) One function should call the other inside it!
//   3) non-negative is a requirement for both functions, so you have to ensure
//      that the program does not reach those functions with negative input
//   4) we needed to #include iostream for cout/cin, string for our data types,
//      and cmath for the sqrt function, and ceil/floor functions, that exist
//      in the <cmath> library. You you will want to take advantage of these!
//------------------------------------------------------------------------------


//FUNCTION DECLARATIONS

//REQUIRES: non-negative input of an integer or double type
//MODIFIES: cout
//EFFECTS: prints the integer square root of num_in,
//          or closest integer as per instructions
void square_root(double num_in); //function declarations

//REQUIRES: non-negative input of type double
//MODIFIES: nothing
//EFFECTS: returns whether sqrt_num needs to be rounded up (true)
//         or rounded down (false)
bool round_up(double sqrt_num);




//------------------------------------------------------------------------------


int main() {
    
    //initialize num
    
    
    //print instructions to user and get input

    //any input validity checks?? ** see notes above **
    
    //call function

    
    
    //end the program

    
}

//------------------------------------------------------------------------------


//IMPLEMENT FUNCTIONS HERE











