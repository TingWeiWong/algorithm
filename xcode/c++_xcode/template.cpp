//
//  template.cpp
//  c++_xcode
//
//  Created by Andrew on 2/17/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "template.hpp"
#include <iostream>
using namespace std;

template <typename T>
T maxtemplate(T a, T b){
    if (a < b){ return b; }
    else{ return a; };
}


