//
//  main.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include <iostream>
#include <string>
#include "recursions.hpp"
#include <vector>
using namespace std;
int main() {
    void print_names();
    int lcs_recursive(char *x, char *y, int m,int n);
    bool is_palindrome(string s);
    int fib_recursive(int n);
    cout << lcs_recursive("ABCDEFG", "ADKBDUCKDE", 7, 10) <<endl;
    cout << "Return 1 if true and 0 otherwise --> " << is_palindrome("AwegCA") << endl;
    cout << "Fibonacci recursive = " << fib_recursive(10) <<endl;
    print_names();
}
