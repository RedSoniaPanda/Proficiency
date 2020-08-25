//
// Created by sophi on 8/25/2020.
//

#include "List.h"
#include <iostream>

using namespace std;

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

void List::build_linear_linked_list(int value) {
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

void List::display_all() {
    node * curr = new node;
    curr = head;

    cout << "Display all in list ";
    while(curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
    cout << endl;

    delete curr;
}

// Iterative version
void List::display_not_equal_head() {
    int data_of_first = head->data;
    node * curr = new node;

    curr = head->next;
    cout << "Display data that doesn't match head's ";
    while (curr != nullptr) {
        if (curr->data != data_of_first) {
            cout << curr->data << " ";
        }
        curr = curr->next;
    }
}
