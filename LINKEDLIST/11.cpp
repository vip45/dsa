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
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    cout << "Hello Learning Linked List" << endl;
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 1; i <= 3; i++)
    {
        insertAtHead(head, tail, i * 10);
    }
    insertAtTail(head, tail, -1);
    print(head);
}