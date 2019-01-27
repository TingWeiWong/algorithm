//
//  array.cpp
//  c++_xcode
//
//  Created by Andrew on 1/27/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "array.hpp"
#include <iostream>
using namespace std;

/*
 Arrays
 
 type name[length];
 statically stored, can never be resized
 memory does not automatically have to be free, will be automatically released
 int homework[7]
 
 type* name = new type[length];
 dynamically stored (heap allocated) array
 The variable that refers to the array is a pointer
 The memory allocated for the array must be released or there will be memory leak
 int* homework = new int[7]
 */

// If we want to initialize to 0, use type* name = new type[length]()

ArrayStack::ArrayStack(){
    size = 0;
    capacity = 10;
    elements = new int[capacity]();
}
ArrayStack::~ArrayStack(){
    delete[] elements;
}

void ArrayStack::push(int n){
    if (size >= capacity){
        // Not able to stack
    }else{
        elements[size] = n;
        size ++;
    }

    
}
int ArrayStack::pop(){
    if (isEmpty()){
        throw "Empty array!";
    }else{
        int result = elements[size-1];
        elements[size-1] = 0;
        size--;
        return result;
    }
}
int ArrayStack::peek(){
    if (isEmpty()){
        throw "Empty array!";
    }
    return elements[size-1];
}
bool ArrayStack::isEmpty(){
    return size == 0;
}
ostream& operator <<(ostream& out, const ArrayStack& stack){
    
}
