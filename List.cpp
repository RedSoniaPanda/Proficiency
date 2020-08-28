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
        head->next = tail;
        temp = nullptr;
    }
    else if (tail == nullptr) {
        tail = temp;
        head->next = tail;
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
bool List::display_not_equal_head() {
    node * curr = new node;
    bool was_displayed = false;

    cout << "Display data that doesn't match head's ";
    for (curr = head->next; curr != nullptr; curr = curr->next)
        if (curr->data != head->data)
            cout << curr->data << " ";
    was_displayed = true;

    cout << endl;
    delete curr;
    return was_displayed;
}

int List::get_sum_larger_than_tail() {
    node * curr = new node;
    int sum = 0;

    for (curr = head; curr != tail; curr = curr->next)
        if (curr->data > tail->data)
            sum += curr->data;

    return sum;
}

bool List::did_find_more_than_once() {
    if (head == nullptr) {
        return false;
    }

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
    one_before_tail = curr;

    for(curr = head; curr->next != one_before_tail; curr = curr->next) {
        if (curr->data == one_before_tail_data) {
            ++count_times;
        }
    }

    return count_times > 0;
}

bool List::was_insert_successful(int value) {
    if (!head)
        return false;

    if (!tail)
        if (head->data == value)
            return true;

    if (tail->data == value)
        return true;

    return false;
}

// Recursive versions

bool List::remove_given_value(int value) {
    if (!head)
        return false;

    node * prev = nullptr;
    return this->remove_given_value(value, head, prev);
}

bool List::remove_given_value(int value, node *&curr, node *&prev) {
    bool was_removed = false;

    if (!curr) {
        return was_removed;
    }

    if (curr->data == value) {
        if (curr == head) {
            node * temp = curr;
            head = temp->next;
            curr = head;
            was_removed = true;
            return remove_given_value(value, curr, prev) + was_removed;
        }
        if (curr == tail) {
            prev->next = nullptr;
            tail = prev;
            was_removed = true;
            return was_removed;
        }

        node * temp = curr;
        prev->next = temp->next;
        curr = prev->next;
        was_removed = true;
        return remove_given_value(value, curr, prev) + was_removed;
    }

    prev = curr;
    return remove_given_value(value, curr->next, prev) + was_removed;
}
