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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int data)
{
    Node *tail = new Node(data);
    if (head == NULL)
    {
        head = tail;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = tail;
}

void insertAtPostion(Node*&head,int position, int data){
    Node*temp=head;
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    int count=1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node *mid = new Node(data);
    mid->next=temp->next;
    temp->next=mid;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    cout << "Hello World" << endl;
    Node *root = NULL;
    insertAtHead(root, 10);
    insertAtHead(root, 20);
    insertAtHead(root, 30);
    insertAtTail(root, 40);
    insertAtPostion(root,2,12);
    print(root);
}