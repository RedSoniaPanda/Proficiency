//
// Created by sophi on 8/25/2020.
//

#include "List.h"
#include <iostream>

List::List() {
    head = nullptr;
    tail = nullptr;
}

List::~List() {
    node * temp = new node;
    temp = head;

    while(temp != nullptr)
    {
        head = temp->next;
        temp = temp->next;
    }
    delete head;
    delete tail;
}

void List::build(int value) {
    node * temp = new node;
    temp->data = value;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

void List::display() {
    node * curr = new node;
    curr = head;

    while(curr != nullptr)
//    if(curr != nullptr)
    {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }

    delete curr;
}
