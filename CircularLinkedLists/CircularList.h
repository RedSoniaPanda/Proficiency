#ifndef CIRCULARLIST
#define CIRCULARLIST

struct Node {
    Node * next;
    int data;
};

class CLL {
public:
    CLL();
    ~CLL();

    bool insert(int value);
    int display_all();

private:
    Node * head;
    Node * tail;

};

#endif //CIRCULARLIST
