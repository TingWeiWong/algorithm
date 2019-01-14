//
//  class.cpp
//  c++_xcode
//
//  Created by Andrew on 1/13/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "class.hpp"
#include <iostream>
#include<string>
using namespace std;

void BankAccount::deposit(double amount){
    balance += amount;
}
void BankAccount::withdraw(double amount){
    balance -= amount;
}
