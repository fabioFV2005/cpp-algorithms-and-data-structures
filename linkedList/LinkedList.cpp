#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList()
{
    head = nullptr;
}
void LinkedList::insert(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};
void LinkedList::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};