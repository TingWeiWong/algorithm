//
//  array.hpp
//  c++_xcode
//
//  Created by Andrew on 1/27/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#ifndef array_hpp
#define array_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class ArrayStack {
public:
    ArrayStack();
    ~ArrayStack();
    
    void push();
    int pop();
    int peek();
    bool isEmpty();
    friend ostream& operator <<(ostream& out, const ArrayStack& stack);
private:
    
};

ostream& operator <<(ostream& out, const ArrayStack& stack);
#endif /* array_hpp */
