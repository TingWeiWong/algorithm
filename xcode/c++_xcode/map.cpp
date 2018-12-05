//
//  map.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/5/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "map.hpp"
#include <map>
#include <iostream>
#include <string>
using namespace std;

void phoneBook(){
    map<string, int> phoneBook;
    phoneBook.insert(pair<string,int>("Andrew",123));
    phoneBook.insert(pair<string,int>("Jenny",456));
    phoneBook.insert(pair<string,int>("Wayne",789));
    for (auto const& [key,value] : phoneBook){
        cout << key << "'s number is " << value << endl;
    }
}
