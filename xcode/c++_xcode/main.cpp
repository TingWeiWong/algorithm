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
#include <stack>
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
    int lcs_dynamic(string x,string y);
    int lis_dynamic(vector<int> l);
    int disc1(int n);
    int disc2(int n);
    double disc3(double n);
    double disc4(double n);
    void addSet();
    void phoneBook();
    void printBinary(int digits, string prefix = "");
    void printDecimal(int digits, string prefix = "");
    void permute(string s, string prefix);
    void diceRolls(int dice);
    int sumAll(string s);
    void diceSum(int dice, int desiredSum);
    int simpleArraySum(vector<int> ar);
    void staircase(int n);
    void staircase_forloop(int n);
    string timeConversion(string s);
    vector<int> gradingStudents(vector<int> grades);
    double getmedian(const vector<int> &arr);
    double getmean( vector<int> &arr);

//    queue<string> queue;
//    queue.push("s");
//    queue.push("a");
//    cout << &queue ;
//    cout << lcs_recursive("ABCDEFG", "ADKBDUCKDE", 7, 10) <<endl;
//    cout << "Return 1 if true and 0 otherwise --> " << is_palindrome("AwegCA") << endl;
//    cout << "Fibonacci recursive = " << fib_recursive(10) <<endl;
//    print_names();
//    print_names2();
//    cout << "The string passed is balanced if returning -1 but  " << checkBalance("(1+2") << endl;
//    mirror(queue);
    cout << "LCS dynamic = " << lcs_dynamic("abcs", "iasc") << endl;
    cout << "LIS dynamic = " << lis_dynamic({1,2,3,4,1,2,5,1,2,4}) << endl;
//    cout << "Sum of Array = " << simpleArraySum({1,2,3,4,5,6}) << endl;
//    cout << "Discrete 1 = "  << disc1(3) << endl;
//    cout << "Discrete 2 = "  << disc2(3) << endl;
//    cout << "Discrete 3 = "  << disc3(2) << endl;
//    cout << "Discrete 4 = "  << disc4(2) << endl;
//    addSet();
//    phoneBook();
//    printBinary(4);
//    printDecimal(2);
//    permute("abc", "");
//    diceRolls(2);
//    diceSum(4, 3);
//    staircase(5);
//    staircase_forloop(2);
//    cout << timeConversion("07:05:45AM") << endl;
    gradingStudents({1,2,3});
    getmean({1,2,3});
}
