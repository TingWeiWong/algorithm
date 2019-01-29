//
//  binary.cpp
//  c++_xcode
//
//  Created by Andrew  on 1/29/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "binary.hpp"
#include <iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left; //pointer to left subtree
    TreeNode* right;
    
    TreeNode(int data, TreeNode* left, TreeNode* right){
        this -> data = data;
        this -> right = right;
        this -> left = left;
    }
    bool isLeaf() const{
        return left == nullptr && right == nullptr;
    }
};

