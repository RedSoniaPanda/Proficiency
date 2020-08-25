//
// Created by sophi on 8/25/2020.
//

#ifndef LIST
#define LIST

struct node
{
    int data;
    node * next;
};

class List {
public:
    List();
    ~List();

    void build_linear_linked_list(int value);
    void display_not_equal_head();
    void display_all();

private:
    node * head;
    node * tail;

};

#endif //LIST
