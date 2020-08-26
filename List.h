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

    void insert_at_end_of_lll(int value);
    void display_not_equal_head();
    void display_all();

    int get_sum_larger_than_tail();

    bool did_find_more_than_once();

private:
    node * head;
    node * tail;

};

#endif //LIST
