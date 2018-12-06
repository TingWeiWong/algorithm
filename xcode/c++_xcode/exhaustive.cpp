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
void printBinary(int digits, string prefix){
    if (digits == 0){
        // do nothing
        cout << prefix << endl ;
    }else{
        // recursive case digits >= 2
        printBinary(digits-1, prefix + "0");
        printBinary(digits-1, prefix + "1");
    }
}

void printDecimal(int digits, string prefix){
    if (digits == 0){
        cout << prefix << endl ;
    }else{
        for (int i = 0; i <= 9; i++){
            printDecimal(digits-1, to_string(i) + prefix);
        }
    }
}

void permute(string s, string prefix){
    /*
     print all possible rearrangements in the string
     */
    if (s.length() == 0){
        // base case
        cout << prefix << endl;
        
    }else{
        for (int i = 0; i < s.length(); i++){
            char ch = s[i];
            string s2 = s.substr(0,i)+s.substr(i+1);
            permute(s2,prefix+ch);
        }
    }
    
    
}
