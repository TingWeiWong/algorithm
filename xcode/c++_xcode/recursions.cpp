//
//  recursions.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/26/18.
//  Copyright © 2018 Andrew . All rights reserved.
//
#include <iostream>
#include "recursions.hpp"
using namespace std;
/*
 Example  :
 input =
 A
 B
 C
 D
 output =
 D
 C
 B
 A
*/
int lcs_recursive(char *x, char *y, int m, int n){
    if (m==0 or n==0){
        return 0;
    }
    else if (x[m] == y[n]){
        return (lcs_recursive(x, y, m-1, n-1)+1);
    }
    else{
        return max(lcs_recursive(x, y, m, n-1),lcs_recursive(x, y, m-1,     n));
    }
}

bool is_palindrome(string s){
    if (s.length() <= 1){
        // base case
        return true;
    }
    else{
        char first = s[0];
        char last = s[s.length()-1];
        if (first == last){
            string middle = s.substr(1,s.length()-2);
            return is_palindrome(middle);
        }
        else{
            return false;
        }
        
    }
}

int fib_recursive(int n){
    if (n ==0 or n ==1){
        return n;
    }
    else{
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
