#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
public:
    Node *head;

    LinkedList();

    void insert(int value);
    void print();
};

#endif