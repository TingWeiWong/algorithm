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
