import java.util.*;

class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}


class ReverseALinkedList{
    public static void main(String[] args){
        Node head = new Node(1); 
        Node second = new Node(2); 
        Node third = new Node(3); 
        Node fourth = new Node(4); 
        Node fifth = new Node(5); 
        head.next = second; 
        second.next = third; 
        third.next = fourth; 
        fourth.next = fifth; 
        fifth.next = null;
        head = reverseList(head);

        display(head);

    }
    static Node reverseList(Node head)
    {
        // code here
        Node next = head.next;
        Node curr = head;
       curr.next = null;
       while(next != null){
           Node temp = curr;
           curr = next;
           next = next.next;
           curr.next = temp;
        }
        return curr; 
    }


    static void display(Node head){
        Node ptr = head; 
        while(ptr != null){
            System.out.print(ptr.data + " -> ");
            ptr = ptr.next; 
        }
    }
}