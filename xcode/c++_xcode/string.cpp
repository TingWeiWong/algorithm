//
//  string.cpp
//  c++_xcode
//
//  Created by Andrew on 12/28/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "string.hpp"
#include <iostream>
#include <string>
using namespace std;
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    if (s[-2] == 'P'){
        s[0] = 'a';
    }
    cout << "The second last char = " << s[-5] << endl;
    return s;
    
}
