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

void makeArrays(){
    int x = 42;
    int y = 61;
    int a1[3];
    int* a2 = new int[3]; // a2 is a pointer to a new heap of length 3
}

// If we want to initialize to 0, use type* name = new type[length]()

