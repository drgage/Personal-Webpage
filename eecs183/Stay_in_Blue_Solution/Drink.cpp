//
//  Drink.cpp
//  StayinBlue
//
//  Created by Diana Gage on 11/4/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#include "Drink.h"
#include <string>

using namespace std;

Drink::Drink() {
    name = "";
    alcoholic = false;
    minutes = 0;
}

Drink::Drink(string name_in, bool alcoholic_in, int minutes_in) {
    name = name_in;
    alcoholic = alcoholic_in;
    minutes = minutes_in;
}

// getters & setters
string Drink::get_name() const {
    return name;
}

bool Drink::get_alcoholic() const {
    return alcoholic;
}

int Drink::get_minutes() const {
    return minutes;
}

void Drink::set_name(string name_in) {
    name = name_in;
}

void Drink::set_alcoholic(bool alcoholic_in) {
    alcoholic = alcoholic_in;
}

void Drink::set_minutes(int minutes_in) {
    minutes = minutes_in;
}

