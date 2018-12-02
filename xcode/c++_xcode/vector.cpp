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
<<<<<<< HEAD
     */
    for (int i = v.size()-1; i >= 0;i--){
        if (v[i] == s){
            v.erase(v[i]);
=======
     */    
    for (int i=0;i<v.size();i++){
        if (v[i] == s){
            v.erase(v.begin()+i-1);
>>>>>>> 8d81b4133f35e91f605b1b5fd65db618d3ace5d2
        }
    }
}

