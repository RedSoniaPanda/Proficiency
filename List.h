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

    void build(int value);
    void display();

private:
    node * head;
    node * tail;

};

#endif //LIST
