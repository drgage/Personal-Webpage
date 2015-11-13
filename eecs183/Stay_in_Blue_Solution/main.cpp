//
//  main.cpp
//  StayinBlue
//
//  Created by Diana Gage on 11/4/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#include <iostream>
#include <string>
#include "Drink.h"
#include "Person.h"
using namespace std;

int main() {
    
    // Create two instances of Person class, and 3 instances of Drink class
    // Use a default constructor at least once to practice:
    
    Person Alice;
    Alice.set_name("Alice");
    Alice.set_gender("female");
    Alice.set_weight(120);
    
    Person Bob("Bob", "male", 200);
    
    Drink Beer("can of beer", true, 10);
    Drink Wine("glass of wine", true, 20);
    Drink Vodka("shot of vodka", true, 1);
    
    // Declare and initialize variables to represent each instance's BAC:
    
    double A_BAC = Alice.get_BAC();
    double B_BAC = Bob.get_BAC();
    
    // Have your instances take any number of drinks, and adjust their BACs
    // accordingly
    
    Alice.take_drink(Vodka);
    A_BAC = Alice.adjust_BAC();
    
    Alice.take_drink(Wine);
    A_BAC = Alice.adjust_BAC();
    
    for (int i = 0; i < 3; ++i) {
        Bob.take_drink(Beer);
        B_BAC = Bob.adjust_BAC();
    }
    
    // Print the summary for each instance.
    // To make sure you got the right answer, check results with the chart
    // online!
    //
    // For example: if you created a Person instance that is female and weighs
    //              120 lbs, and had the instance take two drinks, check that
    //              the instance's summary gives the correct BAC (0.08)
    
    Alice.print_summary();
    cout << endl;
    Bob.print_summary();
}
