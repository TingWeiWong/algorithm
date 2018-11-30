//
//  vector.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/30/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "vector.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print_names(){
    int a = 3;
    vector <string> names {"Ed","Andy","Jason"};
    for (int i=0;i< names.size();i++){
        cout << names[i] << endl;
    }
}
