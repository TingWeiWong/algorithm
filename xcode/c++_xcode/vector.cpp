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
    vector <string> names {"Ed","Andy","Jason"};
    for (int i=0;i< names.size();i++){
        cout << names[i] << endl;
    }
}

void print_names2(){
    vector<string> names {"A","B","C"};
    for (string& name:names){
        name += "!";
    }
}

void removeAll(vector<string>& v,string s){
    /*
     Example remove all "b" from {"a","b","c","b","b","a","b"}
     yields {"a","c","a"}
     */

    for (int i=0;i<v.size();i++){
        if (v[i] == s){
            v.erase(v.begin()+i-1);
        }
    }
}
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
    int result = 0;
    
    for (int i = 0; i <= ar.size()-1; i++){
        result = result + (ar[i]);
//        cout << "Result = " << result << endl;
    }
    return result;
}

void miniMaxSum(vector<int> arr){
    long five = 0;
    for (int i = 0; i < arr.size(); i++){
        five += arr[i];
    }
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());
    cout << five - min;
    cout << five - max;
}

vector<int> gradingStudents(vector<int> grades) {
    /*
     * Write your code here.
     */
    for (int i = 0; i < grades.size(); i++){
        if (grades[i] >= 38){
            if ((grades[i] % 10 == 3) || (grades[i] % 10 == 8)){
                grades[i] += 2;
            }else if ((grades[i] % 10 == 4) || (grades[i] % 10 == 9)){
                grades[i] += 1;
            }
        }
    }
    return grades;
}

double getMean(vector<int> arr){
    double result = 0;
    for (int i = 0; i < arr.size(); i++){
        result += arr[i];
    }
    return result/int(arr.size());
}

double getMedian(const vector<int> arr){
    vector<int> copy = arr;
    sort(copy.begin(),copy.end());
    int length = int(copy.size());
    if (length % 2 == 0){
        return double((copy[(length-1)/2]+copy[(length-1)/2+1])/2.0);
    }else{
        return (copy[(length-1)/2]);
    }
}

double getMode(vector<int> arr){
    vector<int> copy = arr;
    sort(copy.begin(), copy.end());
    int result = 0,count = 0; 0;
    int max = 0;
    int current = 0 ;
    for (int i = 0; i < copy.size(); i++){
        if (copy[i] == current){
            count += 1;
        }else{
            current = copy[i];
            count = 1;
        }
        if (count > max){
            max = count;
            result = copy[i];
        }
    }
    return result;
    
}
