//
//  recursions.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/26/18.
//  Copyright © 2018 Andrew . All rights reserved.
//
#include <iostream>
#include <vector>
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

int lis_recursive(vector<int> l){
    return 0;
}

bool is_palindrome(string s){
    if (s.length() <= 1){
        // base case
        return true;
    }
    else{
        // recursive case for palindromes 
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

int evaluate(const string& exp){
    /* Example
     "7" --> 7
     "1+1" --> 2
     "1+(2*4)" --> 9
     */
    int evaluate_helper(const string& exp,int& index);
    int index = 0;
    
    
    return evaluate_helper(exp, index);
}
int evaluate_helper(const string& exp,int& index){
    cout << "Eval helper exp = " << exp << "Index = " << index <<endl ;
    if (isdigit(exp[index])){
        // base case
        return  exp[index++] - '0';

    }else{
        index++; //skip
        // operand
        int left = evaluate_helper(exp, index);
        // operator
        char op = exp[index++];
        //operand
        int right = evaluate_helper(exp, index);
        index ++ ; //skip parant.
        
        if (op =='+'){
            return left+right;
        }
        else {
            return left*right;
        }
        
    }
    return 0;
}
