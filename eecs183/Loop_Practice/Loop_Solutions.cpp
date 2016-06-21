//
//  Loops_solutions.cpp
//  Discussion Challenge Problems
//
//  Created by Leah Bar-On Simmons on 2/2/15.
//  Copyright (c) 2015 Leah Bar-On Simmons. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    
    
    //print a 3x3 square of stars first using 3 loops
    cout << "Printing 3x3 square of stars using 3 loops..." << endl;
    
    for (int i = 0; i < 3; ++i){
        cout << '*' << ' ';
    }
    cout << endl;
    
    for (int i = 0; i < 3; ++i){
        cout << '*' << ' ';
    }
    cout << endl;
    
    for (int i = 0; i < 3; ++i){
        cout << '*' << ' ';
    }
    cout << endl;
    
    cout << "-----------------------------------------------------" << endl;
    
    
    //now print the same square of stars using nested loops
    cout << "Printing 3x3 square of stars using nested loops..." << endl;
    for (int i = 0; i < 3; ++i){
        for (int k = 0; k < 3; ++k){
            cout << '*' << ' ';
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------" << endl;
    
    
    
    
    //printing only odds from 0 - 100
    
    cout << "Printing only odds from 0 - 100..." << endl;
    
    cout << "with for loop..." << endl;
    //for loop
    for (int i = 0; i <= 100; ++i){
        if (i % 2 != 0){
            cout << i << endl;
        }
    }
    
    cout << "-----------------------------------------------------" << endl;
    
    
    cout << "with while loop..." << endl;
    //while loop
    int i = 0;
    while (i <= 100){
        if (i % 2 != 0){
            cout << i << endl;
        }
        ++i;
    }
    
    cout << endl << endl;
    
    
    //printing only evens from 0 - 100
    
    cout << "Printing only evens from 0 - 100..." << endl;
    
    
    cout << "with for loop..." << endl;
    //for loop
    
    for (int k = 0; k <= 100; ++k){
        if (k % 2 == 0){
            cout << k << endl;
        }
    }
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    //while loop
    
    int k = 0;
    while (k <= 100){
        if (k % 2 == 0){
            cout << k << endl;
        }
        ++k;
    }
    
    cout << endl << endl;
    
    
    //counting to 1000, printing only the numbers divisible by 50
    
    cout << "Counting to 1000, printing only the numbers divisible by 50..."
    << endl;
    
    
    cout << "with for loop..." << endl;
    //for loop
    
    for (int count = 0; count <= 1000; count += 2){
        if (count % 50 == 0){
            cout << count << endl;
        }
    }
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    //while loop
    
    int count = 0;
    while (count <= 1000){
        if (count % 50 == 0){
            cout << count << endl;
        }
        count += 2;
    }
    
    cout << endl << endl;
    
    //printing numbers to 50s by 2, and then finish to 100 by 5s
    
    cout << "printing numbers to 50s by 2, and then finish to 100 by 5s..."
    << endl;
    
    cout << "with for loops..." << endl;
    //for loops
    
    for (int j = 0; j < 50; j += 2){
        cout << j << endl;;
    }
    
    for (int j = 50; j <= 100; j+= 5){
        cout << j << endl;;
    }
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    //while loop
    
    int j = 0;
    
    while (j < 50){
        cout << j << endl;
        j += 2;
    }
    //j stays updated -- because of scope!
    while (j <= 100){
        cout << j << endl;
        j += 5;
    }
    
    cout << endl << endl;
    
    
    //printing each letter of a string
    
    cout << "printing each letter of a string..." << endl;
    
    string my_string = "Hello";
    cout << "my string is: " << my_string << endl;
    
    cout << "with for loop..." << endl;
    //for loop
    
    //condition must be < to not go off end of array -- remember 0 indexing!
    for (int l = 0; l < my_string.size(); ++l){
        cout << my_string[l] << endl;
    }
    
    
    cout << "------------------------------------------------------" << endl;
    
    cout << "with while loop..." << endl;
    //while loop
    
    int l = 0;
    
    while (l < my_string.length()){
        cout << my_string[l] << endl;
        ++l;
    }
    
}