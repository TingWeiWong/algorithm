//
//  inheritance.cpp
//  c++_xcode
//
//  Created by Andrew on 2/11/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "inheritance.hpp"

double Lawyer::salary() const{
    return 2 * Employee::salary();
}

double Employee::salary() const{
    return Employee::salary();
}

Employee::Employee(string name, int years){
    myName = name;
    myYears = years;
};

Lawyer::Lawyer(string name, int years, string lawSchool)
    :Employee(name,years)
{
        myLawSchool = lawSchool;
};
