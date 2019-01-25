//
//  linkedList.cpp
//  c++_xcode
//
//  Created by Andrew  on 1/19/19.
//  Copyright © 2019 Andrew . All rights reserved.
//

#include "linkedList.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};
// Creating pointers middle ...
ListNode* middle;
ListNode* tail;
ListNode* head;

// Point middle to new node

void insert(int new_data){
    // head points to a newly created node
    head = new ListNode;
    head -> data = 1;
    // middle and tail points to where head is pointing
    middle = head;
    tail = head;
}
