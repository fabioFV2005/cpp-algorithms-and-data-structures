#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
int main(int argc, char const *argv[])
{
    Node *head = new Node(14);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
