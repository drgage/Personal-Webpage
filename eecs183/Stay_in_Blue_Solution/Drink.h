//
//  Drink.h
//  StayinBlue
//
//  Created by Diana Gage on 11/4/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#ifndef __StayinBlue__Drink__
#define __StayinBlue__Drink__

#include <stdio.h>
#include <string>
using namespace std;

class Drink {
    
public:
    // constructors
    
    /**
     * Requires: nothing
     * Modifies: name, alcoholic, minutes
     * Effects : Default Drink constructor.  name is set to be an empty string.
     *           alcoholic is set to false, and minutes is set to 0.
     */
    Drink();
    
    /**
     * Requires: name of the Drink
     * Modifies: name, alcoholic, minutes
     * Effects : Drink constructor for when only a drink name, alcoholic truth 
     *           value, and number of minutes to consume the drink are given.
     */
    Drink(string name_in, bool alcoholic_in, int minutes_in);
    
    // getters & setters
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the name of this Drink instance.
     */
    string get_name() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the truth value of whether or not this Drink instance
     *           is alcoholic.
     */
    bool get_alcoholic() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects : Returns the number of minutes it takes to consume this Drink.
     */
    int get_minutes() const;
    
    /**
     * Requires: nothing
     * Modifies: name
     * Effects : Sets this Drink instance's name.
     */
    void set_name(string name_in);
    
    /**
     * Requires: nothing
     * Modifies: alcoholic
     * Effects : Sets this Drink instance's alcoholic truth value to T/F.
     */
    void set_alcoholic(bool alcoholic_in);
    
    /**
     * Requires: nothing
     * Modifies: minutes
     * Effects : Sets this Drink instance's number of minutes for consumption.
     */
    void set_minutes(int minutes_in);
    
private:
    string name;
    bool alcoholic;
    
    // time (in minutes) it takes to consume this drink
    int minutes;
};

#endif
