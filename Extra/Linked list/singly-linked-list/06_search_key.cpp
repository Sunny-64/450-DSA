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
int search(Node *head, int key)
{
    int pos = 1;

    Node *temp = head;
    // if(key == temp->data){
    //     return pos;
    // }
    while (temp != NULL)
    {

        if (key == temp->data)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
    }

    return -1;
}

int recursiveSearch(Node *head, int key)
{
    if (head == NULL)
    {
        return -1;
    }
    if (key == head->data)
    {
        return 1;
    }
    else
    {

        int res = recursiveSearch(head->next, key);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return (res + 1);
        }
    }

    return -1;
}
int main()
{

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    cout << search(head, 30) << endl;
    cout << recursiveSearch(head, 30) << endl;
    printList(head);
    return 0;
}