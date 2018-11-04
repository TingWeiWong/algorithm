//
//  main.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include <iostream>
using namespace std;
<<<<<<< HEAD
void swap_without_pointer(int m = 18 , int n = 30);
int lcs_recursive(char *x,char *y,int m, int n){
=======
int lcs_recursive(char x,char y,int m, int n){
>>>>>>> 1b7fb9474a7a2598c65410d8e9ed412aac881d03
    if (m==0 or n==0){
        return 0;
    }
    else if (x[m] ==y[n]){
        return lcs_recursive(x, y, m-1, n-1)+1;
    }
    else{
        return max(lcs_recursive(x, y, m-1, n),lcs_recursive(x, y, m, n-1));
    }
    
}
<<<<<<< HEAD
int main() {
    int x = 17;
    int y = 35;
    swap_without_pointer(x, y);
    cout << x << "," << y <<endl;
=======
int main(int argc, const char * argv[]) {
    // insert code here...
    char x;
    char y;
    int m ;
    int n ;
    cout <<"Enter values for X "<<endl;
    cin >> x;
    cout <<"Enter values for Y "<<endl;
    cin >> y;
    cout <<"Enter values for m "<<endl;
    cin >> m;
    cout <<"Enter values for n "<<endl;
    cin >> n;
    cout << "LCS recursive = " << lcs_recursive(x, y, m, n);
>>>>>>> 1b7fb9474a7a2598c65410d8e9ed412aac881d03
    return 0;
}
void swap_without_pointer(int m, int n){
    int temp = m;
    m = n;
    n = temp;
}
