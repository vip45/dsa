#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(int data, Node *&head)
{
    
    Node*newNode = new Node(data);
    Node *temp =head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *LL)
{
    Node *temp = LL;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    cout << "Hello Learning linked list" << endl;

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = nullptr;

    insertAtHead(5, head);
    insertAtTail(5, head);

    print(head);

    return 0;
}