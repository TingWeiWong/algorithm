//
//  binary.hpp
//  c++_xcode
//
//  Created by Andrew  on 1/29/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#ifndef binary_hpp
#define binary_hpp

#include <stdio.h>
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

#endif /* binary_hpp */
