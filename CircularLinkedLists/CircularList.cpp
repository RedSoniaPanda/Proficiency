#include "CircularList.h"
#include <iostream>

using namespace std;

CLL::CLL() {
    head = nullptr;
    tail = nullptr;
}

bool CLL::insert(int value) {
    Node * temp = new Node;
    temp->data = value;

    if (!head) {
        head = temp;
        head->next = head;
        temp = nullptr;
        return true;
    } else if (head->next == head) {
        temp->next = head;
        tail = temp;
        head->next = tail;
        temp = nullptr;
        return true;
    } else {
        temp->next = head;
        tail->next = temp;
        tail = temp;
        temp = nullptr;
        return true;
    }

    return false;
}

CLL::~CLL() {
    Node *curr = head;

    if (!head) {
        delete head;
        delete tail;
        return;
    }

    if (head->next == head) {
        delete head;
        delete tail;
        return;
    }

    while (curr) {
        if (!curr->next) {
            head = nullptr;
            curr = nullptr;
        }
        else {
            Node *temp = curr->next;
            if (temp == tail) {
                head->next = nullptr;
                tail = nullptr;
            }
            else {
                head = temp;
                curr = temp;
                tail->next = head;
                temp = nullptr;
            }
        }
    }

    delete head;
    delete tail;
}

int CLL::display_all() {
    Node *curr = head;
    int count = 0;

    if (!head){
        return count;
    }

    if (curr->next == head) {
        cout << head->data << endl;
        count += 1;
        return count;
    }

    for( ; curr->next != head; curr = curr->next ) {
        cout << curr->data << ", ";
        count += 1;
    }

    count += 1;
    cout << curr->data << endl;
    return count;
}
