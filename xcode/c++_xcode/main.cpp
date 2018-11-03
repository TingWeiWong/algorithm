//
//  main.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/2/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include <iostream>
using namespace std;
int lcs_recursive(char *x,char *y,int m, int n){
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
int main(int argc, const char * argv[]) {
    // insert code here...
    char x;
    char y;
    int m ;
    int n ;
    cout <<"Enter values "<<endl;
    cin >> x,y,m,n;
    cout << "LCS recursive = " << lcs_recursive(&x, &y, m, n);
    return 0;
}

