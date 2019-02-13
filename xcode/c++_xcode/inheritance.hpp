//
//  inheritance.hpp
//  c++_xcode
//
//  Created by Andrew on 2/11/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#ifndef inheritance_hpp
#define inheritance_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class Employee{
public:
    Employee(string name, int years);
    int hours() const;
    int vacationdays() const;
    virtual double salary() const;
    string name() const;
    string vacationform() const;
    int years() const;
};

class Lawyer : public Employee{
public:
    Lawyer(string name, int years, string lawSchool); 
    virtual double salary() const;
};
#endif /* inheritance_hpp */
