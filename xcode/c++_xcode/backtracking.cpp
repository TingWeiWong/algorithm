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


void isSafe(int column, int row){
    
}


int** createBoard(int row, int column){
    int** result = new int*[row];
    for(int i = 0; i < row; i++){
        result[i] = new int[column];
    }
//    for (int j = 0; j < row; j++){
//        for (int k = 0; k < column; k++){
//            result[j][k] = 3;
//        }
//    }
    result[0][0] = 10;
    result[0][1] = 2;
    result[1][0] = 1;
    result[1][1] = 0;
    return result;
}


