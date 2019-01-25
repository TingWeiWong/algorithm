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

BankAccount::BankAccount(string n){
    name = n;
    balance = 0.0;
}
double BankAccount::getBalance() const {
    return balance;
}
void BankAccount::deposit(double amount){
    balance += amount;
}
void BankAccount::withdraw(double amount){
    if (amount >= 0.0 && balance >= amount){
        balance -= amount;
    }
}

bool operator == (const BankAccount& ba1, const BankAccount& ba2){
    return ba1.getBalance() == ba2.getBalance() && ba1.name == ba2.name;
}
