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

    void remove_item(int position, int size)
    {

        if (position > size)
            return;
        if (position == size)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int count = size - position;
        Node *temp = head;
        Node *prev = nullptr;
        while (temp != nullptr)
        {
            if (count == 0)
            {
                prev->next = temp->next;
                delete temp;
                break;
            }
            count--;
            prev = temp;
            temp = temp->next;
        }
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
    int remove_value = 5;

    // list.print();
    int size = list.size_linkes_list();

    list.remove_item(remove_value, size);
    list.print();
    return 0;
};
