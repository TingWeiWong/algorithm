//
//  queue.cpp
//  c++_xcode
//
//  Created by Andrew  on 12/3/18.
//  Copyright © 2018 Andrew . All rights reserved.
//

#include "queue.hpp"
#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

void mirror(queue<string>& queue){
    int size = int(queue.size());
    stack<string> stack;
    for (int i = 0; i < size; i++){
        string s = queue.front();
        queue.pop();
        stack.push(s);
        queue.push(s);
    }
    while (!stack.empty()) {
        queue.push(stack.top());
        stack.pop();
    }
    
}
