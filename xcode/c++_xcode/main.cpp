//
//  main.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include <iostream>
using namespace std;
void swap_without_pointer(int m = 18 , int n = 30);
int lcs_recursive(char x,char y,int m, int n){
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
int main() {
    int x = 17;
    int y = 35;
    swap_without_pointer(x, y);
    cout << x << "," << y <<endl;
}
void swap_without_pointer(int m, int n){
    int temp = m;
    m = n;
    n = temp;
}
