//
//  backtracking.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/7/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "backtracking.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
void diceRollsHelper(int dice,string& chosen){
    // If there are choices to make, for each of choice
    if (dice == 0){
        // base case
        cout << chosen << endl;
        }
    else{
        for (int i = 0; i <= 6; i++){
            chosen += to_string(i);
            diceRollsHelper(dice - 1, chosen);
            chosen = chosen.substr(0,chosen.size()-1);
        }
    }
}

void diceRolls(int dice){
    /*
     Print all outcomes of rolling the given number of dices in {#,#,#}
     format.
     */
    string s;
    diceRollsHelper(dice, s);
}
/*
 Don't do impossible searches
 */


void diceSumHelper(int dice, int desiredSum, string& chosen){
    int sumAll(string s);
    if (dice == 0){
        if (sumAll(chosen) == desiredSum){
            cout << chosen << endl;
        }
    }
    else{
        for (int i = 0; i <= 6; i++){
            chosen += to_string(i);
            diceSumHelper(dice - 1, desiredSum, chosen);
            chosen = chosen.substr(0,chosen.size()-1);
        }
    }

}

int sumAll(string s){
    int result = 0;
    for (char k : s){
        result += atoi(&k);
    }
    return result;
}

void diceSum(int dice, int desiredSum){
    string s = "";
    diceSumHelper(dice, desiredSum, s);
}


const int N = 5;
int position[N];

// Check if a position is safe
bool isSafe(int queen_number, int row_position)
{
    // Check each queen before this one
    for (int i = 0; i < queen_number; i++)
    {
        // Get another queen's row_position
        int other_row_pos = position[i];
        
        // Now check if they're in the same row or diagonals
        if (other_row_pos == row_position || // Same row
            other_row_pos == row_position - (queen_number - i) || // Same diagonal
            other_row_pos == row_position + (queen_number - i))   // Same diagonal
            return false;
    }
    return true;
}

// Recursively generate a tuple like [0 0 0 0], then [0 0 0 1] then etc...
void solveQueen(int k)
{
    if (k == N) // We placed N-1 queens (0 included), problem solved!
    {
        // Solution found!
        cout << "Solution: ";
        for (int i = 0; i < N; i++)
            cout << position[i] << " ";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < N; i++) // Generate ALL combinations
        {
            // Before putting a queen (the k-th queen) into a row, test it for safeness
            if (isSafe(k, i))
            {
                position[k] = i;
                // Place another queen
                solveQueen(k + 1);
            }
        }
    }
}
