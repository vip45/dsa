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
void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
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
    Node *node1 = NULL;
    for(int i=1;i<=5;i++){
        insertAtHead(node1, i*10);
    }
    print(node1);
}