#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        cout << "This is construtor" << endl;
        this->data = data;
        this->next = nullptr;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node = new Node(10);
    cout << sizeof(node) << endl;
    cout << node->data << endl;

    print(node);
}