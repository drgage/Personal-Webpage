//
//  Loops.cpp
//  Discussion Challenge Problems
//
//  Created by Leah Bar-On Simmons on 2/2/15.
//  Copyright (c) 2015 Leah Bar-On Simmons. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    
    //printing only odds from 0 - 100
    
    cout << "Printing only odds from 0 - 100..." << endl;
    
    cout << "with for loop..." << endl;
    
    //your for loop here
    
    for (int i = 0; i <= 100; ++i) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
    
    
    cout << "-----------------------------------------------------" << endl;
    
    
    cout << "with while loop..." << endl;
    
    
    //your while loop here
    
    int k = 0;
    while (k <= 100) {
        if (k % 2 == 1) {
            cout << k << " ";
        }
        ++k;
    }
    
    
    cout << endl << endl;
    
    
    
    
    
    //printing only evens from 0 - 100
    
    cout << "Printing only evens from 0 - 100..." << endl;
    
    
    cout << "with for loop..." << endl;
    
    //your for loop here
    
    for (int i = 0; i <= 100; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    
    //your while loop here
    
    int m = 0;
    while (m <= 100) {
        if (m % 2 == 0) {
            cout << m << " ";
        }
        ++m;
    }
    
    cout << endl << endl;
    
    
    
    
    
    
    //counting to 1000, printing only the numbers divisible by 50
    
    cout << "Counting to 1000, printing only the numbers divisible by 50..."
    << endl;
    
    
    cout << "with for loop..." << endl;
    
    //your for loop here
    
    for (int i = 0; i <= 1000; ++i) {
        if (i % 50 == 0) {
            cout << i << " ";
        }
    }
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    
    //your while loop here
    
    int j = 0;
    while (j < 1001) {
        if (j % 50 == 0) {
            cout << j << " ";
        }
        ++j;
    }
    
    cout << endl << endl;
    
    
    
    
    //printing numbers to 50 by 2s, and then finish to 100 by 5s (want 2, 4, 6
    // 8, 10... 50, 55, 60... 100)
    
    cout << "printing numbers to 50 by 2s, and then finish to 100 by 5s..."
    << endl;
    
    cout << "with for loops..." << endl;
    
    //your for loops here
    
    for (int i = 1; i < 51; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    
    for (int j = 51; j < 101; ++j) {
        if (j % 5 == 0) {
            cout << j << " ";
        }
    }
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loops..." << endl;
    
    //your while loops here
    
    int start = 1;
    int middle = 51;
    int end = 100;
    
    while (start < middle) {
        if (start % 2 == 0) {
            cout << start << " ";
        }
        ++start;
    }
    
    while (middle <= end) {
        if (middle % 5 == 0) {
            cout << middle << " ";
        }
        ++middle;
    }
    
    
    cout << endl << endl;
    
    
    
    
    
    //printing each letter of a string
    
    cout << "printing each letter of a string..." << endl;
    
    string my_string = "Hello";
    cout << "my string is: " << my_string << endl;
    
    cout << "with for loop..." << endl;
    
    //your for loop here
    
    for (int i = 0; i < my_string.length(); ++i) {
        cout << my_string[i] << " ";
    }
    
    cout << "------------------------------------------------------" << endl;
    
    
    cout << "with while loop..." << endl;
    
    //your while loop here
    
    int index = 0;
    
    while (index < my_string.length()) {
        cout << my_string[index] << " ";
        ++index;
    }

