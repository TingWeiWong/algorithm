//
//  STL.cpp
//  c++_xcode
//
//  Created by Andrew  on 2/18/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "STL.hpp"
#include <iostream>
#include <vector>
using namespace std;

void loopElements(vector<int>& v){
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
}

void shortLoop(vector<int>& v){
    for (int k : v){
        cout << k << endl;
    }
}
