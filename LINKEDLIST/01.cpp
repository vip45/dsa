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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cout << temp << " " << temp->data  << endl;

        ;
    }
}
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    insertathead(head, 12);
    insertathead(head, 13);
    print(head);
}