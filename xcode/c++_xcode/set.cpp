//
//  set.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/5/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "set.hpp"
#include <set>
#include <iostream>
#include <string>
using namespace std;

void addSet(){
    set<string> hi;
    hi.insert("s");
    hi.insert("a");
    cout << "The set contains " << &hi;
}
