//
//  Person.cpp
//  StayinBlue
//
//  Created by Diana Gage on 11/4/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#include <string>
#include <iostream>
#include "Person.h"
#include "Drink.h"
using namespace std;

// constructors
Person::Person() {
    name = "";
    gender = "";
    
    // other variables (weight, etc.) already initialized to 0 in "Drink.h"
}

Person::Person(string name_in, string gender_in, double weight_in) {
    
    name = name_in;
    gender = gender_in;
    weight = weight_in;
}

// getters & setters
string Person::get_name() const {
    return name;
}

string Person::get_gender() const {
    return gender;
}

double Person::get_weight() const {
    return weight;
}

int Person::get_num_drinks() const {
    return num_drinks;
}

double Person::get_BAC() const {
    return BAC;
}

int Person::get_minutes_drinking() const {
    return minutes_drinking;
}

void Person::set_name(string name_in) {
    name = name_in;
}

void Person::set_gender(string gender_in) {
    gender = gender_in;
}

void Person::set_weight(double weight_in) {
    weight = weight_in;
}

// member functions
void Person::print_summary() const {
    cout << name << " is a " << gender << " weighing " << weight << " pounds."
    << endl;
    
    cout << name << " has had " << num_drinks << " drinks over "
    << minutes_drinking << " minutes." << endl;
    
    cout << "The most recent drink " << name << " had was a "
    << drinks[num_drinks - 1].get_name() << "." << endl;
    
    cout << name << " has a BAC of " << BAC << ", so " << name;
    
    if (in_blue()) {
        cout << " is ";
    }
    
    else {
        cout << " is not ";
    }
    
    cout << "in the blue." << endl;
}


void Person::take_drink(const Drink& drink_in) {
    
    // add drink to drinks array if alcoholic, incremement # of drinks
    if (drink_in.get_alcoholic()) {
        drinks[num_drinks] = drink_in;
        ++num_drinks;
        
        // add # mins it takes to drink alcoholic beverage to total mins
        // spent drinking
        minutes_drinking += drink_in.get_minutes();
    }
}

double Person::adjust_BAC() {
    
    // for the context of this problem, only using male and female genders for
    // calculations... Stay in the Blue app tells trans inviduals to use
    // gender at birth
    
    if (weight >= MIN_WEIGHT && weight < 120) {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][0];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][0];
        }
    }
    
    else if (weight < 140) {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][1];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][1];
        }
    }
    
    else if (weight < 160) {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][2];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][2];
        }
    }
    
    else if (weight < 180) {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][3];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][3];
        }
    }
    
    else if (weight < 200) {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][4];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][4];
        }
    }
    
    else {
        if (gender == "male") {
            BAC = BAC_TABLE_MALE[num_drinks][MAX_NUM_DRINKS];
        }
        else {
            BAC = BAC_TABLE_FEMALE[num_drinks][MAX_NUM_DRINKS];
        }
    }
    
    // subtract .01 for each 40 mins of drinking (multiples of 40)
    if (minutes_drinking % 40 == 0 && minutes_drinking > 0) {
        BAC -= .01;
    }
    
    return BAC;
}


bool Person::in_blue() const {
    if (BAC <= .06) {
        return true;
    }
    return false;
}
