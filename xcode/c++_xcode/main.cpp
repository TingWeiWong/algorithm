//
//  main.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int checkBalance(string s);
    void print_names();
    void print_names2();
    void removeAll();
    void mirror(queue<string>& queue);
    int lcs_recursive(char *x, char *y, int m,int n);
    bool is_palindrome(string s);
    int fib_recursive(int n);
    queue<string> a;
    a = {1,2,3};
    cout << lcs_recursive("ABCDEFG", "ADKBDUCKDE", 7, 10) <<endl;
    cout << "Return 1 if true and 0 otherwise --> " << is_palindrome("AwegCA") << endl;
    cout << "Fibonacci recursive = " << fib_recursive(10) <<endl;
    print_names();
    print_names2();
    cout << "The string passed is balanced if returning -1 but  " <<checkBalance("(1+2") << endl;
    cout << "Queue Mirror = " << &a;
}
