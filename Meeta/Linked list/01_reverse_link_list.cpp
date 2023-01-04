#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void printLinkedList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void reverseList(Node *n)
{
    Node *current = n;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    n = prev;
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->next = first;
    head->data = 10;

    first->next = second;
    first->data = 20;
    second->next = NULL;
    second->data = 30;

    cout << "printing linked list :" << endl;
    printLinkedList(head);

    cout << "printing linked list after reversing  :" << endl;
    reverseList(head);
    printLinkedList(second);

    return 0;
}