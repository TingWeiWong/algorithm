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

// Print all nodes of the tree with the given node as root
void printBinaryTree(TreeNode* node){
    if (node != nullptr){
        cout << node -> data << endl;
        printBinaryTree(node -> left);
        printBinaryTree(node -> right);
        }
}

int sizeBinaryTree(TreeNode* node){
    if (node == nullptr){
        return 0;
    }else{
        return 1 + sizeBinaryTree(node -> left) + sizeBinaryTree(node -> right);
    }
}

bool containsValue(TreeNode* node, int value){
    if (node != nullptr){
        if (node -> data == value){
            return true;
        }
        if (containsValue(node -> left, value) || containsValue(node -> right, value)){
            return true;
        }
    }
    return false;
}

