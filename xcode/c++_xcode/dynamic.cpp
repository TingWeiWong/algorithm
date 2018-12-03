//
//  dynamic.cpp
//  c++_xcode
//
//  Created by Andrew  on 11/27/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "dynamic.hpp"
#include <iostream>
using namespace std;
int lcs_dynamic(string x,string y){
    int m = int(x.length());
    int n = int (y.length());
    int auxiliary[m+1][n+1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if (i ==0 || j ==0){
                auxiliary[i][j] = 0;
            }
            else if (x[i-1] == y[j-1]){
                auxiliary[i][j] = auxiliary[i-1][j-1]+1;
            }
            else{
                auxiliary[i][j] = max(auxiliary[i-1][j],auxiliary[i][j-1]);
            }
        }
    }
    return auxiliary[m][n];
}
