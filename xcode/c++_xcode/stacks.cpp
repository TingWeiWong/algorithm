//
//  stacks.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/3/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "stacks.hpp"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int checkBalance(string code){
    /*
     return -1 if all parentheses are closed ( ) { }
     return length of the string if not
     */
    stack<char> parens;
    for (int i = 0; i < code.length(); i++){
        if (code[i] == '(' || code[i] == '{'){
            parens.push(code[i]);
        }else if (code[i] == ')' || code[i] == '}'){
            if (parens.empty()){
                return i;
            }
            char top = parens.pop();
            if (top != '}'){
                return i;
        }
    }
    return -1;
}
}
