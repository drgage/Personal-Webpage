//
//  Person.h
//  StayinBlue
//
//  Created by Diana Gage on 11/4/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#ifndef __StayinBlue__Person__
#define __StayinBlue__Person__

#include <stdio.h>
#include <string>
#include "Drink.h"
using namespace std;

const int MAX_NUM_DRINKS = 5;

// INFORMATION BELOW FROM CHART ON http://www.brad21.org/bac_charts.html

const double MAX_WEIGHT   = 200;
const double MIN_WEIGHT   = 100;

// 6's are MAX_NUM_DRINKS + 1 (including row with all the 0's)
// ROWS = number of drinks: 0, 1, 2, 3, 4, 5
// COLS = weight in pounds: [100, 120), [120, 140), [140, 160), and so on
//                          until [200, 200)
const double BAC_TABLE_MALE[6][6] = {{.00, .00, .00, .00, .00, .00},
                                     {.04, .03, .03, .02, .02, .02},
                                     {.08, .06, .05, .05, .04, .04},
                                     {.11, .09, .08, .07, .06, .06},
                                     {.15, .12, .11, .09, .08, .08},
                                     {.19, .16, .13, .12, .11, .09}};


const double BAC_TABLE_FEMALE[6][6] = {{.00, .00, .00, .00, .00, .00},
                                       {.05, .04, .03, .03, .03, .02},
                                       {.09, .08, .07, .06, .05, .05},
                                       {.14, .11, .10, .09, .08, .07},
                                       {.18, .15, .13, .11, .10, .09},
                                       {.23, .19, .16, .14, .13, .11}};

class Person {
    
public:
    // constructors
    
    /**
     * Requires: nothing
     * Modifies: name, gender
     * Effects : Default Person constructor.  name and gender are set to be
     *           empty strings. Note that the other member variables (weight,
     *           num_drinks, etc.) are all already initialized to 0.
     */
    Person();
    
    /**
     * Requires: name of the Person
     * Modifies: name, gender, weight
     * Effects : Person constructor for when only a Person name, gender,
     *           and weight in pounds are given.
     */
    Person(string name_in, string gender_in, double weight_in);
    
    // getters & (some) setters
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the name of this Person instance.
     */
    string get_name() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the gender of this Person instance.
     */
    string get_gender() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the weight of this Person instance.
     */
    double get_weight() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the number of drinks this Person instance has had.
     */
    int get_num_drinks() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the BAC of this Person instance.
     */
    double get_BAC() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the number of minutes this Person instance has spent
     *           drinking.
     */
    int get_minutes_drinking() const;
    
    
    /**
     * Requires: nothing
     * Modifies: name
     * Effects : Sets this Person instance's name.
     */
    void set_name(string name_in);
    
    /**
     * Requires: nothing
     * Modifies: name
     * Effects : Sets this Person instance's gender.
     */
    void set_gender(string gender_in);
    
    /**
     * Requires: nothing
     * Modifies: name
     * Effects : Sets this Person instance's weight.
     */
    void set_weight(double weight_in);
    
    
    // member functions
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns a string, suitable for printing, that contains: this
     *           Person instance's name, gender, the number of drinks he/she
     *           has consumed, the amount of time (mins) he/she has been 
     *           drinking, the most recent drink he/she had, his/her BAC,
     *           and FINALLY whether or not this Person instance is in the blue.
     */
    void print_summary() const;
    
    /**
     * Requires: nothing
     * Modifies: num_drinks, drinks[], minutes_drinking
     * Effects : If the Drink passed in is alcoholic, this function adds
     *           the Drink to the Person's drinks array, and increments the
     *           the number of drinks the Person has had by 1. Additionally, 
     *           the number of minutes the Person has been drinking is updated
     *           with the number of minutes it took to consume this Drink.
     */
    void take_drink(const Drink& drink_in);
    
    /**
     * Requires: nothing
     * Modifies: BAC
     * Effects : Adjust the Person's BAC depending on their gender and weight.
     *           Subtract .01 from BAC for each 40 minutes of drinking.
     *
     *           HINT: use the provided 2D arrays BAC_TABLE_MALE[6][6] and
     *                 BAC_TABLE_FEMALE[6][6] to find BAC for each weight
     *                 and number of drinks combination.
     *           
     *           NOTE: for the context of this problem, only using male and
     *                 female genders for calculations. Stay in the Blue app
     *                 tells trans inviduals to use gender assigned at birth.
     */
    double adjust_BAC();
    
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Determines if the Person is "in the blue" (has a BAC of less 
     *           than or equal to .06), and returns true or false accordingly.
     */
    bool in_blue() const;
    
    
private:
    string name;
    string gender;
    double weight = 0.0;
    int num_drinks = 0;
    double BAC = 0.0;
    
    // array of Drink objects
    Drink drinks[MAX_NUM_DRINKS];
    
    // amount of time spent drinking (depends on which drinks he/she has had)
    int minutes_drinking = 0;
};



#endif
