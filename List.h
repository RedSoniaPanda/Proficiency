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
    void display_not_equal_head_data();
    void display_all();

    int sum_larger_than_tail();

private:
    node * head;
    node * tail;

};

#endif //LIST
