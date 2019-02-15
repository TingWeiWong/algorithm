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

void selectionSort(vector<int>& v){
    for (int i = 0; i < v.size() - 1; i++){
        int min = i;
        for (int j = i + 1; j < v.size(); j++){
            if (v[j] < v[min]){
                min = j;
            }
        }
        if (i != min){
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }
}
