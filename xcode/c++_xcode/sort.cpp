//
//  sort.cpp
//  c++_xcode
//
//  Created by Andrew on 2/15/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;



bool isSorted(vector<int>& v){
    for (int i = 0; i < v.size() - 1; i++){
        if (v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

void bogoSort(vector<int>& v){
    while (!isSorted(v)){
        random_shuffle(v.begin(), v.end());
    }
}
