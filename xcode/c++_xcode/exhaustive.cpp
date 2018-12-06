//
//  exhaustive.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/6/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "exhaustive.hpp"
#include <iostream>
#include <string>
using namespace std;
/*
 printBinary(int n) recursive function that prints all binary numers that have exactly n digits
 printBinary(2) --> 00 01 10 11 in ascending order
 */
void printBinary(int digits){
    if (digits == 0){
        // do nothing
    }else if (digits == 1 ){
        cout << 0 << endl;
        cout << 1 << endl;
    }else{
        // recursive case
    }
}

