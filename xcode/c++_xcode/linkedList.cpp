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

void fourNode(){
    // head points to a newly created node
    head = new ListNode;
    head -> data = 1;
    // middle and tail points to where head is pointing
    middle = head;
    tail = head;
    // head points to a new node
    head = new ListNode;
    head -> data = 2;
    // Make the middle pointer points to where head is pointing
    middle -> next = head;
    middle = middle -> next;
    
    // head points to a new node
    head = new ListNode;
    head -> data = 3;
    middle -> next = head;
    head = new ListNode;
    middle = middle -> next;
    head -> data = 4;
    middle -> next = head;
    head -> next = nullptr;
}
