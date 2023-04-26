#include <bits/stdc++.h>
using namespace std;
//creating node 
struct Node
{
    int data;
    Node *next;
    // creating constructor to init values
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

// recursive display of linked list , using recursion
void recursiveDisplay(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    recursiveDisplay(head->next);
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    printList(head);
    cout<<endl;
    recursiveDisplay(head);
    return 0;
}