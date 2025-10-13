#include "bits/stdc++.h"
using namespace std;

void print(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}

void deleteMiddle(stack<int> &stack, int count, int n)
{
    if (count == n / 2)
    {
        stack.pop();
        return;
    }
    int val = stack.top();
    stack.pop();
    deleteMiddle(stack, count + 1, n);
    stack.push(val);
}

int main()
{
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    deleteMiddle(stack, 0, stack.size());
    print(stack);
}