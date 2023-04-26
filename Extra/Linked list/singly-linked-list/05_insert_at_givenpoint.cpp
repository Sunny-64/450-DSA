#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// display of linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
Node *insert(Node *head, int pos, int value)
{
    Node *temp = new Node(value);
    if (pos == 1)
    {
        return temp;
    }
    Node *current = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        return head;
    }
    temp->next = current->next;
    current->next = temp;
    return head;
}

int main()
{

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    head = insert(head, 2, 70);
    head = insert(head, 5, 80);
    head = insert(head, 7, 90);
    printList(head);
    return 0;
}