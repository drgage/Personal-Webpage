//
//  origin.cpp
//  Discussion 7
//
//  Created by Diana Gage on 10/30/15.
//  Copyright (c) 2015 Diana Gage. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    const int MAX_HEIGHT = 6;
    const int MAX_WIDTH = 6;
    
    // initialize 2D array directly
    int board[MAX_HEIGHT][MAX_WIDTH] = {
        {1, 2, 3, 4},
        {5, 4, 9, 16},
        {9, 8, 27, 64},
        {10, 16, 81, 256}
    };
    
    for (int row = MAX_HEIGHT - 1; row >= 0; --row) {
        for (int col = 0; col < MAX_WIDTH; ++col) {
            cout << board[row][col] << ' ';
        }
        cout << endl;
    }
    
    cout << endl << "board at (0, 0): " << board[0][0] << endl;
}

