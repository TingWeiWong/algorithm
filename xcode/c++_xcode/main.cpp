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
#include "class.hpp"
#include "binary.hpp"
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
    double getMedian(const vector<int> arr);
    double getMean(vector<int> arr);
    double getMode(vector<int> arr);
    int solveQueen(int n);
    int** createBoard(int column, int row);
    vector<vector<int>> Board(int column, int row);
    void fourNode();
    void printBinaryTree(TreeNode* node);
    int sizeBinaryTree(TreeNode* node);
    void insertionSort(vector<int>& v);
    void bogoSort(vector<int>& v);
    void selectionSort(vector<int>& v);
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
    int test = **createBoard(2,2);
    vector<vector<int>> test2 = Board(1,1);
    cout << "Test = " << test << endl;
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
//    gradingStudents({1,2,3});
//    vector<int> testcase = {64630, 11735, 14216, 99233, 14470, 4978, 73429, 38120, 51135, 67060};
//    cout << "Mean = " << getMean(testcase) << endl;
//    cout << "Median = " << getMedian(testcase) << endl;
//    cout << "Mode = " << getMode(testcase) << endl;
//    int x = 42;
//    int* p = &x;
//    cout << "Address of P = " << p << endl;
//    cout << "Value of P = " << *p << endl;
//    fourNode();
//    TreeNode* root = new TreeNode(9,nullptr,nullptr);
//    root -> left = new TreeNode(6,nullptr,nullptr);
//    printBinaryTree(root);
//    cout << "Size of Binary Tree = " << sizeBinaryTree(root) << endl;
    vector<int> unsorted = {19,12,51,16,2,58};
    insertionSort(unsorted);
    for (auto i = unsorted.begin(); i != unsorted.end(); ++i){
        cout << *i << "th element = " << *i << endl ;
    }
}
