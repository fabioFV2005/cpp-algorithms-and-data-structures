#include <iostream>
#include <vector>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* joinList(Node* list1, Node* list2) {
    Node* list3 = nullptr;
    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;
    while (list1 != nullptr) {
        list3 = insert(list3, list1->data);
        list1 = list1->next;
    }
    while (list2 != nullptr) {
        list3 = insert(list3, list2->data);
        list2 = list2->next;
    }
    return list3;
}
Node* sortList(Node* head) {
    Node* temp = head;
    bool swapped;
    int aux;
    if (head == nullptr)
        return head;
    while (swapped) {
        swapped = false;
        temp = head;
        while (temp->next != nullptr) {
            if (temp->data > temp->next->data) {
                aux = temp->data;
                temp->data = temp->next->data;
                temp->next->data = aux;
                swapped = true;
            }
            temp = temp->next;

        }
        temp = temp->next;

    }
    return head;
}
int main() {
    Node* list1 = nullptr;
    Node* list2 = nullptr;
    Node* list3 = nullptr;
    int data;
    for (int i = 1; i <= 3; i++) {
        cin >> data;
        list1 = insert(list1, data);
    }
    for (int i = 1; i <= 3; i++) {
        cin >> data;
        list2 = insert(list2, data);
    }
    list3 = joinList(list1, list2);
    list3 = sortList(list3);
    print(list3);
    return 0;
}
