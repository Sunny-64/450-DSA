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

Node *inserBegining(Node *head , int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;

}

Node *insertEnd(Node *head , int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head = inserBegining(head , 20);
    head = inserBegining(head , 30);
    head = inserBegining(head , 40);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    head = insertEnd(head , 40);
    printList(head);
    return 0;
}