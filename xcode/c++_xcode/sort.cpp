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

//void insertionSort(vector<int>& v){
//    for (int i = 1; i < v.size(); i++){
//        int temp = v[i];
//        int j = i;
//        while (j >= 1 && v[j-1] > temp) {
//            v[j] = v[j-1];
//            j--;
//        }
//        v[j] = temp;
//    }
//}

void insertionSort(vector<int>& v){
    for (int i = 1; i < v.size(); i++){
        int key = v[i];
        int j = i ;
        while (j >= 1 && key < v[j-1]) {
            v[j] = v[j-1];
            j -= 1;
        }
        v[j] = key;
    }

}

void mergeSort(vector<int>& v){
    if (v.size() >= 2){
        vector<int> left (v.begin(), v.begin() + v.size()/2);
        vector<int> right (v.begin() + v.size()/2, v.end());
        mergeSort(left);
        mergeSort(right);
    }
}

//void mergeSort(vector<int>& v){
//    if (v.size() >= 2){
//        // Split into 2 parts
//        vector<int> left (v.begin(),v.begin() + v.size()/2);
//        vector<int> right (v.begin() + v.size()/2, v.end());
//        // Sort left and right
//        mergeSort(left);
//        mergeSort(right);
//        // Merge halves
//        int i1 = 0;
//        int i2 = 0;
//        for (int i = 0; i < v.size(); i++){
//            if (i2 >= right.size() || (i1 < left.size() && left[i1] < right[i2])){
//                v[i] = left[i1++];
//            }else{
//                v[i] = right[i2++];
//            }
//        }
//    }
//}

void splitHalf(vector<int>& v){
    vector<int> left (v.begin(),v.begin() + v.size()/2);
    vector<int> right (v.begin() + v.size()/2, v.end());
    for (auto i = left.begin(); i != left.end(); ++i){
        cout << *i << "th element of left = " << *i << endl ;
    }
    for (auto j = right.begin(); j != right.end(); ++j){
        cout << *j << "th element of right = " << *j << endl ;
    }
}
