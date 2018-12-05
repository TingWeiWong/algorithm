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

/*
 We cannot modify the elements using iterators because if you modify the element value then internal data structure of std::set will get corrupt and it will not remain balanced binary search tree. Hence further additions and find operations will not work properly.
 */
void addSet(){
    set<string> SetofNumbers;
    SetofNumbers.insert("first");
    SetofNumbers.insert("second");
    SetofNumbers.insert("third");
    SetofNumbers.insert("fourth");
    cout << "The size of set = " << SetofNumbers.size() << endl;
    for (set<string>::iterator it = SetofNumbers.begin(); it != SetofNumbers.end(); it++){
        cout << "Elements of set = " << *it << endl;
    }
}


