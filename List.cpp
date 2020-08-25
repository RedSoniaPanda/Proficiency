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

void List::insert_at_end_of_lll(int value) {
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

    cout << "Display all in list ";
    for (curr = head; curr != nullptr; curr = curr->next)
        cout << curr->data << " ";

    cout << endl;
    delete curr;
}

// Iterative versions
void List::display_not_equal_head() {
    node * curr = new node;

    cout << "Display data that doesn't match head's ";
    for (curr = head->next; curr != nullptr; curr = curr->next)
        if (curr->data != head->data)
            cout << curr->data << " ";

    cout << endl;
    delete curr;
}

int List::sum_larger_than_tail() {
    node * curr = new node;
    int sum = 0;

    for (curr = head; curr != tail; curr = curr->next)
        if (curr->data > tail->data)
        sum += curr->data;

    return sum;
}

bool List::is_last_two_found_more_than_once() {
    node * curr = new node;
    node * one_before_tail = new node;
    int tail_data = tail->data;
    int one_before_tail_data = 0;
    int count_times = 0;

    for(curr = head; curr->next != tail; curr = curr->next) {
        if (curr->data == tail_data) {
            ++count_times;
        }
    }

    if (curr->data == tail_data) {
        ++count_times;
    }
    one_before_tail_data = curr->data;
    cout << "One before tail data " << one_before_tail_data << endl;
    one_before_tail = curr;

    for(curr = head; curr->next != one_before_tail; curr = curr->next) {
        if (curr->data == one_before_tail_data) {
            ++count_times;
        }
    }

    return count_times > 0;
}
