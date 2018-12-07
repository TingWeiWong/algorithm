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
void diceRollsHelper(int dice,vector<int>& chosen){
    // If there are choices to make, for each of choice
    if (dice == 0){
        // base case
    }else{
        for (int i = 0; i <= 6; i++){
            cout << chosen[i];
            chosen.insert(chosen.begin()+i, i);
            diceRollsHelper(dice -1 , chosen);
            chosen.erase(chosen.begin()+chosen.size());
        }
    }
    // - choose
    // - search
    // - unsearch
}

void diceRolls(int dice){
    /*
     Print all outcomes of rolling the given number of dices in {#,#,#}
     format.
     */
}
