#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Remove Nth Node From End of List -> Leetcode

class Node
{
public:
    int value;
    Node *next;
    Node(int data)
    {
        value = data;
        next = nullptr;
    };
};
class ListNode
{
public:
    Node *head;

    ListNode()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
    int size_linkes_list()
    {
        int _size = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            _size++;
            temp = temp->next;
        }
        return _size;
    }

    void remove_data(int position)
    {
    }
};
int main()
{
    ListNode list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    int remove_value = 2;

    // list.print();
    cout << list.size_linkes_list();
    return 0;
};
