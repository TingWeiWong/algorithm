//
//  fstream.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/20/18.
//  Copyright © 2018 Andrew . All rights reserved.
//
#include <stdio.h>
#include <fstream>
#include<iostream>
using namespace std;
void test(){
ifstream input;
input.open("poem.txt");
string line;
    while(getline(input,line)){
        cout << line << endl;
    }
    input.close();

}
