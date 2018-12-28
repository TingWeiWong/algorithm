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
    char secondlast;
    string firsttwo;
    secondlast = s[s.size()-2];
    firsttwo = s.substr(0,2);
    int adding = stoi(firsttwo)+12;
    firsttwo = to_string(adding);
    if (secondlast == 'P'){
        s = firsttwo + s.substr(2,s.size()-4);
    }else{
        s = s.substr(0,s.size()-2);
    }
    cout << "The second last char = " << secondlast << endl;
    cout << "The first two chars = " << adding << endl;
    return s;
    
}
