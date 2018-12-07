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
