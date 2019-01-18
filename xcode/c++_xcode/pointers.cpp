//
//  pointers.cpp
//  c++_xcode
//
//  Created by Andrew  on 1/18/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "pointers.hpp"
#include <iostream>
#include <string>
using namespace std;
struct Date{
    int month;
    int date;
    int daysInMonth(){
        if (month == 4 || month == 6 || month == 9 || month == 11){
            return 30;
        }else if (month == 2){
            return 28;
        }else{
            return 31;
        }
    }
    string toString(){
        return to_string(month) + "/" + to_string(date);
    }
};
