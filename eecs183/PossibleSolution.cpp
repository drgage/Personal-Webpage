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
//   2) One function will call the other inside it
//   3) non-negative is a requirement for both function, so you have to ensure
//      that the program does not reach those function with negative input
//   4) we needed to #include iostream for cout/cin, string for our data types,
//      and cmath for the sqrt function, and floor function, that both exist
//      in the <cmath> library. You you will want to take advantage of these!
//------------------------------------------------------------------------------



//REQUIRES: non-negative input of type double
//MODIFIES: cout
//EFFECTS: prints the integer square root of num_in, or closest integer
void square_root(double num_in); //function declarations

//REQUIRES: non-negative input of type double
//MODIFIES: nothing
//EFFECTS: returns whether sqrt_num needs to be rounded up (true)
//         or rounded down (false)
bool round_up(double sqrt_num);





//------------------------------------------------------------------------------



//
int main() {
    
    //initialize num
    double num = 0.0;
    
    cout << "Let's find some square roots!" << endl;
    
    cout << "What number do you choose? " << endl;
    
    cin >> num;
    cout << endl;
    
    //check num is non-negative
    if (num < 0){
        cout << "Please enter a non-negative input!\n";
        cin >> num;
        
        if (num < 0){
            cout << "You don't understand the meaning of non-negative." << endl;
            //ends the program
            return 0;
        }
    }
    
    //call function
    square_root(num);
    
    
    //end the program
    return 0;
    
}

//------------------------------------------------------------------------------


void square_root(double num_in){
    double sqrt_num = sqrt(num_in);
    if (sqrt_num == (int)sqrt_num){
        cout << "The square root of " << num_in << " is: " << sqrt_num;
    }
    else{
        int rounded_num = 0;
        //if we should round up (round_up was true)
        if (round_up(sqrt_num)){
            rounded_num = ceil(sqrt_num);
            cout << "There is no whole number square root of " << num_in;
            cout << endl;
            cout << "The nearest integer to √" << num_in << " is: " << rounded_num;
        }
        //we should round down (round_up was false)
        else{
            rounded_num = floor(sqrt_num);
            cout << "There is no whole number square root of " << num_in;
            cout << endl << endl;
            cout << "The nearest integer to √" << num_in << " is: " << rounded_num;
        }
    }
}


//------------------------------------------------------------------------------


bool round_up(double sqrt_num){
    bool round_up = false;
    if (sqrt_num > (floor(sqrt_num) + 0.5)){
        round_up = true;
    }
    return round_up;
}
