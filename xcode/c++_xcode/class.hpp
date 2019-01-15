//
//  class.hpp
//  c++_xcode
//
//  Created by Andrew on 1/13/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#ifndef class_hpp
#define class_hpp
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class BankAccount{
private:
    int id;
    string name;
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);
    BankAccount(string n);
};
#endif /* class_hpp */
